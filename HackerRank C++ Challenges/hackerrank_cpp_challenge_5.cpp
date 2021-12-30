#include <iostream>

int main()
{
    
    int number_of_arrays,number_of_values_wanted;
    std::cin>>number_of_arrays>>number_of_values_wanted;
    int** arrays=new int*[number_of_arrays]();
    
    for(int i=0;i<number_of_arrays;i++)
    {
        
        int array_size;
        std::cin>>array_size;
        int* inside_array=new int[array_size]();
        for(int j=0;j<array_size;j++)
        {
            
            std::cin>>inside_array[j];
            
        }
        
        arrays[i]=inside_array;
        
    }
    
    for(int i=0;i<number_of_values_wanted;i++)
    {
        
        int a,b;
        std::cin>>a>>b;
        std::cout<<arrays[a][b]<<"\n";
        
    }
    
    return 0;
    
}
