//MIT License
//
//Copyright (c) 2016 Aggrey Apollo

#include <iostream>

int main();// decelerator for main
int main()//definition of main
{
    int number_of_elements;
    std::cout << "how many numbers would you like to enter ?... \n >>>"; //prompt for number of elements to be entered to array
    std::cin >> number_of_elements; // enter the number
    float numbers[number_of_elements];      //an array to store 10 numbers.
    float sorted_numbers[number_of_elements];      //an array to store 10 sorted  numbers.
    std::cout << "enter "<< number_of_elements <<" numbers ...\n" ;
    //using a for loop to store 10 numbers in an array
    for (int counter = 0;counter < number_of_elements; counter+= 1)
    {
        std::cout << "enter number \t" << counter+1 << "\n >>>"; //prompt for number
        std::cin >> numbers[counter]; // enter the number
    }


    //using a for loop to print 10 numbers from an array to screen
    std ::cout << "    >>list of entered numbers<< " << std::endl;
    for (int counter = 0;counter < number_of_elements; counter+= 1)
    {
        std::cout << "number at index " << counter+1 << " is :" << numbers[counter] <<"\n";//printing the number
    }


    //creating a new array to hold the  numbers for sorting.
    for (int counter = 0,counter2 = 0;counter<number_of_elements,counter2<number_of_elements;counter ++ ,counter2 +=1)
    {
        sorted_numbers[counter2]= numbers[counter];
    }


    bool sorted = false;
    while (not sorted)
    {
        int x;
        int y;
        for( x = 0,y = 1; y < number_of_elements; x ++,y++ )
        {
            if(sorted_numbers[y]<sorted_numbers[x])
            {
                float temporary = sorted_numbers[x];
                sorted_numbers[x]= sorted_numbers[y];
                sorted_numbers[y]= temporary;
            }
        }
        bool sorted2 = true;
        for( x = 0,y = 1; y < number_of_elements; x ++,y++ )
        {
            if(sorted_numbers[y]<sorted_numbers[x])
            {
                sorted2 = false;
            }
        }
        sorted = sorted2;
    }
    std ::cout << "\n\n    >>list of sorted numbers<< " << std::endl;
    for (int counter = 0;counter < number_of_elements; counter+= 1)
    {
        std::cout << "sorted number at index " << counter+1 << " is :" << sorted_numbers[counter] <<"\n";//printing the number
    }
    float median;
    if ((number_of_elements)%2 == 0)
    {
        median = (sorted_numbers[int((number_of_elements/2)-1)]+sorted_numbers[int((number_of_elements/2))])/2;
    }
    else
    {
        median = sorted_numbers[int((number_of_elements/2)+0.5)];
    }

    float sum = 0; // variable for sum
    for (int counter = 0;counter < number_of_elements; counter+= 1)//using loop to update elements of the array.
    {
        sum += numbers[counter];// updating value of sum
    }
    std::cout << "\nthe sum is  : " << sum << std::endl;// print value of sum to screen
    std::cout << "the mean is  : " << (sum/number_of_elements) << std::endl;// print value of sum to screen



    float minimum = numbers[0]; //set working minimum to first element of array
    //using for loop to continuously compare the working minimum to the next element of the array
    for (int counter = 0;counter<number_of_elements;counter +=1)
    {
        if(numbers[counter] < minimum) //if the next element is less than working minimum we set it to working minimum
        {
            minimum = numbers[counter];//set next to be working minimum
        }
    }
    std::cout << "the minimum is : " << minimum <<std::endl ;//print the minimum


    float maximum = numbers[0];//set working maximum to first element of array
    //using for loop to continuously compare the working minimum to the next element of the array
    for (int counter = 0;counter<number_of_elements;counter +=1)
    {
        if(numbers[counter] > maximum)//if the next element is greater than working maximum we set it to working maximum
        {
            maximum = numbers[counter];//set next to be working maximum
        }
    }
    std::cout << "the maximum is : " << maximum << std::endl;//print the maximum
    std::cout << "the median is : " << median << std::endl;//print the median

    return 0;//return statement
}
