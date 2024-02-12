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

 > ## Phase II
 > In addition to completing the "User Interface Specification" and "Class Diagram" sections below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column (aka Sprint Backlog).
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. Both time slots should be during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## User Interface Specification
 > Include a navigation diagram for your screens and the layout of each of those screens as desribed below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from [this template](https://redirect.cs.umbc.edu/~mgrass2/cmsc345/Template_UI.doc))

### Navigation Diagram
> Draw a diagram illustrating how the user can navigate from one screen to another. Here is an [example](https://creately.com/diagram/example/ikfqudv82/user-navigation-diagram-classic?r=v). It can be useful to label each symbol that represents a screen so that you can reference the screens in the next section or the rest of the document if necessary. Give a brief description of what the diagram represents.

### Screen Layouts
<img width="628" alt="CS100 Screen Layout 1" src="https://github.com/cs100/final-project-vinsi001-jjin060-ajaya014-mcama053/assets/72622020/a2cc609e-2cb4-4333-9d45-79bba73f4c88">

<img width="624" alt="CS100 Screen Layout 2" src="https://github.com/cs100/final-project-vinsi001-jjin060-ajaya014-mcama053/assets/72622020/55ae876e-b786-4bf7-bf9c-7ff60d90b963">




## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
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
 
