# AlexLens

AlexLens is an Image Classification and Transfer Learning program tailored for heterogeneous platforms, with a custom-built Neural-Net-Classification system. This project is the brainchild of a collaborative effort at KIT by Viet Pham, Dmitrii Seletkov, Aleksandr Eismont, Jakub Trzciński, and Friedemann Claus.

## Features

- **Custom AlexNet Implementation**: Built from the ground up to provide a deep understanding of neural networks.
- **Heterogeneous Computing Platforms**: Optimized for different platforms, primarily CPU and Intel Movidius Neural Compute Stick with potential extensions for GPU and other hardware.
- **GUI-Based Interaction**: Intuitive user interface built with Qt5, allowing seamless interaction with the neural network system.
- **Transfer Learning Capabilities**: Employs PyTorch for adaptable and efficient transfer learning processes.
- **Modular Design**: The system is structured into distinct modules for neural networks, GUI, management, platform-specific operations, and training.
- **Docs**: Extensive documentation for the project.

## System Requirements

- OS: Ubuntu 18.04
- RAM: 8 GB
- CPU: Core-i5 4600 or similar
- GPU: Basic onboard graphics (higher capabilities for GPU-specific operations)
- Additional: Up to four Intel Movidius Neural Compute Sticks (Gen 1 officially supported, Gen 2 also compatible)

## Installation and Setup

To set up AlexLens, you need to:

1. Download the "resources" from [here](https://cloud.viet-pham.de/s/eKRM5JyxBpAAjEn?path=%2F).
2. Unzip and place them in the AlexLens folder.
3. Install the necessary libraries, including Qt5, Eigen, Torch, OpenVINO, OpenCL, HDF5, and Libusb.

Optionally, we also provide a training dataset as an example [here](https://cloud.viet-pham.de/s/eKRM5JyxBpAAjEn?path=%2F).

The necessary libraries are:

| Library  | Usecase                                                                        | Download/ Tutorial                                                                                                                                 | Comments                                                                                                                                                                                                                          |
 |----------|--------------------------------------------------------------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Qt5      | GUI                                                                            | [Download Page](https://www.qt.io/download-qt-installer?hsCtaTracking=9f6a2170-a938-42df-a8e2-a9f0b1d6cdce%7C6cb0de4f-9bb5-4778-ab02-bfb62735f3e5) | You can skip the registration. In the installer, select under "Qt 5.13.0": Desktop gcc 64-bit, Sources, Qt Charts, Qt Data Visualization, Qt Debug Information Files and under "Developer and Designer Tools": Qt 3D Studio 2.4.0 
| Eigen    | Matrices and vectors                                                           | `sudo apt-get install libeigen3-dev`                                                                                                               | that's all                                                                                                                                                                                                                        
| Torch    | Transfer Learning and CPU-Classification of other Neural Networks than AlexNet | [Download](https://download.pytorch.org/libtorch/cpu/libtorch-cxx11-abi-shared-with-deps-1.2.0.zip)                                                | Unzip and move libtorch folder to AlexLens/thirdparty                                                                                                                                                                             |
| OpenVINO | ASIC-Sticks and the included OpenCV                                            | [Tutorial](https://docs.openvinotoolkit.org/latest/_docs_install_guides_installing_openvino_linux.html#Hello-World-Face-Detection-Tutorial)        | Go through steps 1,2,3,5,7 and 9. After Step 9 you should have a folder named "inference_enginge_samples_build" in your /home/"username" directory                                                                                |
| OpenCL   | Low-level access to the GPU                                                    | `sudo apt update` `sudo apt install ocl-icd-opencl-dev` `sudo apt-get install beignet`                                                             | Confirmed to work on Intel HD Graphics of 4th, 7th and 8th generation                                                                                                                                                             |
| HDF5     | To read the weights file with a good performance                               | `sudo apt-get install libhdf5-dev`                                                                                                                 | that's all                                                                                                                                                                                                                        
| Libusb   | For dynamically detecting the amount of USB-devices used                       | `sudo apt-get install libusb-1.0-0-dev`                                                                                                            | that's all