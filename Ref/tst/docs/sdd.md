# tst Component

## 1. Introduction

is a test

## 2. Requirements

The requirements for `Ref::tstComponentImpl` are as follows:

*Note:* Requirements are usually labelled with the initials of the component class, e.g. `CookieCutter -> CC-001`.

Requirement | Description | Verification Method
----------- | ----------- | -------------------
CC-001 | The `Ref::tstComponentImpl` component acknowledge ping requests | Unit Test
CC-002 | The `Ref::tstComponentImpl` component shall save the widgets | Unit Test

## 3. Design

### 3.1 Context

#### 3.1.1 Component Diagram

The `Ref::tstComponentImpl` component has the following component diagram:

![`Ref::tstComponentImpl` Diagram](img/tstComponentImplBDD.jpg "Ref::tstComponentImpl")

#### 3.1.2 Ports

The `Ref::tstComponentImpl` component uses the following port types:

Port Data Type | Name | Direction | Kind | Usage
-------------- | ---- | --------- | ---- | -----
[`Svc::Fatal`](../Fatal/docs/sdd.html) | FatalReceive | Input | Synch | Receive FATAL notifications

### 3.2 Functional Description

(Lorum Ipsum) For Unix variants, it delays for one second before exiting with a segmentation fault. This allows time for the FATAL to propagate to the ground system so the user can see what event occurred and also generates a core for debugging (assuming ulimit is set correctly). For VxWorks, it suspends the calling thread. Projects can replace this component with another that does project-specific behavior like resets.

### 3.3 Scenarios

#### 3.3.1 FATAL Notification

The `Ref::tstComponentImpl` handles FATAL notifications:

![FATAL Notification](img/FatalNotification.jpg)

### 3.4 State

`Ref::tstComponentImpl` has no state machines (or does it?).

### 3.5 Algorithms

`Ref::tstComponentImpl` has no significant algorithms.

## 4. Dictionary

Dictionaries: [HTML](tstComponentImpl.html) [MD](tst.md)

## 4. Module Checklists

Document            | Link
------------------- | ----
Design Checklist    | [Link](Checklist_Design.xlsx)
Code Checklist      | [Link](Checklist_Code.xlsx)
Unit Test Checklist | [Link](Checklist_Unit_Test.xls)

## 5. Unit Testing

[Unit Test Output](../test/ut/output/test.txt)

[Coverage Summary](../test/ut/output/ReftstComponentImpl_gcov.txt)

[Coverage Output - `Ref::tstComponentImpl.cpp`](../test/ut/output/tstComponentImpl.cpp.gcov)

[Coverage Output - `tstComponentAc.cpp`](../test/ut/output/tstComponentAc.cpp.gcov)

## 6. Change Log

Date       | Description
---------- | -----------
06/10/2021 | Initial Component Design



