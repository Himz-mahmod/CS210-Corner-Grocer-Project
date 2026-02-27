CS210 Corner Grocer Project
Project Summary

This project is a C++ item-tracking program developed for the Corner Grocer. The program reads a daily transaction input file and analyzes how frequently each grocery item was purchased. It provides a menu-driven interface that allows users to search for a specific item’s frequency, display all item frequencies, and generate a text-based histogram. The program also automatically creates a backup data file (frequency.dat) to store processed results.

What I Did Well

I successfully implemented an object-oriented design using a class structure with public and private members. I used a map<string, int> to efficiently store and manage grocery item frequencies. The menu system is structured clearly, and input validation ensures users enter valid menu options. I also followed industry best practices by using meaningful variable names and including inline comments for clarity.

Areas for Improvement

The program could be enhanced by improving input validation further, such as handling case-insensitive searches or trimming whitespace from user input. Additionally, the histogram display could be enhanced with improved formatting or alignment for better visual presentation. These improvements would make the program more user-friendly and adaptable.

Challenges and Solutions

One of the most challenging parts of this project was implementing file input and output correctly, particularly ensuring that the frequency.dat file was created and populated automatically. I overcame this by carefully reviewing C++ file handling syntax and testing the program multiple times to ensure data was written correctly. Using zyBooks and debugging tools helped reinforce my understanding.

Transferable Skills

This project strengthened my skills in file processing, object-oriented programming, and working with C++ data structures such as maps. These skills are transferable to future software development and cybersecurity projects, especially when working with structured data and implementing secure, efficient logic.

Maintainability and Readability

The program was designed to be maintainable by separating functionality into class methods, using descriptive naming conventions, and organizing the menu logic clearly. Inline comments explain important sections of code, making it easier for future developers (or myself) to understand and modify the program.
