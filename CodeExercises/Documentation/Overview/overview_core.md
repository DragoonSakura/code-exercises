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
    * [LessonHub](#lessonhub)
    * [HubItem](#hub-item)
        + [Menu](#menu)
        + [LessonFile](#lessonfile)
- [Non-Class Header Only](#non-class-header-only)
- [Non-Class C++ Only](#non-class-c-only)
- [Other](#other)

## Classes

### LessonHub

- Has:
    * An initial menu to interface with (see: [Menus](#menu))
- Duties:
    * Allow returning to initial menu
    * Allow returning to a previous item
    * Handle user input

```
LessonHub
├-Desc          =>  The main class to connect all UI and IO features
├-Inheritance   =>  None
├-Compositions  =>  HubItems
├-Flags         =>  None
└-Notes         =>  None
```

[(Return to Index)](#index)

#### HubItem
```
HubItem
├-Desc          =>  Abstract class to define Hub related items like menus and lessons
├-Inheritance   =>  None
├-Compositions  =>  None
├-Flags         =>  Abstract
└-Notes         =>  Base class to be inherited only
```

[(Return to Index)](#index)

##### Menu

- A menu is linked to hub items
- A Hubitem can be reached from a single unique menu
- All Manus trace back to a single initial menu
- Duties:
    * List the child HubItems
    * Handle commands to go to child HubItems

```
Menu
├-Desc          =>  A class for a Single UI Menu to be displayed with options and handle the options
├-Inheritance   =>  HubItem
├-Compositions  =>  HubItem
├-Flags         =>  None
└-Notes         =>  None
```

[(Return to Index)](#index)

##### LessonFile

> [!Note]
> Requires the Archive directory with the txt files

```
LessonFile
├-Desc          =>  Controls the UI for a single Lesson
├-Inheritance   =>  HubItem
├-Compositions  =>  None
├-Flags         =>  None
└-Notes         =>  None
```

[(Return to Index)](#index)
- [LessonFile](#)

## Non-Class header Only

[(Return to Index)](#index)

## Non-Class C++ Only

[(Return to Index)](#index)

## Other

[(Return to Index)](#index)
