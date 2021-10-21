#include "random.h"

void run(){
    long long int quantidade = 1000;
    
    Experimentos* experimentos= new Experimentos;

    long long int *vector = new long long int[quantidade];
    long long int *vectorAux = new long long int[quantidade];

    gerador(vector, quantidade, 3);
    ClonarVetor(vector, vectorAux, quantidade);

    cout <<"Testando o MergeSort..."<<endl;
    clock_t c2, c1; /* variáveis que contam ciclos do processador */
    //printVector(vector, quantidade);


    c1=clock(); /* coloque aqui o código que você quer medir o tempo de execução */
    mergeSort(vector, quantidade);
    c2=clock();

    experimentos->tempo=(c2-c1)*1000/CLOCKS_PER_SEC;/* agora tempo guarda o tempo de execução em milisegundos */
        
    cout<<"-----------------------------------------------";
    cout<<"\nTempo de execucao...........: "<<experimentos->tempo<<" milissegundos";
    cout<<"\nNumero de comparacoes.......: "<<experimentos->comparacao;
    cout<<"\n-----------------------------------------------"<<endl;

    //printVector(vector, quantidade);

    ClonarVetor(vectorAux, vector, quantidade);
    cout<<"\n\n\nTestando o InsertionSort..."<<endl;
    //clock_t c2, c1; /* variáveis que contam ciclos do processador */
    
    printVector(vector, quantidade);

    c1=clock(); /* coloque aqui o código que você quer medir o tempo de execução */
    insertionsort(vector, quantidade);
    c2=clock();

    experimentos->tempo=(c2-c1)*1000/CLOCKS_PER_SEC;/* agora tempo guarda o tempo de execução em milisegundos */

    cout<<"-----------------------------------------------";
    cout<<"\nTempo de execucao...........: "<<experimentos->tempo<<" milissegundos";
    cout<<"\nNumero de comparacoes.......: "<<experimentos->comparacao;
    cout<<"\n-----------------------------------------------"<<endl;
    
    printVector(vector, quantidade);


    ClonarVetor(vectorAux, vector, quantidade);
    cout<<"\n\n\nTestando o RadixSort..."<<endl;
    //clock_t c2, c1; /* variáveis que contam ciclos do processador */
    printVector(vector, quantidade);

    c1=clock(); /* coloque aqui o código que você quer medir o tempo de execução */
    
            
    // Function Call
    radixsort(vector, quantidade);
    c2=clock();

    experimentos->tempo=(c2-c1)*1000/CLOCKS_PER_SEC;/* agora tempo guarda o tempo de execução em milisegundos */
        


    cout<<"-----------------------------------------------";
    cout<<"\nTempo de execucao...........: "<<experimentos->tempo<<" milissegundos";
    cout<<"\nNumero de comparacoes.......: "<<experimentos->comparacao;
    cout<<"\n-----------------------------------------------"<<endl;

    printVector(vector, quantidade);


    delete[] vector;
    delete[] vectorAux;
    delete[] experimentos;

}