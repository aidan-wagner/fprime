# MathReceiver Component

## 1. Introduction

Performs math operations

## 2. Requirements

The requirements for `Ref::MathReceiverComponentImpl` are as follows:

*Note:* Requirements are usually labelled with the initials of the component class, e.g. `CookieCutter -> CC-001`.

Requirement | Description | Verification Method
----------- | ----------- | -------------------
CC-001 | The `Ref::MathReceiverComponentImpl` component acknowledge ping requests | Unit Test
CC-002 | The `Ref::MathReceiverComponentImpl` component shall save the widgets | Unit Test

## 3. Design

### 3.1 Context

#### 3.1.1 Component Diagram

The `Ref::MathReceiverComponentImpl` component has the following component diagram:

![`Ref::MathReceiverComponentImpl` Diagram](img/MathReceiverComponentImplBDD.jpg "Ref::MathReceiverComponentImpl")

#### 3.1.2 Ports

The `Ref::MathReceiverComponentImpl` component uses the following port types:

Port Data Type | Name | Direction | Kind | Usage
-------------- | ---- | --------- | ---- | -----
[`Svc::Fatal`](../Fatal/docs/sdd.html) | FatalReceive | Input | Synch | Receive FATAL notifications

### 3.2 Functional Description

(Lorum Ipsum) For Unix variants, it delays for one second before exiting with a segmentation fault. This allows time for the FATAL to propagate to the ground system so the user can see what event occurred and also generates a core for debugging (assuming ulimit is set correctly). For VxWorks, it suspends the calling thread. Projects can replace this component with another that does project-specific behavior like resets.

### 3.3 Scenarios

#### 3.3.1 FATAL Notification

The `Ref::MathReceiverComponentImpl` handles FATAL notifications:

![FATAL Notification](img/FatalNotification.jpg)

### 3.4 State

`Ref::MathReceiverComponentImpl` has no state machines (or does it?).

### 3.5 Algorithms

`Ref::MathReceiverComponentImpl` has no significant algorithms.

## 4. Dictionary

Dictionaries: [HTML](MathReceiverComponentImpl.html) [MD](MathReceiver.md)

## 4. Module Checklists

Document            | Link
------------------- | ----
Design Checklist    | [Link](Checklist_Design.xlsx)
Code Checklist      | [Link](Checklist_Code.xlsx)
Unit Test Checklist | [Link](Checklist_Unit_Test.xls)

## 5. Unit Testing

[Unit Test Output](../test/ut/output/test.txt)

[Coverage Summary](../test/ut/output/RefMathReceiverComponentImpl_gcov.txt)

[Coverage Output - `Ref::MathReceiverComponentImpl.cpp`](../test/ut/output/MathReceiverComponentImpl.cpp.gcov)

[Coverage Output - `MathReceiverComponentAc.cpp`](../test/ut/output/MathReceiverComponentAc.cpp.gcov)

## 6. Change Log

Date       | Description
---------- | -----------
06/03/2021 | Initial Component Design



