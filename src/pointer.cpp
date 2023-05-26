# include <pointer.hpp>

Pointer::Pointer()
{

}

Pointer::~Pointer()
{

}

void Pointer::pointer_Compute()
{
    int a = 0;
    std::cout<<a<<std::endl;
}

int main(int argc, char **argv)
{
    Pointer *pointer = new Pointer();

    pointer->pointer_Compute();
}