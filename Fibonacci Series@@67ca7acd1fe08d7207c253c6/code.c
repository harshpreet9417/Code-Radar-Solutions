// Your code here...
int fibonacciSeries(int n){
    int n1=0,n2=1;
    int n3;
   
    for(int i=0;i<=n;i++){
    if(n<=1){
        printf("0");
    }
    else{
        n1=n2;
        n2=n3;
        n3=n1+n2;
        printf("%d",n3);
    }
    
    //printf("%d ",n3);}
}