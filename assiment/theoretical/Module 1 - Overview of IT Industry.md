### Module 1 - Overview of IT Industry



###### 1.What is software? What is software engineering?



Ans.Software isn't just code—it's the invisible powerhouse behind every digital experience. From the app you check your messages on to the autopilot system guiding planes, software orchestrates it all. It’s like the director of a movie: unseen but central to the performance.



Example: Google Maps calculating your fastest route is software in action. It’s not just telling you directions—it’s analyzing real-time traffic data, estimating travel time, and even rerouting you based on live conditions.



Software engineering takes the messy art of coding and adds science, structure, and strategy. It’s a discipline that blends creativity and analytical thinking to build reliable, scalable systems.

Think of it like city planning, but for digital infrastructure:

• 	Architects = Software engineers designing the system

• 	Construction workers = Developers building it

• 	Inspectors = QA testers making sure it’s safe and efficient

• 	Maintenance crew = Engineers who monitor and upgrade the system over time









###### 2.Explain types of software 



###### Ans. \* System Software

&nbsp;    • 	Operating Systems like Windows, macOS, and Linux manage hardware and provide a platform for other software.

&nbsp;    .	Utilities help with maintenance tasks like antivirus scans, file management, or disk cleanup.

&nbsp;    • 	Device Drivers act like translators between the hardware (like your printer) and the operating system.



###### &nbsp; \* Application Software

&nbsp;    • 	Productivity Tools: Word processors, spreadsheets, presentation software (e.g., Microsoft Word, Excel).

&nbsp;    • 	Creative Software: Graphic design tools, video editors, music production apps.

&nbsp;    • 	Communication Software: Messaging apps, email clients, video calling platforms.

&nbsp;    • 	Games and Entertainment: From solitaire to high-end gaming titles.



###### &nbsp; \*  Programming Software

&nbsp;    • 	Text Editors and Integrated Development Environments (IDEs): Tools like VS Code or Eclipse.

&nbsp;    • 	Compilers and Interpreters: Convert human-readable code into machine-readable instructions.

&nbsp;    • 	Debuggers: Help track down and fix coding issues.





###### 3.What is SDLC? Explain each phase of SDLC

&nbsp;    

Ans. Software Development Life Cycle—is like the master blueprint for building software. It’s a structured process that guides teams from the spark of an idea all the way to a working product that’s maintained over time. Think of it as the “recipe” for cooking up reliable, efficient, and user-friendly software.

&nbsp;  1️⃣ Planning

&nbsp;    . Define goals, scope, and resources.

&nbsp;    • 	Identify risks and create a timeline.

&nbsp;    • 	Like sketching the map before a road trip—you need to know where you’re headed.

&nbsp;  2️⃣ Requirement Analysis

&nbsp;     • 	Gather and document what users need.

&nbsp;     • Create a Software Requirements Specification (SRS).

&nbsp;     • This is the “wishlist” phase—what should the software do?

&nbsp;  3️⃣ Design

&nbsp;     •  Decide how the software will look and function.

&nbsp;     • Create architecture diagrams, UI mockups, and database designs.

&nbsp;     • It’s like designing the blueprint for a house before construction.

&nbsp;  4️⃣ Development

&nbsp;     • 	Developers write the actual code.

&nbsp;     • Front-end, back-end, databases—all come together.

&nbsp;     • This is the “construction” phase where the house is built.

&nbsp;  5️⃣ Testing

&nbsp;     • 	Check for bugs, performance issues, and security flaws.

&nbsp;     • Use unit tests, integration tests, and user acceptance testing.

&nbsp;     • Like inspecting the house to make sure it’s safe and functional.

&nbsp;  6️⃣ Deployment

&nbsp;     • 	Release the software to users.

&nbsp;     • Could be a full launch or a phased rollout.

&nbsp;     • Think of it as handing over the keys to the new homeowners.

&nbsp;  7️⃣ Maintenance

&nbsp;     •  Fix bugs, update features, and ensure smooth operation.

&nbsp;     • Software evolves with user needs and tech changes.

&nbsp;     • Like regular home maintenance—patching leaks and upgrading appliances.





###### 4\. What is DFD? Create a DFD diagram on Flipkart 



Ans.A Data Flow Diagram (DFD) is a visual representation of how data moves through a system. It shows:

&nbsp;    • 	Processes that transform data

&nbsp;    • 	Data stores where data is held

&nbsp;    • 	External entities that interact with the system

&nbsp;    •  Data flows between all these components

&nbsp;               \[Customer] ---> (Browse Products) ---> \[Product Database]

