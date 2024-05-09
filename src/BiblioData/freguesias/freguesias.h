typedef struct livro {
    char id_freguesia[7]; // len(4 caracteres + 2 letras) && exist in freguesias int = 4 bytes, 1 char = 1 byte.. same size
    char Titulo[64];
    char Autor[42]; 
    char Area[14]; 
    int Ano;
};