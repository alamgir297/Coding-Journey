#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,a,n,ar[100],select,sum=0,flag=0,pos;
	float average=0;
	cout<< "Create an array\n";
    cout<< "How many data do yo want to insert?\n";
    cin>>n;
    j=n;
        for(i=0; i<n; i++) cin>>ar[i];
	do{
		cout<< "1\tInsert value\n";
		cout<< "2\tDelete value\n";
		cout<< "3\tSearch value\n";
		cout<< "4\tCalculate average\n";
		cout<< "5\tprint values\n";
		cout<< "6\tExit program (-1)\n";
		cout<< "Select : ";
		cin>>select;

		if(select==1){
			cout<< "\nIn which position do yo want to insert?\n";
			cin>>pos;
			cout<< "enter value to insert: ";
			cin>>a;
			j++;
			for(i=j; i>=pos-1; i--){
                ar[i+1]=ar[i];
			}
			ar[pos-1]=a;
			cout<< "\nAfter insertion\n";
			for(i=0; i<j; i++) cout<<ar[i]<< " ";
			cout<<endl;
		}
		else if(select==2){
			cout<< "\nwhich value you want to delete?\n";
			cin>>a;
			for(i=0; i<j; i++){
				if(ar[i]==a){
					pos=i;
					flag=1;
					break;
				}
			}
			if(flag==0) cout<< "Value not found\n";
			else{
                for(i=pos; i<j; i++){
                    ar[i]=ar[i+1];
                }
                cout<< "Successfully deleted\n";
                j--;
                cout<< "After deletion\n";
                for(i=0; i<j; i++) cout<< ar[i]<< " ";
                cout<<endl;
                }
		}
		 else if(select==3){
			cout<< "\nEnter value to search\n";
			cin>>a;
			for(i=0; i<j; i++){
				if(ar[i]==a){
					printf("Found %d at index %d\n",a,i);
					flag=0;
					break;
				}
				else{
                    flag=1;
				}
			}
			if(flag==1) cout<< "Not found\n";
		}
		else if(select==4){
            sum=0;
			for(i=0; i<j; i++){
				sum+=ar[i];
			}
			average=(float)sum/j;
			printf("\nAverage= %.2f\n", average);
		}
		else if(select==5){
			cout<< "\nValues are\n";
			for(i=0; i<j; i++) printf("%d ",ar[i]);
			cout<< "\n";
		}
	}while(select!=-1);
	return 0;
}
