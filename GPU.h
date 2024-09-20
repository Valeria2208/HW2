//
//  GPU.h
//  HW2
//
//  Created by Valeria Dudinova on 20.09.2024.
//

#ifndef GPU_H
#define GPU_H

class GPU
{
private:
    char* name;
    int memorySize; // В мегабайтах

public:
    GPU(const char* name, int memorySize);
    ~GPU();

    const char* getName() const;
    int getMemorySize() const;

    void setName(const char* name);
    void setMemorySize(int memorySize);
};

#endif 

