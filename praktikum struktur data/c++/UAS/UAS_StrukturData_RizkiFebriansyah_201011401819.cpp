    #include<iostream>
    #include<conio.h>
    #include<iomanip>
    using namespace std;
    main ( )
    {
    int Nilai [ 12 ];
    int i, j, k ,max=12 ;
    int temp ;
    bool tukar ;
    cout << endl;
    cout << "NAMA : Rizki febriansyah || NIM : 201011401819 ";
    cout << endl;
    cout << endl;
    cout << "Masukkan NIM Anda Satu-persatu :"<<endl;
    for (i=0; i<max; i++){
        cout<<"Elemen ke-"<<i<<" : ";
        cin>>Nilai [ i ];
    }
    //Proses Cetak Sebelum diurutkan
    cout<<"\nData sebelumnya diurut :";
    for (i=0; i<max ; i++)
    cout<<setw ( 3 )<<Nilai [ i ];
    //Proses Pengurutan
    i=0;
    tukar = true;
        while ((i<=max-2) && (tukar)){
            tukar=false;
                for (j=max-1; j>=i+1; j--){
                    if( Nilai [ j ] < Nilai [ j-1 ] ){
                        temp = Nilai [ j ];
                        Nilai [ j ] = Nilai [ j-1];
                        Nilai [ j-1 ] = temp;
                        tukar = true;
                        cout<<"\nUntuk j = "<<j<<" : ";
                        for (k=0; k<max; k++){
                            cout<<setw(3)<<Nilai [ k ] ;
                        }
                    }
                }
            i++ ;
        }
    //Proses Cetak setelah diurutkan
    cout<<"\nData setelah di urut : ";
    for (i=0; i<max; i++ ){

    cout<<setw ( 3 )<<Nilai [ i ] ;

    }
    getch () ;
    }
