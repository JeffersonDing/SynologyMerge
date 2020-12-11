# SynologyMerge
A bashscripts that moves packages from one Synology NAS volume to another.
## Disclaimer
This script is in Beta and hanven't been tested on divices. Use at your own risk. Feel free to improve the script and submit a push request.
## Useage
### Preperation
1. Log in to Synology NAS using SSH as admin.
2. Run `sudo -i` to change user to root
3. Clone this repository or copy the file to a safe location, usually root user home
4. Determine the target and destination volume by navigating to `/`
### Using the Script

|Option|Description|
|------|---|
| `-f` |Target(from) volume, should be in the form of `volumeX` e.g. `volume1`|
| `-t` |Destination(to) volume, should be in the form of `volumeX` e.g. `volume2`|
| `-h` |Show Help|
| `-a` |If specified, will migrate all packages in current directory without prompts (Warning: Be careful! Always check packages)|
