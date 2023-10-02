#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* Function prototypes */
void verifyElf(unsigned char *e_ident);
void displayMagicNumbers(unsigned char *e_ident);
void displayClass(unsigned char *e_ident);
void displayData(unsigned char *e_ident);
void displayVersion(unsigned char *e_ident);
void displayOsAbi(unsigned char *e_ident);
void displayAbiVersion(unsigned char *e_ident);
void displayFileType(unsigned int e_type, unsigned char *e_ident);
void displayEntryPoint(unsigned long int e_entry, unsigned char *e_ident);
void closeElfFile(int elf);

/**
 * verifyElf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file, exit with code 98.
 */
void verifyElf(unsigned char *e_ident)
{
	int index;

	/* Check each character of the magic numbers */
	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * displayMagicNumbers - Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void displayMagicNumbers(unsigned char *e_ident)
{
	int index;

	printf("	Magic:	");

	/* Print each byte of the magic numbers */
	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * displayClass - Prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void displayClass(unsigned char *e_ident)
{
	printf("	Class:			");

	/* Check the ELF class value */
	if (e_ident[EI_CLASS] == ELFCLASSNONE)
	{
		printf("none\n");
	}
	else if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else if (e_ident[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	else
	{
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * displayData - Prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void displayData(unsigned char *e_ident)
{
	printf("	Data:			");

	/* Check the ELF data value */
	if (e_ident[EI_DATA] == ELFDATANONE)
	{
		printf("none\n");
	}
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
	}
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
	}
	else
	{
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * displayVersion - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void displayVersion(unsigned char *e_ident)
{
	printf("	Version:		%d", e_ident[EI_VERSION]);

	/* Check the ELF version value */
	if (e_ident[EI_VERSION] == EV_CURRENT)
	{
		printf(" (current)\n");
	}
	else
	{
		printf("\n");
	}
}

/**
 * displayOsAbi - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void displayOsAbi(unsigned char *e_ident)
{
	printf("	OS/ABI:			");

	/* Check the OS/ABI value */
	if (e_ident[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}

/**
 * displayAbiVersion - Prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 */
void displayAbiVersion(unsigned char *e_ident)
{
	printf("	ABI Version:		%d\n", e_ident[EI_ABIVERSION]);
}

/**
 * displayFileType - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void displayFileType(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("	Type:			");

	/* Check the ELF file type */
	if (e_type == ET_NONE)
	{
		printf("NONE (None)\n");
	}
	else if (e_type == ET_REL)
	{
		printf("REL (Relocatable file)\n");
	}
	else if (e_type == ET_EXEC)
	{
		printf("EXEC (Executable file)\n");
	}
	else if (e_type == ET_DYN)
	{
		printf("DYN (Shared object file)\n");
	}
	else if (e_type == ET_CORE)
	{
		printf("CORE (Core file)\n");
	}
	else
	{
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * displayEntryPoint - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void displayEntryPoint(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("	Entry point address:	");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
				  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}
	else
	{
		printf("%#lx\n", e_entry);
	}
}

/**
 * closeElfFile - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed, exit with code 98.
 */
void closeElfFile(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails, exit with code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		closeElfFile(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		closeElfFile(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	verifyElf(header->e_ident);
	printf("ELF Header:\n");
	displayMagicNumbers(header->e_ident);
	displayClass(header->e_ident);
	displayData(header->e_ident);
	displayVersion(header->e_ident);
	displayOsAbi(header->e_ident);
	displayAbiVersion(header->e_ident);
	displayFileType(header->e_type, header->e_ident);
	displayEntryPoint(header->e_entry, header->e_ident);

	free(header);
	closeElfFile(o);
	return (0);
}
