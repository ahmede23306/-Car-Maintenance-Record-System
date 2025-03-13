# 🚗 Car Maintenance Record System  

## 📌 Description  
This program allows users to **record car maintenance details** and filter cars based on their type ('S' for Sedan, 'H' for Hatchback) and their next maintenance date before 2020. It supports multiple data entries within a single session.

## 🛠️ Features  
✔ **Dynamic memory allocation** – No fixed-size arrays, allowing flexibility.  
✔ **User-friendly looping** – Users can enter multiple sets of car details without restarting the program.  
✔ **Memory management** – Uses `new` and `delete[]` to manage heap memory properly.  
✔ **Input validation** – Ensures structured input for maintenance records.  

## 💻 How to Use  
1. **Compile the program** using a C++ compiler:  
   ```bash
   g++ car_maintenance.cpp -o car_maintenance
   ```
2. **Run the program**:  
   ```bash
   ./car_maintenance
   ```
3. **Follow the prompts**:  
   - Enter the number of cars.  
   - Provide license numbers, types, and next maintenance dates.  
   - Enter a car type to filter the results.  
   - Choose whether to enter another set of cars.  

---

## 📌 Example Input & Output  

### **First Entry**  
```plaintext
Enter number of cars: 3

Car 1:
Enter License Number: 1001
Enter Type (S/H): S
Enter Next Maintenance Date (day month year): 10 5 2019

Car 2:
Enter License Number: 2002
Enter Type (S/H): H
Enter Next Maintenance Date (day month year): 15 8 2021

Car 3:
Enter License Number: 3003
Enter Type (S/H): S
Enter Next Maintenance Date (day month year): 22 11 2018

Enter the car type to filter (S/H): S
```
### **Output:**  
```plaintext
Cars of type 'S' with next maintenance before 2020:
License: 1001 | Date: 10/5/2019
License: 3003 | Date: 22/11/2018

Do you want to enter details for another set of cars? (Y/N): Y
```

### **Second Entry**  
```plaintext
Enter number of cars: 2

Car 1:
Enter License Number: 4004
Enter Type (S/H): H
Enter Next Maintenance Date (day month year): 5 7 2017

Car 2:
Enter License Number: 5005
Enter Type (S/H): S
Enter Next Maintenance Date (day month year): 12 9 2023

Enter the car type to filter (S/H): H
```
### **Output:**  
```plaintext
Cars of type 'H' with next maintenance before 2020:
License: 4004 | Date: 5/7/2017

Do you want to enter details for another set of cars? (Y/N): N
```
---
