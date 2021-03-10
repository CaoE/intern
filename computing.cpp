int main(){
    int a = 2, b = 3, c = 4; 
    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++){
            a = a * b + c;
        }
    }
return a;
}