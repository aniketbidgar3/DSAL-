#include<iostream>
using namespace std;

class Array{
public:
//constructor
//Array(){
//int *array[100];
//}
//initialize array
void initstate(int *array[100]){
int m;
cout<<"Enter Maximum size of Elements : ";
cin>>m;
for(int i=0;i<m;i++)
array[i]=-1;
}

//size
int size( int *array[100]){
int i=0;
while(array[i]!=-1){
i++;
}
return i;
}

//search
int search(int *array[100],int y){
int b=size(&array[100]);
for (int i=0;i<b;i++){
if(array[i]==y){
return i;
}

else{
return 0;
}
}
}


//insert element in array
void insert(int *array[100] ,int x){
int a=search(&array[100],x);
if(a){
cout<<"This element is already present ";
}
else{
array[a]=x;
}
}




//display
void display(int *array[100]){
int s=size(&array[100]);
cout<<"{";
for(int i=0;i<s;i++){
cout<<array[i]<<" , " ;
}
cout<<"}";
}

//remove
void remove(int *array[100],int z){
int l=size(array[100]);
for(int i=0;i<l;i++){
if(array[i]==z){
while(i<l+1){
array[i]=array[i+1];
i++;
}
break;
}
}
}

};


int main(){

Array *a[10];
initstate(&a[10]);
insert(&a[10],12);
display(&a[10]);
/*
while(1){
cout<<"***********************Menu**********************\n";
cout<<"1.Declare Set \n2.Insert \n3.remove \n4.search \n5.size \n6.union \n7.intersection \n8.difference \n9.display ";
int ch;
cout<<"Enter your choice : ";
cin>>ch;
switch(ch){

case 1:
int array[10];
a.initialize(array[10]);
break;

case 2:
int x;
cout<<"Enter element to Insert : ";
cin>>x;
a.insert(array[10],x);
break;

case 3:
int y;
cout<<"Enter element to remove : ";
cin>>x;
a.remove(array[10],y);
break;

case 4:
int s;
cout<<"Enter element to search : ";
cin>>s;
a.search(array[10],s);
break;

case 5:
a.size(array[10]);
break;

case 6:
a.display(array[10])
break;

case 7:
a.display(array[10]);
break;

case 8:
a.display(array[10]);
break;

case 9:
a.display(array[10]);
break;


case(10):
exit(0);
break;

default:
cout<<"enter valid choice !";
}


}*/
return 0;
}



