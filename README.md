# 🏦 ATM MACHINE SIMULATION

[![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://cplusplus.com/)
[![File I/O](https://img.shields.io/badge/File_I%2FO-Enabled-green?style=for-the-badge)](https://github.com)
[![License](https://img.shields.io/badge/License-MIT-blue?style=for-the-badge)](LICENSE)
[![Status](https://img.shields.io/badge/Status-Complete-success?style=for-the-badge)]()

<div align="center">

**🚀 A console-based banking application built in C++ with file-based data storage**

![Banking](https://img.shields.io/badge/Features-2-brightgreen?style=for-the-badge)
![Security](https://img.shields.io/badge/Security-Password_Protected-red?style=for-the-badge)
![Storage](https://img.shields.io/badge/Storage-File_Based-blue?style=for-the-badge)

</div>

## 📋 Project Overview

This is a simple yet functional **banking system** implemented in C++ that allows users to perform basic banking operations. The system uses file-based storage to persist account information and provides secure access through password authentication.

### 🎯 Key Features
- **🔐 Secure Login**: Password-protected account access
- **💰 Balance Inquiry**: Check current account balance
- **🔑 Password Management**: Change account password
- **💾 Persistent Storage**: File-based data storage system
- **🛡️ Data Integrity**: Secure file read/write operations

## 🚀 Getting Started

### Prerequisites

- **C++ Compiler** (GCC, MinGW, Visual Studio, etc.)
- **Operating System**: Windows, Linux, or macOS
- **Basic knowledge** of C++ and file systems

### 📦 Installation

1. **Clone or Download** the project:
   ```bash
   git clone https://github.com/imondol41/ATM_MACHINE_SIMULATION.git
   cd simple-banking-system
   ```

2. **Compile the program**:
   ```bash
   # Using GCC
   gcc project.cpp -o banking_system
   
   # Using G++
   g++ project.cpp -o banking_system
   
   # On Windows with MinGW
   mingw32-gcc project.cpp -o banking_system.exe
   ```

3. **Create sample account data** (optional):
   ```bash
   # The program will look for 'accounts.txt' file
   # You can create sample accounts or let the program handle file creation
   ```

## 🎮 Usage

### Running the Application

```bash
# On Linux/macOS
./banking_system

# On Windows
banking_system.exe
```

### 📱 User Interface

The application provides a simple console interface:

```
Enter account number: 12345
Enter password: mypassword

1. Check Balance
2. Change Password
Enter choice: 1

Account Balance: 1500.50
```

### 🔧 Available Operations

| Operation | Description | Input Required |
|-----------|-------------|----------------|
| **Check Balance** | Display current account balance | Account number, Password |
| **Change Password** | Update account password | Account number, Current password, New password |

## 📊 Data Structure

### Account Structure
```cpp
struct Account {
    int accountNumber;      // Unique account identifier
    double balance;         // Current account balance
    char password[20];      // Account password (max 19 characters)
};
```

### 💾 File Storage Format
- **File Name**: `accounts.txt`
- **Format**: Binary file storing Account structures
- **Access**: Sequential read/write operations

## 🔍 Code Architecture

### 📁 File Functions

#### `readAccountFromFile()`
```cpp
struct Account readAccountFromFile(const char *acinfo, int accountNumber)
```
- **Purpose**: Retrieve account data from file
- **Parameters**: File name, Account number
- **Returns**: Account structure
- **Error Handling**: Exit on file not found or account not found

#### `updateAccountToFile()`
```cpp
void updateAccountToFile(const char *acinfo, struct Account acc)
```
- **Purpose**: Update account data in file
- **Parameters**: File name, Updated account structure
- **Process**: Locate account and overwrite with new data
- **Error Handling**: Exit on file access issues

### 🛡️ Security Features

1. **Password Authentication**: Verifies password before granting access
2. **Account Validation**: Ensures account exists before operations
3. **File Access Control**: Proper file opening and closing
4. **Input Validation**: Basic input handling for menu choices

## 📈 Sample Usage Examples

### Example 1: Check Balance
```
Enter account number: 12345
Enter password: secret123
1. Check Balance
2. Change Password
Enter choice: 1
Account Balance: 2500.75
```

### Example 2: Change Password
```
Enter account number: 12345
Enter password: secret123
1. Check Balance
2. Change Password
Enter choice: 2
Enter new password: newSecret456
Password changed successfully.
```

## 🔧 Technical Specifications

| Component | Details |
|-----------|---------|
| **Language** | C++ (C-style programming) |
| **File I/O** | Binary file operations |
| **Memory Management** | Stack-based structures |
| **Error Handling** | Exit-based error management |
| **Data Types** | int, double, char arrays |

## 🚨 Important Notes

### ⚠️ Security Considerations
- **Plain Text Passwords**: Currently stores passwords in plain text
- **File Permissions**: Ensure proper file access permissions
- **Input Validation**: Limited input validation implemented

### 🔧 Limitations
- **Single User**: Designed for single-user operation
- **No Encryption**: Account data stored without encryption
- **Basic Error Handling**: Simple exit-based error management
- **Fixed Password Length**: Maximum 19 characters for passwords

## 🛠️ Potential Improvements

### 🚀 Future Enhancements
- [ ] **Password Encryption**: Implement password hashing
- [ ] **Multi-user Support**: Handle concurrent users
- [ ] **Transaction History**: Track account transactions
- [ ] **Account Creation**: Add new account functionality
- [ ] **Balance Operations**: Deposit/withdraw features
- [ ] **Input Validation**: Enhanced user input validation
- [ ] **Database Integration**: Replace file storage with database

### 🔒 Security Improvements
- [ ] **Data Encryption**: Encrypt sensitive account data
- [ ] **Session Management**: Implement user sessions
- [ ] **Audit Logging**: Track all system operations
- [ ] **Access Control**: Role-based access control

## 🤝 Contributing

1. **Fork the repository**
2. **Create a feature branch**: `git checkout -b feature/new-feature`
3. **Commit changes**: `git commit -m 'Add new feature'`
4. **Push to branch**: `git push origin feature/new-feature`
5. **Submit a pull request**

## 📝 Development Setup

### Compiling for Development
```bash
# Debug mode
g++ -g -Wall -Wextra project.cpp -o banking_system_debug

# Release mode
g++ -O2 project.cpp -o banking_system_release

# With all warnings
g++ -Wall -Wextra -Wpedantic project.cpp -o banking_system
```

### Testing
```bash
# Create test account file
echo "Sample test data" > test_accounts.txt

# Run with test data
./banking_system
```

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 👨‍💻 Author

**[Ibrahim Kholilulla]**
- GitHub:https://github.com/imondol41
- Email: imondol41@gmail.com

## 🙏 Acknowledgments

- **C++ Community** for excellent documentation
- **File I/O Tutorials** for implementation guidance
- **Banking System Concepts** for design inspiration

---

<div align="center">

**⭐ Star this repository if you find it helpful!**

**🔧 Built with C++ and File I/O operations**

</div>
