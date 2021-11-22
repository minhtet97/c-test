#include <stdio.h>

class Things
{
    private:
        float a, b, c;
    
    public:
        Things()
    
    {
            a = 0;
            b = 0;
            c = 0;
    }
    
    float getA() { return a;}
    float getB() { return b;}
    float getC() { return c;}
    
    virtual void Update() {};
        
};


Class Go : public Things
{
    private
    float Speed, Action;
    
    
    public
    Go()
    {
        Speed = 0;
        Action = 0;
    }
    
    void setSpeed(float Speed, float Action);
    float getSpeed() { return Speed;}
    float getAction() { return accel;}
    
    virtual void Update(){}
    
}

class Car : public Go
{
    public
    
    Go go;
    void setSpeed(float Speed, float Action){ Go.setSpeed(Speed, Action)};
    void Update();
}

void Go::setSpeed(float Speed, float Action)
{
    this->Speed = Speed;
    this->Action = Action;
}

void Car::Update()
{
    float Speed;
    Speed = Go.getSpeed();
    printf("%f\n", Speed);
}

int main(){
    
    Car car;
    car.setSpeed(10, 1);
    
    for (int i = 0; i < 100; i++)
    {
        car.Update();
    }
    return 0;
}
