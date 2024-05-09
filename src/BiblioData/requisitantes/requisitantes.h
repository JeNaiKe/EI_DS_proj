typedef struct requisitante {
    int id_requisitante; // len(9 algarismos) && soma %10 == 0 && unique
    char Nome[42];
    char data_nasc[11]; // 29-09-1976
    char id_freguesia[7]; // len(4 caracteres + 2 letras) && exist in freguesias int = 4 bytes, 1 char = 1 byte.. same size
};

