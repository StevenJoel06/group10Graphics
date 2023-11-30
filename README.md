# RayDrive

## Project Overview
The goal of this project is to create an application that utilizes ray tracing to render a realistic 3D scene featuring a car. Users will be able to interact with the scene, adjusting parameters such as the car's position, lighting conditions, and camera angles.

This will be available for a handful of environments.

The game demonstrates various concepts such as ray-tracing elements such as shadows, reflections and motion blurring.
It also implements a robust physics engine that accurately simulates real-world car behavior, including acceleration, braking, cornering, and suspension dynamics and weight transfer.


## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Running the Game](#running-the-game)
- [Technology Stack](#technology-stack)
- [Optional Configs](##Optional Configs)


## Introduction
RayDrive is an interactive game that leverages ray tracing technology to create a visually stunning and immersive gaming experience. Players navigate a dynamic environment with realistic features, including reflections, shadows, and weather changes.

## Features

- Realistic Ray Tracing Effects
  - Stunning Reflections
  - Dynamic Shadows
  - Weather Changes
- Interactive Gameplay

## Getting Started

### Clone the Project:

Fork the project repository on GitHub to your own GitHub account.
Clone your forked repository to your local machine.
Open the project in Unreal Engine.

### Set Up Dependencies:

Ensure that you have installed the necessary dependencies, including the NVIDIA PhysX SDK and the DirectX Raytracing SDK.
You also need to configure Visual Studio for unreal engine by installing the necessary dependencies using visual studio 2022 installer

### Build and Run the Project:

Click the "Build" button in the Unreal Engine Editor to build the project for the web.
This will generate the necessary files for deployment to a web server.
Once the project is built, click the "Play" button to launch the web-based car ray tracing experience in a standalone browser window.

## Prerequisites
- Unreal Engine 5.1 or later.
- A basic understanding of C++ programming, as Unreal Engine's Blueprints visual scripting system is built upon C++ concepts.
- Familiarity with ray tracing concepts and techniques.
- A basic understanding of physics engines and their application in game development.

### Running the Game

**Open Editor:** Launch the Unreal Engine Editor and select the project you want to run. You can optionally open the project, particularly the source file to access the C++ code preferrably in Visual Studio. {The .uasset files ar in inary and can't really be opened}

**Build Project:** Click the "Build" button or press Ctrl+B to build the project for the desired platform, such as Windows, Android, or iOS.

**Deploy Game:** Deploy it to the target device or emulator. This typically involves copying the packaged game files to the device or emulator's storage.

**Run the Game:** On the target device or emulator, locate the game executable file and launch it. The game should start running and you can interact with it using the device's controls or input methods.

## Technology Stack

- **C++** : game implementation
- **Blueprints** for visual scripting eg.
  - Lumen and Nanite for current-generation lighting and rendering
  - Procedural Content Generation Blueprints
  - Auto Material Blueprints
  - Vehicle Blueprints
- **C#:** for blueprints scripting and managing third-party plugins

## Optional Configs

First, open the project and under project settings change the Engines scalability settings to the one your computer can handle. With the release of UE5, some new rendering features have been enabled. For lower end machines it may be required to turn these off. You can do so via the Project Settings. 
Secondly, increase the texture streaming pool size from 1000 to 5000

#### DefaultEngine.ini
```
r.ReflectionMethod=1 ;lumen reflection
r.DynamicGlobalIlluminationMethod=1 ;lumen global illumination
r.Shadow.Virtual.Enable=1 ;virtual shadow maps
[/Script/WindowsTargetPlatform.WindowsTargetSettings]
DefaultGraphicsRHI=DefaultGraphicsRHI_DX12 // Use DX12 for new rendering features above
```

**Game Assets:** 

Licensed for use with the Unreal Engine only.
1. Castle assets from the Unreal marketplace
2. Various mega scans assets (You can change these to the ones you desire as they are mainly plants and foliage
Without a custom license you cannot use to create sequels, remasters, or otherwise emulate the original game or use the original game’s trademarks, character names, or other IP to advertise or name your game. 
(Unreal Engine EULA applies) 
(Please note this applies to the Game Assets that refer to Electric Dreams, you can still use the project code and content to build your own Unreal Engine game)
