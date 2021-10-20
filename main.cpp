#include <stdio.h>

class Array
{
    
    private:
        int num;
        int* shinArray;


    public:
        Array()
        {
            shinArray = nullptr;
        };
        ~Array()
        {
            delete[] shinArray;
            shinArray = nullptr;
            printf("%p\n", shinArray);
        }
        void Create(int z)
        {
            shinArray = new int[z];
            num = z;
        }
        int Get(int getz)
        {
            if (getz >= 0 && getx < num)
                return shinArray[getz];
            else
                return NULL;
        }

        void Set(int setz)
        {
            if (setz >= 0 && setz < num)
                newArray[setz] = setz;
            else
                return;
        }

    

};

int main()
{
    Array array;
    array.Create(1000);

    for (int i = 0; i < 1000; i++)
    {
        array.Set(i);
    }

    for (int i = 0; i < 1000; i++)
    {
        printf("num = %d\n", array.Get(i));
    }

    
    "num = %d\n", array.Get(-1);
    "num = %d\n", array.Get(1000);
}