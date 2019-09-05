# AlexLens

AlexLens is an Image Classification and Transfer Learning program built from scratch. It was developed during a project at KIT.

For it to run you need to follow three steps:

 1. Download "resources" [here](https://cloud.viet-pham.de/s/eKRM5JyxBpAAjEn?path=%2F)
 2. Unzip it and place it in the AlexLens folder
 3. Install the necessary libraries, if you don't have them running already:

 The necessary libraries are:
 
 | Library | Usecase | Download/ Tutorial | Comments |
 | --- | --- | --- | --- |
 | QT5 | GUI | [Download Page](https://www.qt.io/download-qt-installer?hsCtaTracking=9f6a2170-a938-42df-a8e2-a9f0b1d6cdce%7C6cb0de4f-9bb5-4778-ab02-bfb62735f3e5)  | You can skip the registration. In the installer select under Qt 5.13.0: Desktop gcc 64-bit, Sources, Qt Charts, Qt Data Visualization, Qt Debug Information Files and under Developer and Designer Tools: Qt 3D Studio 2.4.0 
 | Eigen | Matrices and vectors | `sudo apt-get install libeigen3-dev` | done
 | Torch | Transfer Learning and CPU-Classification of other Neural Nets than AlexNet | [Download](https://download.pytorch.org/libtorch/cpu/libtorch-cxx11-abi-shared-with-deps-1.2.0.zip) | Unzip and move libtorch folder to AlexLens/thirdparty |
 | Openvino | ASIC-Sticks and the included OpenCV | [Tutorial](https://docs.openvinotoolkit.org/latest/_docs_install_guides_installing_openvino_linux.html#Hello-World-Face-Detection-Tutorial) | Go through steps 1,2,3,5,7,9. After Step 9 you should have a folder named "inference_enginge_samples_build" in your /home/"username" directory |
 | OpenCL | Well performing GPU-Classification | `sudo apt update` `sudo apt install ocl-icd-opencl-dev` `sudo apt-get install beignet` | Confirmed to work on Intel HD Graphics of 7th and 8th generation |
 | HDF5 | To read the weights-file with a good performance | `sudo apt-get install libhdf5-dev` | done
 | Libusb | For dynamically detecting the amount of USB-devices used | `sudo apt-get install libusb-1.0-0-dev` | done
 
 Optionally, we provide a training-data-set as an example [here](https://cloud.viet-pham.de/s/eKRM5JyxBpAAjEn?path=%2F).