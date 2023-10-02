#include "main.h"

/**
 * printMagic - print magic byts
 * @h: header struct
 */
void printMagic(Elf64_Ehdr h)
{
	int a;

	printf("  Magic:   ");
	for (a = 0; a < EI_NIDENT; a++)
		printf("%2.2x%s", h.e_ident[a], a == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * printClass - print class
 * @h: header struct
 */
void printClass(Elf64_Ehdr h)
{
	printf("  Class:                             ");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
		break;
		case ELFCLASS32:
			printf("ELF32");
		break;
		case ELFCLASSNONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * printData - print data
 * @h: header struct
 */
void printData(Elf64_Ehdr h)
{
	printf("  Data:                              ");
	switch (h.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
		break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
		break;
		case ELFDATANONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * printVersion - print version
 * @h: header struct
 */
void printVersion(Elf64_Ehdr h)
{
	printf("  Version:                           %d", h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
		break;
		case EV_NONE:
			printf("%s", "");
		break;
		break;
	}
	printf("\n");
}

/**
 * printOsabi - print osabi
 * @h: header struct
 */
void printOsabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			print_osabi_more(h);
			break;
	}
	printf("\n");
}


/**
 * print_osabi_more - prints ELF osabi more
 * @h: the ELF header struct
 */
void print_osabi_more(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>", h.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * printABIversion  - print ABIversion
 * @h: header struct
 */
void printABIversion(Elf64_Ehdr h)
{
	printf("  ABI Version:                       %d\n",
		h.e_ident[EI_ABIVERSION]);
}

/**
 * prinType - print type
 * @h: header struct
 */
void prinType(Elf64_Ehdr h)
{
	char *ptr = (char *)&h.e_type;
	int d = 0;

	printf("  Type:                              ");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		d = 1;
	switch (ptr[d])
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", ptr[d]);
		break;
	}
	printf("\n");
}

/**
 * printEntry - print entry point add
 * @h: header struct
 */
void printEntry(Elf64_Ehdr h)
{
	int g = 0, length = 0;
	unsigned char *ptr = (unsigned char *)&h.e_entry;

	printf("  Entry point address:               0x");
	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		g = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!ptr[g])
			g--;
		printf("%x", ptr[g--]);
		for (; g >= 0; g--)
			printf("%02x", ptr[g]);
		printf("\n");
	}
	else
	{
		g = 0;
		length = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!ptr[g])
			g++;
		printf("%x", ptr[g++]);
		for (; g <= length; g++)
			printf("%02x", ptr[g]);
		printf("\n");
	}
}

/**
 * main - entry point
 * @ac: count
 * @av: vector
 *
 * Return: 1 or 0
 */
int main(int ac, char **av)
{
	int g;
	Elf64_Ehdr h;
	ssize_t m;

	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	g = open(av[1], O_RDONLY);
	if (g == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", av[1]), exit(98);
	m = read(g, &h, sizeof(h));
	if (m < 1 || m != sizeof(h))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", av[1]), exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L' &&
			h.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", av[1]), exit(98);

	printMagic(h);
	printClass(h);
	printData(h);
	printVersion(h);
	printOsabi(h);
	printABIversion(h);
	prinType(h);
	printEntry(h);
	if (close(g))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", g), exit(98);
	return (EXIT_SUCCESS);
}
