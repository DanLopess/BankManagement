# Bank Management

Small Program written in C containing a bank management service

<p align="center">
  <a href="https://github.com/DanLopess/BankManagement/actions">
    <img alt="GitHub Workflow Status" src="https://img.shields.io/github/workflow/status/DanLopess/BankManagement/master">
  </a>
  <a href="https://github.com/DanLopess/BankManagement/blob/master/LICENSE">
    <img alt="GitHub" src="https://img.shields.io/github/license/DanLopess/BankManagement">
    </a>
</p>

## How to run

Run these commands on terminal:
`make clean`
and
`make`
and then
`./BankManagement`

### MENU

This app contains the following menu:

    #######################################################

                         Bank Name

         * CUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM *

    #######################################################

    1. Create new account
    2. Update information of existing account
    3. Transactions Menu
    4. Check the details of existing account
    5. Remove existing account
    6. View customer's list
    7. Exit


    Enter your choice:

### Versions

#### Version 1.0

- Single threaded application
- Auto Saving hability disabled
- Buffer overflow flaws (reading strings)
- All functionality is available, for a user at a time

#### Version 2.0 (Goals - next sprint)

- Multi threaded application
- Auto Saving hability enabled
- All functionality is available for many users at a time
- Synchronization problems and locks have been applied
- Improved data saving mechanism
