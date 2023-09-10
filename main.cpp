//Waste Management System by Modabbir Adeeb
#include<iostream>
using namespace std;

class my_array {
public:
    my_array(int s): size(s) { a = new int[size]; }
    int &operator[](int i);
    int get_size() { return size; }
private:
    int size;
    int *a;
};
int &my_array::operator[](int i)
{
    if ((i>=0) && (i<size))
        return a[i];
    else
        throw "Array reference out of bounds";
}
//insertion (<<) operator overloading here
//extraction (>>) operator overloading here
friend ostream &operator<<( ostream &output, const my_array &D ) {
    output << "F : " << D.get_size();
    return output;
}

friend istream &operator>>( std::istream  &input, my_array &D ) {
    input >> D;
    return input;
}
    int main()

{
    my_array a(3);
    cin>>a;// assuming your input are 1 2 3
    cout<<a;//output would be 1 2 3
    return 0;
}