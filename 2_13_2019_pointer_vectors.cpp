/*Use of dynamic memory to implement dynamic array (like vector)*/

class MyVector{
    private:
        int* arr; //only stores ints
        int size;
    public:
        MyVector() : arr{nullptr} {};
        void push(int ele);
};

int main(){
    MyVector vec;
    vec.push(1);
    vec.push(2);
    cout << vec;
}