//
//  Laptop.hpp
//  HW2
//
//  Created by Valeria Dudinova on 20.09.2024.
//

#ifndef LAPTOP_H
#define LAPTOP_H

#include "CPU.h"
#include "SSD.h"
#include "GPU.h"
#include "RAM.h"

class Laptop
{
private:
    char* name;
    double price;
    char* color;
    CPU cpu;
    SSD ssd;
    GPU gpu;
    RAM ram;
    static int count;

public:
    Laptop(const char* name, double price, const char* color, const CPU& cpu, const SSD& ssd, const GPU& gpu, const RAM& ram);

    ~Laptop();

   
    static int getCount();


    void outputSpecs() const;
};

#endif
