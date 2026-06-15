#ifndef UE4SS_SDK_THQGDS_HPP
#define UE4SS_SDK_THQGDS_HPP

class UGDS : public UObject
{

    int32 log_test_info(FString UTF8_test_text);
    int32 log_on_skill_point_spent(const int32 _player_level, FString UTF8_player_guild, const int32 _chapter, FString UTF8_skill_id, const int32 _profile_id, const int64 _play_time);
    int32 log_on_quest_update(const int32 _player_level, FString UTF8_player_guild, const int32 _chapter, const int32 _gained_xp, FString UTF8_quest_id, FString UTF8_quest_variable, const int32 _quest_value, FString UTF8_quest_state, const int32 _profile_id, const int64 _play_time);
    int32 log_on_player_death(const int32 _player_level, FString UTF8_player_guild, const int32 _chapter, const int32 _pos_x, const int32 _pos_y, FString UTF8_death_cause, FString UTF8_npc_id, const bool _unconscious, const int32 _profile_id, const int64 _play_time);
    int32 log_on_npc_killed(FString UTF8_killer_id, const int32 _killer_level, FString UTF8_killer_guild, const int32 _chapter, const int32 _pos_x, const int32 _pos_y, FString UTF8_npc_id, const bool _unconscious, const int32 _gained_xp, const int32 _profile_id, const int64 _play_time);
    int32 log_on_level_up(const int32 _player_level, FString UTF8_player_guild, const int32 _chapter, const int32 _profile_id, const int64 _play_time);
    int32 log_on_inventory_update(const int32 _player_level, FString UTF8_player_guild, const int32 _chapter, const int32 _pos_x, const int32 _pos_y, FString UTF8_item_action, FString UTF8_item_id, const int32 _item_amount, const int32 _item_value, FString UTF8_item_slot, const int32 _profile_id, const int64 _play_time);
    int32 log_on_equipment_update(const int32 _player_level, FString UTF8_player_guild, const int32 _chapter, FString UTF8_item_id, FString UTF8_item_slot, const int32 _profile_id, const int64 _play_time);
    int32 log_on_dialogue_execution(const int32 _player_level, FString UTF8_player_guild, const int32 _chapter, FString UTF8_npc_id, FString UTF8_dialogue_id, const int32 _profile_id, const int64 _play_time);
    int64 get_player_id();
    int64 get_event_session_id();
    class UGDS* Get();
    int32 client_get_init_status();
}; // Size: 0x28

#endif
