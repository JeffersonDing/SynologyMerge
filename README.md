# SynologyMerge
A bashscripts that moves packages from one Synology NAS volume to another.
Inspired by (@Saintdle's guide)[https://veducate.co.uk/synology-moving-a-package-between-volumes/]
## Disclaimer
This script is in Beta and hanven't been tested on divices. Use at your own risk. Feel free to improve the script and submit a push request.
## Useage
### Preperation
1. Log in to Synology NAS using SSH as admin.
2. Run `sudo -i` to change user to root
3. Clone this repository or `wget` the raw file to a safe location, usually root user home
4. Mark the `.sh` file or the `.x` binary as executable by `chmod +x migrate.sh` or `chmod +x migrate.sh.x`
5. Determine the target and destination volume by navigating to `/`
6. `cd` into the Target volume `@appstore`, aka. the volume you want to delete by running `cd /volume<target volume #>/\@appstore`
7. Check the packages and run the script by `~/migrate.sh -f <Target Volume> -t <Destination Volume>`, `-a` optional for automatic migrate without prompt

### Using the Script

|Option|Description|
|------|---|
| `-f` |Target(from) volume, should be in the form of `volumeX` e.g. `volume1`|
| `-t` |Destination(to) volume, should be in the form of `volumeX` e.g. `volume2`|
| `-h` |Show Help|
| `-a` |If specified, will migrate all packages in current directory without prompts (Warning: Be careful! Always check packages)|
