void sort012(int *arr, int n)
{    
    int cnt1=0,cnt2=0,cnt0=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cnt0++;
        }
        if(arr[i]==1){
            cnt1++;
        }
        if(arr[i]==2){
            cnt2++;
        }
    }
    int i=0;
    while(cnt0!=0){
        arr[i]=0;
        i++;
        cnt0--;
    }
    while(cnt1 !=0){
        arr[i]=1;
        i++;
        cnt1--;
    }
    while(cnt2!=0){
        arr[i]=2;
        i++;
        cnt2--;
    }
}
