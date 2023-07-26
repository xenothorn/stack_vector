#pragma once

#include <array>
#include <stdexcept>

template <typename T, size_t N>
class StackVector {
public:
    explicit StackVector(size_t a_size = 0);

    T& operator[](size_t index);
    const T& operator[](size_t index) const;

    ? ? ? begin();
    ? ? ? end();
    ? ? ? begin() const;
    ? ? ? end() const;

    size_t Size() const
    {
        return size_;
    }
    
    size_t Capacity() const
    {
        return N;
    }

    void PushBack(const T& value)
    {
        if (size_ == N) throw std::overflow_error("out of range");
        body_[size_] = value;
        ++size;
    }
    
    T PopBack();
    {
        if (size_ == 0) throw std::underflow_error("out of range");
        --size_;
        return body_[size_];
    }


private:
    T body_[N];
    size_t size_ = 0;
};





