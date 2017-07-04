int     print_bits(unsigned char octet)
{
    int binary;
    int i;

    binary = 0;
    i = 1;
    while (octet > 0)
     {
      binary = binary + (octet % 2) * i;
      i = i * 10;
      octet = octet / 2;
     }
    printf("%i" , binary);

}

int main()
{
        unsigned char sch;

        sch = 14;
        print_bits(sch);

}
~                 