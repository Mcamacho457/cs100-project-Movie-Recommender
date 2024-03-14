 # C++ Movie Recommender
 
 Authors: [Vasan Insixiengmay](https://github.com/VasanIns),
           [Jonathan Jin](https://github.com/jjin1407),
          [Michael Camacho](https://github.com/Mcamacho457),
           [Akshay Jayasinghe](https://github.com/AkJay1722)
    
## Project Description

 C++ Movie Recommender is a C++ terminal application that can suggest movies based on user inputs. The program will present the user with a terminal menu similar to “How would you like to search for a movie?” Options will be, “(D) Director, (G) genre, (Y) year”. For example, Michael Camacho may enter ‘D’ to search based on the Director, to which the program asks, “What is the name of the director?”. Michael then enters a director’s name such as “Christopher Nolan”, a suggested list of movies directed by Nolan (Oppenheimer, The Dark Knight, Inception, etc.) can be propagated and is shown to Michael. This idea can further be applied and adapted to different input parameters such as different genres and year of release.

 * This project is interesting to us as we all enjoy movies but have different preferences. Some of us enjoy horror/thrillers, while others enjoy comedy or drama. A movie recommender would make it easier and faster for a user to find movies they might like rather than searching through many movies that have been released. In addition, this project allows us to learn how to implement a database and helps us strengthen our teamwork skills through GitHub.

 * We plan to use a C++ as the main language. A C++ map will be implemented to access all the movies and information about the movies quickly corresponding to user inputs. IMDB’s database (free for educational purposes) will be utilized to store information and be implemented with C++. As a team, we will utilize Visual Studio Code and GitHub to collaborate.

 * Our project will take input in a terminal driven menu style system. A letter, word or phrase will be prompted towards the user. The input will be restricted to certain characters and numbers to avoid the program crashing. Upon entering required information, a list object will be generated from all the objects in the database that have attributes matching the search criteria. The output will be clearly displayed and organized with relevant information. In addition, the output will be presented like a page allowing the user to return and search again or exit out of the program.

 * The project will provide users to quickly find movies based on parameters inputted into the program. In addition, the program itself will have a feature to be able to scale and grow with new movies. This is achieved through the utilization of IMDB’s database.

 ## Phase II

## User Interface Specification

### Navigation Diagram

![User Navigation Diagram](https://github.com/cs100/final-project-vinsi001-jjin060-ajaya014-mcama053/assets/68290731/4b75c7a1-910a-4796-8f1b-493307ff72a8)

### Screen Layouts
![Movie Recommender Search](https://github.com/cs100/final-project-vinsi001-jjin060-ajaya014-mcama053/assets/132157197/8d97d733-0f4f-4703-9c18-341c7391e39d)

![CS100 Screen Layout 2](https://github.com/cs100/final-project-vinsi001-jjin060-ajaya014-mcama053/assets/72622020/5709c41a-6488-4573-94d7-29cbb59b3c06)




## Class Diagram
 > ![CS100FinalProjectUML drawio (2)](https://github.com/cs100/final-project-vinsi001-jjin060-ajaya014-mcama053/assets/68290731/6af1d696-a4e1-41cc-a755-4034bfdb7171)


## Class Description
### Parsing Algorithm:
This algorithm/method will simply clean our data and format it into a csv file with the information for each movie on every line in the structure of “Movie Name, Director, Genre, Cast Members, etc.” This will make it easier to implement an ifstream to create movie data objects.
### MovieData Class:
This class will be used to store all the information for a given movie. The information will consist of the movies name, who directed the movie, the main cast members, the movies rating on imdb’s website out of 10.0, it’s genre, and release year. All these variables will be private as we do not want the user to be able to change any of this information. Once a movie object is created, no changes are permitted as the information should be set in stone. All these movie properties will be set using the MovieData constructor which will take in parameters using an ifstream. There will be getters for each private data member as these will be needed to safely view the private data.
### MovieDatabase Class:
This class essentially organizes all the movies correctly. We will be using maps to organize movies by director, genre, or other properties. For example, the directorMap will organize movies by director names. A key may be “Quentin Tarantino” to which the values associated with this director will be movies with the titles “Kill Bill”, “Django”, etc. The same idea will be implemented for the genre, year, and rating maps. This will all be done in the MovieDatabase constructor which calls other methods such as addDirectorToMap and more. The getters will be used to retrieve the list of movies for a given director, genre, or year. This will be helpful for our recommendation algorithm.
### Recommendation Algorithm Class:
This class is responsible for generating a list of recommended movies based on the criteria chosen by the user. The constructor of this class takes in the database as a parameter and also the char values which determine the method of search, e.g. “D” for director, “G” for genre, etc. The algorithm also takes two string parameters to represent the actual values of the user’s choices. For example, if the user wants to search by director and genre, the string values will represent the director’s name and genre type, respectively. The getList() method will be used to output the recommended list of movies to the user.
### Menu Class:
This class is simply the menu for how a person would like movies to be recommended, whether it be by director, genre, year, etc. The choice and choice2 variables will store characters corresponding to recommendation choices. The string1 and string2 variables will store the actual values of the user’s choices, e.g. if the user wanted to search by director name, the choice variable will have a value of “D” and string1 will hold the director’s name which would be given by the user.
 
 > ## Phase III

### Updated Class Diagram
![Copy of CS100FinalProjectUML drawio (2)](https://github.com/cs100/final-project-vinsi001-jjin060-ajaya014-mcama053/assets/68290731/4003640b-c71d-4e10-8433-901e14cebdab)
 
 A SOLID principle we applied to the updated UML diagram is the single responsibility principle and the open close principle. The MovieDatabase class has one responsiblity of organizing movie data based on the parameters set. We achieved this by making the MovieDatabase class having an aggregation with the MovieData class and the MovieRecommender class having an aggregration with MovieDatabase class. In addition, we made this aggregation because the Menu class interacts with the user and all of their information is contained within the Menu class and that it is a member variable for the MovieRecommender class. This allows for us to declare just one object in main that operates the entire program while still having a separate class who's sole purpose is to interact with the user. Furthurmore, the RecommendationAlgorithm class was conceived to being one class and now an abstract class as our requirements for the program needed the ability to call different algorithms based on the user input.

 The parsing algorithm is tailored to our program. The parameters are set but we give it the option to extend and grow with new code based on new required parameters. This modification changed our focus and defined a better and organized way to design our code base.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
