#include <iostream>
#include <ctime>

using namespace std;



int main ()
{
    int n;
    cout<<"boyut gir:";
    cin>>n;
    int matrix_a[n][n];
    int matrix_b[n][n];
    int mult_matrix[n][n];
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++){
          matrix_a[i][j]=1;
          matrix_b[i][j]=1;
       }
    }
     cout<<"A Matrisi: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<" "<<matrix_a[i][j];
        cout<<"\n";
    }

    cout<<"B Matrisi: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<" "<< matrix_b[i][j];
        cout<<"\n";
    }

    cout<<"carpim Matrisi: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int toplam=0;
            for(int k=0; k<n; k++)
            {
                toplam+= matrix_a[i][k]*matrix_b[k][j];
            }

            mult_matrix[i][j]= toplam;
            cout<<" "<<mult_matrix[i][j];
        }
        cout<<"\n";
    }


    double duration = 0.00;
	clock_t start;

	start = clock();
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout << "Total Time to compute matrix multiplication: "<<duration <<" seconds" << endl;
}
