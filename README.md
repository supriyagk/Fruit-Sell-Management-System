# Organic Fruit Ordering System

The Organic Fruit Ordering System is a software solution designed to streamline the process of ordering fruits from a virtual fruit shop. With a user-friendly interface and intuitive features, this program offers a convenient way for customers to select and purchase their favorite fruits.

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Code Structure](#code-structure)

## Introduction
In today's fast-paced world, convenience is key. The Organic Fruit Ordering System caters to this need by providing a digital platform where users can explore a variety of fruits and place orders with ease. Whether it's a juicy Mango, a crisp Apple, or a succulent Strawberry, the Organic Fruit Ordering System has it all.

## Features
- **Menu Display**: The program displays a menu of available fruits, including Mango, Apple, Butterfruit, Strawberry, and Litchi.
- **Quantity Input**: Users can input the quantity of the selected fruit they want to order.
- **Unit Selection**: Each fruit has a corresponding unit (e.g., kg for Mango, box for Strawberry), which is displayed along with the fruit name.
- **Order Confirmation**: After entering the quantity, the program confirms the user's order by displaying the chosen fruit name, quantity, and unit.
- **Error Handling**: The program handles invalid menu options gracefully, prompting users to enter a valid option.
- **Total Price Calculation**: The program calculates the total price based on the selected fruit and quantity.
- **Payment Method Selection**: Users can choose from various payment methods (e.g., Cash, Card, UPI).
- **Order History**: The program saves order history to a file and displays it to the user.
- **Order Sorting**: The order history can be sorted by total price.

## Code Structure
- **main.c**: The main entry point of the program, containing the main loop and core logic.
- **orderFruit.c**: Contains the function to handle the ordering of fruits.
- **calculateTotalPrice.c**: Contains the function to calculate the total price of the order.
- **getMenuOption.c**: Contains the function to display the menu and get the user's menu option.
- **getPaymentMethod.c**: Contains the function to get the payment method from the user.
- **validatePayment.c**: Contains the function to validate the chosen payment method.
- **processPayment.c**: Contains the function to process the payment.
- **FruitOrder.h**: Header file defining the `FruitOrder` structure and the `PaymentMethod` enumeration.