&nbsp;               \[Customer] ---> (Place Order) ---> \[Order Management System]

&nbsp;               (Order Management System) ---> (Process Payment) ---> \[Payment Gateway]

&nbsp;               (Order Management System) ---> (Update Inventory) ---> \[Inventory Database]

&nbsp;               (Order Management System) ---> (Generate Invoice) ---> \[Invoice Database]

&nbsp;               (Order Management System) ---> (Notify Seller) ---> \[Seller]



&nbsp;      Components:

&nbsp;            - External Entities: Customer, Seller, Payment Gateway

&nbsp;            - Processes: Browse Products, Place Order, Process Payment, Update Inventory, Generate Invoice, Notify Seller

&nbsp;            - Data Stores: Product Database, Order Management System, Inventory Database, Invoice Database

&nbsp;            - Data Flows: Arrows showing how data moves between entities, processes, and stores



&nbsp;              

###### 

###### 5.What is Flow chart? Create a flowchart to make addition of two numbers

&nbsp;      

Ans.A flowchart is a diagram that visually represents the steps in a process. It uses standard symbols like:

&nbsp;     • 	Oval for Start/End

&nbsp;     • 	Parallelogram for Input/Output

&nbsp;     • 	Rectangle for Process

&nbsp;     • 	Diamond for Decision

&nbsp;  Flowchart: Addition of Two Numbers

&nbsp;      

&nbsp;          \[Start]

&nbsp;            |

&nbsp;            v

&nbsp;      \[Input A and B]  ← (Parallelogram)

&nbsp;            |

&nbsp;            v

&nbsp;      \[Sum = A + B]    ← (Rectangle)

&nbsp;            |

&nbsp;            v

&nbsp;     \[Display Sum]    ← (Parallelogram)

&nbsp;            |

&nbsp;            v

&nbsp;          \[End] 





&nbsp;     • 	Start: Begin the process.

&nbsp;     • 	Input A and B: Ask the user to enter two numbers.

&nbsp;     • 	Sum = A + B: Add the numbers and store the result.

&nbsp;     • 	Display Sum: Show the result to the user.

&nbsp;     • 	End: Finish the process.







###### 6.What is Use case Diagram? Create a use-case on bill payment on paytm.



&nbsp;Ans. A Use Case Diagram is a type of UML (Unified Modeling Language) diagram that visually represents how users (called actors) interact with a system to achieve specific goals. It helps identify:

&nbsp;     • 	Actors: People or systems interacting with the software

&nbsp;     • 	Use Cases: Functionalities or services the system provides

&nbsp;     • 	Relationships: How actors and use cases are connected.

&nbsp;   

###### &nbsp;    Use Case Diagram: Bill Payment on Paytm

&nbsp;         1.Actors:

&nbsp;              • 	User: The person paying the bill

&nbsp;              • 	Paytm System: The platform handling the transaction

&nbsp;              • 	Bank/Wallet: External payment source

&nbsp;              • 	Bill Provider: Utility company or service provider



&nbsp;         2. Use Cases:

&nbsp;              • 	Login to Paytm

&nbsp;              • 	Select Bill Type (Electricity, Water, etc.)

&nbsp;              • 	Enter Bill Details

&nbsp;              • 	Verify Bill Amount

&nbsp;              • 	Choose Payment Method

&nbsp;              • 	Make Payment

&nbsp;       

&nbsp;         3. Relationships:

&nbsp;              • 	The User interacts with all use cases.

&nbsp;              • 	The Paytm System processes and connects to the Bank/Wallet and Bill Provider during payment and confirmation.

&nbsp;              • 	Receive Confirmation

&nbsp;              • 	View Transaction History

&nbsp;       

&nbsp;         4.  Textual Layout of the Diagram

&nbsp;               

&nbsp;                             \[User]

&nbsp;                                |

&nbsp;                                v

&nbsp;                         (Login to Paytm)

&nbsp;                                |

&nbsp;                                v

&nbsp;                        (Select Bill Types)

&nbsp;   v                            | 

&nbsp;                                v

&nbsp;                        (Enter Bill Details)             

&nbsp;                                |

&nbsp;                                v

&nbsp;                       (Verify Bill Amount)

&nbsp;                                |

&nbsp;                                v

&nbsp;                (Choose Payment Method) ---> \[Bank/Wallet]

&nbsp;                                | 

&nbsp;                                v

&nbsp;                   (Make Payment) ---> \[Bill Provider]

&nbsp;                                |

&nbsp;                                v

&nbsp;                      (Receive Confirmation)

&nbsp;                                |

&nbsp;                                v

&nbsp;                    (View Transaction History)        



