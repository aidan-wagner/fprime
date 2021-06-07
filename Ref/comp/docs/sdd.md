# comp Component

## 1. Introduction

comp does stuff

## 2. Requirements

The requirements for `REf::compComponentImpl` are as follows:

*Note:* Requirements are usually labelled with the initials of the component class, e.g. `CookieCutter -> CC-001`.

Requirement | Description | Verification Method
----------- | ----------- | -------------------
CC-001 | The `REf::compComponentImpl` component acknowledge ping requests | Unit Test
CC-002 | The `REf::compComponentImpl` component shall save the widgets | Unit Test

## 3. Design

### 3.1 Context

#### 3.1.1 Component Diagram

The `REf::compComponentImpl` component has the following component diagram:

![`REf::compComponentImpl` Diagram](img/compComponentImplBDD.jpg "REf::compComponentImpl")

#### 3.1.2 Ports

The `REf::compComponentImpl` component uses the following port types:

Port Data Type | Name | Direction | Kind | Usage
-------------- | ---- | --------- | ---- | -----
[`Svc::Fatal`](../Fatal/docs/sdd.html) | FatalReceive | Input | Synch | Receive FATAL notifications

### 3.2 Functional Description

(Lorum Ipsum) For Unix variants, it delays for one second before exiting with a segmentation fault. This allows time for the FATAL to propagate to the ground system so the user can see what event occurred and also generates a core for debugging (assuming ulimit is set correctly). For VxWorks, it suspends the calling thread. Projects can replace this component with another that does project-specific behavior like resets.

### 3.3 Scenarios

#### 3.3.1 FATAL Notification

The `REf::compComponentImpl` handles FATAL notifications:

![FATAL Notification](img/FatalNotification.jpg)

### 3.4 State

`REf::compComponentImpl` has no state machines (or does it?).

### 3.5 Algorithms

`REf::compComponentImpl` has no significant algorithms.

## 4. Dictionary

Dictionaries: [HTML](compComponentImpl.html) [MD](comp.md)

## 4. Module Checklists

Document            | Link
------------------- | ----
Design Checklist    | [Link](Checklist_Design.xlsx)
Code Checklist      | [Link](Checklist_Code.xlsx)
Unit Test Checklist | [Link](Checklist_Unit_Test.xls)

## 5. Unit Testing

[Unit Test Output](../test/ut/output/test.txt)

[Coverage Summary](../test/ut/output/REfcompComponentImpl_gcov.txt)

[Coverage Output - `REf::compComponentImpl.cpp`](../test/ut/output/compComponentImpl.cpp.gcov)

[Coverage Output - `compComponentAc.cpp`](../test/ut/output/compComponentAc.cpp.gcov)

## 6. Change Log

Date       | Description
---------- | -----------
06/07/2021 | Initial Component Design



