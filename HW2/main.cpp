//
//  main.cpp
//  HW2
//
//  Created by Valeria Dudinova on 20.09.2024.
//

#include "Laptop.h"
#include "CPU.h"
#include "SSD.h"
#include "GPU.h"
#include "RAM.h"
#include <iostream>

using namespace std;

int main() {
    CPU cpu("Intel Core i7", 8, 3.5);
    SSD ssd(512, "Samsung");
    GPU gpu("NVIDIA GTX 1650", 4096);
    RAM ram(16384, "DDR4");

    Laptop laptop("Dell XPS 15", 1500.0, "Silver", cpu, ssd, gpu, ram);

    laptop.outputSpecs();

    cout << "Total laptops created: " << Laptop::getCount() << endl;

    return 0;
}

