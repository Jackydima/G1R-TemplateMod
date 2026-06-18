# ReadME

## Mod Details
- Here I am trying to build a small framework to modfify Template Object (CDOs) for various Items
- This mod utilizes the ue4ss injection methods und used the ue4ss sdk dumps for C++


## Features
### Possible changes
Currently only the Weapon->Damage Values can be adjusted and the GameplayEffects-Modifiers (GE-Modifiers) of all the Armor und Amulets and Rings are supported.

### Hot reload ini-File
Changes can be updated during the running game with 'F2'.

## Strucute of ini config
- currently there is the `GEConfig.ini` and the `WeaponConfig.ini`

### GEConfig.ini
All of these Modifer.* can be adjusted for GE of items
```
; Attribute 0: Modifier.MaxSuperArmor
; Attribute 1: Modifier.Resistance_Edge
; Attribute 2: Modifier.Resistance_Blunt
; Attribute 3: Modifier.Resistance_Point
; Attribute 4: Modifier.Resistance_Fire
; Attribute 5: Modifier.Resistance_Wind
; Attribute 6: Modifier.Resistance_Ice
; Attribute 7: Modifier.Resistance_Energy
; Attribute 8: Modifier.Strength
; Attribute 9: Modifier.Dexterity
; Attribute 10: Modifier.MaxHealth
; Attribute 11: Modifier.MaxMana
; Attribute 12: Modifier.Toughness
```


### WeaponConfig.ini
All of these Damage.* can be adjusted for weapon items
```
; Damage.Item.Damage.Physical.Edge
; Damage.Item.Damage.Physical.Blunt
; Damage.Item.Damage.Physical.Point
; Damage.Item.Damage.Elemental.Fire
; Damage.Item.Damage.Elemental.Energy
; Damage.Item.Damage.Elemental.Ice
; Damage.Item.Damage.Elemental.Impact.Wind
```

## Notes
- Patches are applied first time after the Engine.PlayerController Client started and stays active for the session. (When the game initially loads the World and Actors when loading a save)
- Afterwards you can always hot reload the ini file config
