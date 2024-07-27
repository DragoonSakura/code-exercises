___
```
Collection:      Code Exercises
Sub-Collection:  Overview
Title:           Core

Log Author:      DragoonSakura

Creation Date:   27/07/2024
```
___

# Overview: Core

An overview of the core methods for the Code Exercises.
These provide the main functionality for the UI, lesson loading and interaction.

**Include location:** CDEX/Core

## Index

- [Class](#classes)
    * [LessonHub](#lesson-hub)
    * [HubItem](#hub-item)
        + [Menu](#menu)
        + [LessonFile](#lesson-file)
        + [ReturnItem](#return-item)
        + [ExitItem](#exit-item)
- [Non-Class Header Only](#non-class-header-only)
- [Non-Class C++ Only](#non-class-c-only)
- [Other](#other)

### Classes

<a name="lesson-hub">LessonHub</a>
```
LessonHub
├-Desc          =>  The main class to connect all UI and IO features
├-Inheritance   =>  None
├-Compositions  =>  None
├-Flags         =>  None
└-Notes         =>  None
```

[(Return to Index)](#index)

<a name="hub-item">HubItem</a>
```
HubItem
├-Desc          =>  Abstract class to define Hub related items like menus and lessons
├-Inheritance   =>  None
├-Compositions  =>  None
├-Flags         =>  Abstract
└-Notes         =>  Base class to be inherited only
```

[(Return to Index)](#index)

<a name="menu">Menu</a>
```
Menu
├-Desc          =>  A class for a Single UI Menu to be displayed with options and handle the options
├-Inheritance   =>  HubItem
├-Compositions  =>  HomeItem, ReturnItem, ExitItem
├-Flags         =>  None
└-Notes         =>  None
```

[(Return to Index)](#index)

<a name="lesson-file">LessonFile</a>

[(Return to Index)](#index)

<a name="return-item">ReturnItem</a>

[(Return to Index)](#index)

<a name="exit-item">ExitItem</a>
```
ExitItem
├-Desc          =>  Controls the runtime of the program and exiting
├-Inheritance   =>  HubItem
├-Compositions  =>  None
├-Flags         =>  None
└-Notes         =>  ExtiItem::run() ends the program
```

[(Return to Index)](#index)

### Non-Class header Only

[(Return to Index)](#index)

### Non-Class C++ Only

[(Return to Index)](#index)

### Non-Class

[(Return to Index)](#index)
