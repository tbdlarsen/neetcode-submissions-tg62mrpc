class DynamicArray {
private:
    int* arr;
    int size;
    int capacity;

public:

    DynamicArray(int capacity) {
        arr = (int*) malloc(capacity * sizeof(int));
        this->capacity = capacity;
        size = 0;
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (size == capacity){
            resize();
        }

        
        arr[size] = n;
        size +=1;
    }


    int popback(){
        size -= 1;
        return arr[size];
    }

    void resize() {
        capacity *= 2;
        arr = (int*)realloc(arr, capacity*sizeof(int));
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }

};

