// Generated using https://github.com/a2x/cs2-dumper
// 2024-03-28 07:07:08.835893701 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: libanimationsystem.so
        // Classes count: 255
        // Enums count: 0
        namespace libanimationsystem {
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace bone_demo_capture_settings_t {
                constexpr std::ptrdiff_t m_bone_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_fl_chain_length = 0x8; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ik_demo_capture_settings_t {
                constexpr std::ptrdiff_t m_parent_bone_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_e_mode = 0x8; // IKChannelMode
                constexpr std::ptrdiff_t m_ik_chain_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_one_bone_start = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_one_bone_end = 0x20; // CUtlString
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_demo_capture_settings {
                constexpr std::ptrdiff_t m_range_bone_chain_length = 0x0; // Vector2D
                constexpr std::ptrdiff_t m_range_max_spline_error_rotation = 0x8; // Vector2D
                constexpr std::ptrdiff_t m_fl_max_spline_error_translation = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_max_spline_error_scale = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_ik_rotation_max_spline_error = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_ik_translation_max_spline_error = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_max_quantization_error_rotation = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_max_quantization_error_translation = 0x24; // float32
                constexpr std::ptrdiff_t m_fl_max_quantization_error_scale = 0x28; // float32
                constexpr std::ptrdiff_t m_fl_ik_rotation_max_quantization_error = 0x2C; // float32
                constexpr std::ptrdiff_t m_fl_ik_translation_max_quantization_error = 0x30; // float32
                constexpr std::ptrdiff_t m_base_sequence = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_n_base_sequence_frame = 0x40; // int32
                constexpr std::ptrdiff_t m_bone_selection_mode = 0x44; // EDemoBoneSelectionMode
                constexpr std::ptrdiff_t m_bones = 0x48; // CUtlVector< BoneDemoCaptureSettings_t >
                constexpr std::ptrdiff_t m_ik_chains = 0x60; // CUtlVector< IKDemoCaptureSettings_t >
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_replay_frame {
                constexpr std::ptrdiff_t m_input_data_blocks = 0x10; // CUtlVector< CUtlBinaryBlock >
                constexpr std::ptrdiff_t m_instance_data = 0x28; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_starting_local_to_world_transform = 0x40; // CTransform
                constexpr std::ptrdiff_t m_local_to_world_transform = 0x60; // CTransform
                constexpr std::ptrdiff_t m_time_stamp = 0x80; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_graph_debug_replay {
                constexpr std::ptrdiff_t m_anim_graph_file_name = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_frame_list = 0x48; // CUtlVector< CSmartPtr< CAnimReplayFrame > >
                constexpr std::ptrdiff_t m_start_index = 0x60; // int32
                constexpr std::ptrdiff_t m_write_index = 0x64; // int32
                constexpr std::ptrdiff_t m_frame_count = 0x68; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_graph_model_binding {
                constexpr std::ptrdiff_t m_model_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_p_shared_data = 0x10; // CSmartPtr< CAnimUpdateSharedData >
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_anim_input_damping {
                constexpr std::ptrdiff_t m_speed_function = 0x8; // DampingSpeedFunction
                constexpr std::ptrdiff_t m_f_speed_scale = 0xC; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_param_handle {
                constexpr std::ptrdiff_t m_type = 0x0; // AnimParamType_t
                constexpr std::ptrdiff_t m_index = 0x1; // uint8
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_param_handle_map {
                constexpr std::ptrdiff_t m_list = 0x0; // CUtlHashtable< uint16, int16 >
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_parameter_manager_updater {
                constexpr std::ptrdiff_t m_parameters = 0x18; // CUtlVector< CSmartPtr< CAnimParameterBase > >
                constexpr std::ptrdiff_t m_id_to_index_map = 0x30; // CUtlHashtable< AnimParamID, int32 >
                constexpr std::ptrdiff_t m_name_to_index_map = 0x50; // CUtlHashtable< CUtlString, int32 >
                constexpr std::ptrdiff_t m_index_to_handle = 0x70; // CUtlVector< CAnimParamHandle >
                constexpr std::ptrdiff_t m_auto_reset_params = 0x88; // CUtlVector< CUtlPair< CAnimParamHandle, CAnimVariant > >
                constexpr std::ptrdiff_t m_auto_reset_map = 0xA0; // CUtlHashtable< CAnimParamHandle, int16 >
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_update_shared_data {
                constexpr std::ptrdiff_t m_nodes = 0x10; // CUtlVector< CSmartPtr< CAnimUpdateNodeBase > >
                constexpr std::ptrdiff_t m_node_index_map = 0x28; // CUtlHashtable< CAnimNodePath, int32 >
                constexpr std::ptrdiff_t m_components = 0x48; // CUtlVector< CSmartPtr< CAnimComponentUpdater > >
                constexpr std::ptrdiff_t m_p_param_list_updater = 0x60; // CSmartPtr< CAnimParameterManagerUpdater >
                constexpr std::ptrdiff_t m_p_tag_manager_updater = 0x68; // CSmartPtr< CAnimTagManagerUpdater >
                constexpr std::ptrdiff_t m_script_manager = 0x70; // CSmartPtr< CAnimScriptManager >
                constexpr std::ptrdiff_t m_settings = 0x78; // CAnimGraphSettingsManager
                constexpr std::ptrdiff_t m_p_static_pose_cache = 0xA8; // CSmartPtr< CStaticPoseCacheBuilder >
                constexpr std::ptrdiff_t m_p_skeleton = 0xB0; // CSmartPtr< CAnimSkeleton >
                constexpr std::ptrdiff_t m_root_node_path = 0xB8; // CAnimNodePath
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_blend_curve {
                constexpr std::ptrdiff_t m_fl_control_point1 = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_control_point2 = 0x4; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace param_span_sample_t {
                constexpr std::ptrdiff_t m_value = 0x0; // CAnimVariant
                constexpr std::ptrdiff_t m_fl_cycle = 0x14; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace param_span_t {
                constexpr std::ptrdiff_t m_samples = 0x0; // CUtlVector< ParamSpanSample_t >
                constexpr std::ptrdiff_t m_h_param = 0x18; // CAnimParamHandle
                constexpr std::ptrdiff_t m_e_param_type = 0x1A; // AnimParamType_t
                constexpr std::ptrdiff_t m_fl_start_cycle = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_end_cycle = 0x20; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_param_span_updater {
                constexpr std::ptrdiff_t m_spans = 0x0; // CUtlVector< ParamSpan_t >
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_graph_settings_group {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_graph_settings_manager {
                constexpr std::ptrdiff_t m_settings_groups = 0x18; // CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > >
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_cached_pose {
                constexpr std::ptrdiff_t m_transforms = 0x8; // CUtlVector< CTransform >
                constexpr std::ptrdiff_t m_morph_weights = 0x20; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_h_sequence = 0x38; // HSequence
                constexpr std::ptrdiff_t m_fl_cycle = 0x3C; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_static_pose_cache {
                constexpr std::ptrdiff_t m_poses = 0x10; // CUtlVector< CCachedPose >
                constexpr std::ptrdiff_t m_n_bone_count = 0x28; // int32
                constexpr std::ptrdiff_t m_n_morph_count = 0x2C; // int32
            }
            // Parent: c_static_pose_cache
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_static_pose_cache_builder {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_action_updater {
            }
            // Parent: c_anim_action_updater
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_emit_tag_action_updater {
                constexpr std::ptrdiff_t m_n_tag_index = 0x18; // int32
                constexpr std::ptrdiff_t m_b_is_zero_duration = 0x1C; // bool
            }
            // Parent: c_anim_action_updater
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_set_parameter_action_updater {
                constexpr std::ptrdiff_t m_h_param = 0x18; // CAnimParamHandle
                constexpr std::ptrdiff_t m_value = 0x1A; // CAnimVariant
            }
            // Parent: c_anim_action_updater
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_toggle_component_action_updater {
                constexpr std::ptrdiff_t m_component_id = 0x18; // AnimComponentID
                constexpr std::ptrdiff_t m_b_set_enabled = 0x1C; // bool
            }
            // Parent: c_anim_action_updater
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_expression_action_updater {
                constexpr std::ptrdiff_t m_h_param = 0x18; // CAnimParamHandle
                constexpr std::ptrdiff_t m_e_param_type = 0x1A; // AnimParamType_t
                constexpr std::ptrdiff_t m_h_script = 0x1C; // AnimScriptHandle
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_tag_base {
                constexpr std::ptrdiff_t m_name = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_group = 0x20; // CGlobalSymbol
                constexpr std::ptrdiff_t m_tag_id = 0x28; // AnimTagID
                constexpr std::ptrdiff_t m_b_is_referenced = 0x40; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_tag_manager_updater {
                constexpr std::ptrdiff_t m_tags = 0x18; // CUtlVector< CSmartPtr< CAnimTagBase > >
            }
            // Parent: c_anim_tag_base
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_audio_anim_tag {
                constexpr std::ptrdiff_t m_clip_name = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_attachment_name = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_fl_volume = 0x60; // float32
                constexpr std::ptrdiff_t m_b_stop_when_tag_ends = 0x64; // bool
                constexpr std::ptrdiff_t m_b_stop_when_graph_ends = 0x65; // bool
                constexpr std::ptrdiff_t m_b_play_on_server = 0x66; // bool
                constexpr std::ptrdiff_t m_b_play_on_client = 0x67; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            namespace c_body_group_setting {
                constexpr std::ptrdiff_t m_body_group_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_n_body_group_option = 0x8; // int32
            }
            // Parent: c_anim_tag_base
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_body_group_anim_tag {
                constexpr std::ptrdiff_t m_n_priority = 0x50; // int32
                constexpr std::ptrdiff_t m_body_group_settings = 0x58; // CUtlVector< CBodyGroupSetting >
            }
            // Parent: c_anim_tag_base
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_cloth_settings_anim_tag {
                constexpr std::ptrdiff_t m_fl_stiffness = 0x50; // float32
                constexpr std::ptrdiff_t m_fl_ease_in = 0x54; // float32
                constexpr std::ptrdiff_t m_fl_ease_out = 0x58; // float32
                constexpr std::ptrdiff_t m_n_vertex_set = 0x60; // CUtlString
            }
            // Parent: c_anim_tag_base
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_foot_fall_anim_tag {
                constexpr std::ptrdiff_t m_foot = 0x50; // FootFallTagFoot_t
            }
            // Parent: c_anim_tag_base
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_footstep_landed_anim_tag {
                constexpr std::ptrdiff_t m_footstep_type = 0x50; // FootstepLandedFootSoundType_t
                constexpr std::ptrdiff_t m_override_sound_name = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_debug_anim_source_string = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_bone_name = 0x68; // CUtlString
            }
            // Parent: c_anim_tag_base
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_material_attribute_anim_tag {
                constexpr std::ptrdiff_t m_attribute_name = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_attribute_type = 0x58; // MatterialAttributeTagType_t
                constexpr std::ptrdiff_t m_fl_value = 0x5C; // float32
                constexpr std::ptrdiff_t m_color = 0x60; // Color
            }
            // Parent: c_anim_tag_base
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_particle_anim_tag {
                constexpr std::ptrdiff_t m_h_particle_system = 0x50; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
                constexpr std::ptrdiff_t m_particle_system_name = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_config_name = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_b_detach_from_owner = 0x68; // bool
                constexpr std::ptrdiff_t m_b_stop_when_tag_ends = 0x69; // bool
                constexpr std::ptrdiff_t m_b_tag_end_stop_is_instant = 0x6A; // bool
                constexpr std::ptrdiff_t m_attachment_name = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_attachment_type = 0x78; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_attachment_cp1_name = 0x80; // CUtlString
                constexpr std::ptrdiff_t m_attachment_cp1_type = 0x88; // ParticleAttachment_t
            }
            // Parent: c_anim_tag_base
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_ragdoll_anim_tag {
                constexpr std::ptrdiff_t m_n_pose_control = 0x50; // AnimPoseControl
                constexpr std::ptrdiff_t m_fl_frequency = 0x54; // float32
                constexpr std::ptrdiff_t m_fl_damping_ratio = 0x58; // float32
                constexpr std::ptrdiff_t m_fl_decay_duration = 0x5C; // float32
                constexpr std::ptrdiff_t m_fl_decay_bias = 0x60; // float32
                constexpr std::ptrdiff_t m_b_destroy = 0x64; // bool
            }
            // Parent: c_anim_tag_base
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_sequence_finished_anim_tag {
                constexpr std::ptrdiff_t m_sequence_name = 0x50; // CUtlString
            }
            // Parent: c_anim_tag_base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_string_anim_tag {
            }
            // Parent: c_anim_tag_base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_task_status_anim_tag {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_component_updater {
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x20; // AnimComponentID
                constexpr std::ptrdiff_t m_network_mode = 0x24; // AnimNodeNetworkMode
                constexpr std::ptrdiff_t m_b_start_enabled = 0x28; // bool
            }
            // Parent: c_anim_component_updater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_script_component_updater {
                constexpr std::ptrdiff_t m_h_script = 0x30; // AnimScriptHandle
            }
            // Parent: c_anim_component_updater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ccpp_script_component_updater {
                constexpr std::ptrdiff_t m_scripts_to_run = 0x30; // CUtlVector< CGlobalSymbol >
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_damped_value_update_item {
                constexpr std::ptrdiff_t m_damping = 0x0; // CAnimInputDamping
                constexpr std::ptrdiff_t m_h_param_in = 0x18; // CAnimParamHandle
                constexpr std::ptrdiff_t m_h_param_out = 0x1A; // CAnimParamHandle
            }
            // Parent: c_anim_component_updater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_damped_value_component_updater {
                constexpr std::ptrdiff_t m_items = 0x30; // CUtlVector< CDampedValueUpdateItem >
            }
            // Parent: c_anim_component_updater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_demo_settings_component_updater {
                constexpr std::ptrdiff_t m_settings = 0x30; // CAnimDemoCaptureSettings
            }
            // Parent: c_anim_component_updater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace clod_component_updater {
                constexpr std::ptrdiff_t m_n_server_lod = 0x30; // int32
            }
            // Parent: c_anim_component_updater
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_look_component_updater {
                constexpr std::ptrdiff_t m_h_look_heading = 0x34; // CAnimParamHandle
                constexpr std::ptrdiff_t m_h_look_heading_velocity = 0x36; // CAnimParamHandle
                constexpr std::ptrdiff_t m_h_look_pitch = 0x38; // CAnimParamHandle
                constexpr std::ptrdiff_t m_h_look_distance = 0x3A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_h_look_direction = 0x3C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_h_look_target = 0x3E; // CAnimParamHandle
                constexpr std::ptrdiff_t m_h_look_target_world_space = 0x40; // CAnimParamHandle
                constexpr std::ptrdiff_t m_b_network_look_target = 0x42; // bool
            }
            // Parent: c_anim_component_updater
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_movement_component_updater {
                constexpr std::ptrdiff_t m_motors = 0x30; // CUtlVector< CSmartPtr< CAnimMotorUpdaterBase > >
                constexpr std::ptrdiff_t m_facing_damping = 0x48; // CAnimInputDamping
                constexpr std::ptrdiff_t m_e_default_facing_mode = 0x58; // FacingMode
                constexpr std::ptrdiff_t m_n_default_motor_index = 0x64; // int32
                constexpr std::ptrdiff_t m_fl_default_run_speed = 0x68; // float32
                constexpr std::ptrdiff_t m_b_move_vars_disabled = 0x6C; // bool
                constexpr std::ptrdiff_t m_b_network_path = 0x6D; // bool
                constexpr std::ptrdiff_t m_b_network_facing = 0x6E; // bool
                constexpr std::ptrdiff_t m_param_handles = 0x6F; // CAnimParamHandle[30]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace weight_list {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_weights = 0x8; // CUtlVector< float32 >
            }
            // Parent: c_anim_component_updater
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_ragdoll_component_updater {
                constexpr std::ptrdiff_t m_ragdoll_node_paths = 0x30; // CUtlVector< CAnimNodePath >
                constexpr std::ptrdiff_t m_bone_indices = 0x48; // CUtlVector< int32 >
                constexpr std::ptrdiff_t m_bone_names = 0x60; // CUtlVector< CUtlString >
                constexpr std::ptrdiff_t m_weight_lists = 0x78; // CUtlVector< WeightList >
                constexpr std::ptrdiff_t m_fl_spring_frequency_min = 0x90; // float32
                constexpr std::ptrdiff_t m_fl_spring_frequency_max = 0x94; // float32
                constexpr std::ptrdiff_t m_fl_max_stretch = 0x98; // float32
                constexpr std::ptrdiff_t m_b_solid_collision_at_zero_weight = 0x9C; // bool
            }
            // Parent: c_anim_component_updater
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_slope_component_updater {
                constexpr std::ptrdiff_t m_fl_trace_distance = 0x34; // float32
                constexpr std::ptrdiff_t m_h_slope_angle = 0x38; // CAnimParamHandle
                constexpr std::ptrdiff_t m_h_slope_angle_front = 0x3A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_h_slope_angle_side = 0x3C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_h_slope_heading = 0x3E; // CAnimParamHandle
                constexpr std::ptrdiff_t m_h_slope_normal = 0x40; // CAnimParamHandle
                constexpr std::ptrdiff_t m_h_slope_normal_world_space = 0x42; // CAnimParamHandle
            }
            // Parent: c_anim_component_updater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_state_machine_component_updater {
                constexpr std::ptrdiff_t m_state_machine = 0x30; // CAnimStateMachineUpdater
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_motion_data_set {
                constexpr std::ptrdiff_t m_groups = 0x0; // CUtlVector< CMotionGraphGroup >
                constexpr std::ptrdiff_t m_n_dimension_count = 0x18; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_motion_graph_group {
                constexpr std::ptrdiff_t m_search_db = 0x0; // CMotionSearchDB
                constexpr std::ptrdiff_t m_motion_graphs = 0xB8; // CUtlVector< CSmartPtr< CMotionGraph > >
                constexpr std::ptrdiff_t m_motion_graph_configs = 0xD0; // CUtlVector< CMotionGraphConfig >
                constexpr std::ptrdiff_t m_sample_to_config = 0xE8; // CUtlVector< int32 >
                constexpr std::ptrdiff_t m_h_is_active_script = 0x100; // AnimScriptHandle
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace sample_code {
                constexpr std::ptrdiff_t m_sub_code = 0x0; // uint8[8]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace motion_db_index {
                constexpr std::ptrdiff_t m_n_index = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_vector_quantizer {
                constexpr std::ptrdiff_t m_centroid_vectors = 0x0; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_n_centroids = 0x18; // int32
                constexpr std::ptrdiff_t m_n_dimensions = 0x1C; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_product_quantizer {
                constexpr std::ptrdiff_t m_sub_quantizers = 0x0; // CUtlVector< CVectorQuantizer >
                constexpr std::ptrdiff_t m_n_dimensions = 0x18; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_motion_search_node {
                constexpr std::ptrdiff_t m_children = 0x0; // CUtlVector< CMotionSearchNode* >
                constexpr std::ptrdiff_t m_quantizer = 0x18; // CVectorQuantizer
                constexpr std::ptrdiff_t m_sample_codes = 0x38; // CUtlVector< CUtlVector< SampleCode > >
                constexpr std::ptrdiff_t m_sample_indices = 0x50; // CUtlVector< CUtlVector< int32 > >
                constexpr std::ptrdiff_t m_selectable_samples = 0x68; // CUtlVector< int32 >
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_motion_search_db {
                constexpr std::ptrdiff_t m_root_node = 0x0; // CMotionSearchNode
                constexpr std::ptrdiff_t m_residual_quantizer = 0x80; // CProductQuantizer
                constexpr std::ptrdiff_t m_code_indices = 0xA0; // CUtlVector< MotionDBIndex >
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_motion_graph {
                constexpr std::ptrdiff_t m_param_spans = 0x10; // CParamSpanUpdater
                constexpr std::ptrdiff_t m_tags = 0x28; // CUtlVector< TagSpan_t >
                constexpr std::ptrdiff_t m_p_root_node = 0x40; // CSmartPtr< CMotionNode >
                constexpr std::ptrdiff_t m_n_parameter_count = 0x48; // int32
                constexpr std::ptrdiff_t m_n_config_start_index = 0x4C; // int32
                constexpr std::ptrdiff_t m_n_config_count = 0x50; // int32
                constexpr std::ptrdiff_t m_b_loop = 0x54; // bool
            }
            // Parent: c_motion_graph
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_editable_motion_graph {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_motion_node {
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x20; // AnimNodeID
            }
            // Parent: c_motion_node
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_motion_node_sequence {
                constexpr std::ptrdiff_t m_tags = 0x28; // CUtlVector< TagSpan_t >
                constexpr std::ptrdiff_t m_h_sequence = 0x40; // HSequence
                constexpr std::ptrdiff_t m_fl_playback_speed = 0x44; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace motion_blend_item {
                constexpr std::ptrdiff_t m_p_child = 0x0; // CSmartPtr< CMotionNode >
                constexpr std::ptrdiff_t m_fl_key_value = 0x8; // float32
            }
            // Parent: c_motion_node
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_motion_node_blend1_d {
                constexpr std::ptrdiff_t m_blend_items = 0x28; // CUtlVector< MotionBlendItem >
                constexpr std::ptrdiff_t m_n_param_index = 0x40; // int32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_motion_metric_evaluator {
                constexpr std::ptrdiff_t m_means = 0x18; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_standard_deviations = 0x30; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_fl_weight = 0x48; // float32
                constexpr std::ptrdiff_t m_n_dimension_start_index = 0x4C; // int32
            }
            // Parent: c_motion_metric_evaluator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_block_selection_metric_evaluator {
            }
            // Parent: c_motion_metric_evaluator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_bone_position_metric_evaluator {
                constexpr std::ptrdiff_t m_n_bone_index = 0x50; // int32
            }
            // Parent: c_motion_metric_evaluator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_bone_velocity_metric_evaluator {
                constexpr std::ptrdiff_t m_n_bone_index = 0x50; // int32
            }
            // Parent: c_motion_metric_evaluator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_current_rotation_velocity_metric_evaluator {
            }
            // Parent: c_motion_metric_evaluator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_current_velocity_metric_evaluator {
            }
            // Parent: c_motion_metric_evaluator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_distance_remaining_metric_evaluator {
                constexpr std::ptrdiff_t m_fl_max_distance = 0x50; // float32
                constexpr std::ptrdiff_t m_fl_min_distance = 0x54; // float32
                constexpr std::ptrdiff_t m_fl_start_goal_filter_distance = 0x58; // float32
                constexpr std::ptrdiff_t m_fl_max_goal_overshoot_scale = 0x5C; // float32
                constexpr std::ptrdiff_t m_b_filter_fixed_min_distance = 0x60; // bool
                constexpr std::ptrdiff_t m_b_filter_goal_distance = 0x61; // bool
                constexpr std::ptrdiff_t m_b_filter_goal_overshoot = 0x62; // bool
            }
            // Parent: c_motion_metric_evaluator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_foot_cycle_metric_evaluator {
                constexpr std::ptrdiff_t m_foot_indices = 0x50; // CUtlVector< int32 >
            }
            // Parent: c_motion_metric_evaluator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_foot_position_metric_evaluator {
                constexpr std::ptrdiff_t m_foot_indices = 0x50; // CUtlVector< int32 >
                constexpr std::ptrdiff_t m_b_ignore_slope = 0x68; // bool
            }
            // Parent: c_motion_metric_evaluator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_future_facing_metric_evaluator {
                constexpr std::ptrdiff_t m_fl_distance = 0x50; // float32
                constexpr std::ptrdiff_t m_fl_time = 0x54; // float32
            }
            // Parent: c_motion_metric_evaluator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_future_velocity_metric_evaluator {
                constexpr std::ptrdiff_t m_fl_distance = 0x50; // float32
                constexpr std::ptrdiff_t m_fl_stopping_distance = 0x54; // float32
                constexpr std::ptrdiff_t m_fl_target_speed = 0x58; // float32
                constexpr std::ptrdiff_t m_e_mode = 0x5C; // VelocityMetricMode
            }
            // Parent: c_motion_metric_evaluator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_path_metric_evaluator {
                constexpr std::ptrdiff_t m_path_time_samples = 0x50; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_fl_distance = 0x68; // float32
                constexpr std::ptrdiff_t m_b_extrapolate_movement = 0x6C; // bool
                constexpr std::ptrdiff_t m_fl_min_extrapolation_speed = 0x70; // float32
            }
            // Parent: c_motion_metric_evaluator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_steps_remaining_metric_evaluator {
                constexpr std::ptrdiff_t m_foot_indices = 0x50; // CUtlVector< int32 >
                constexpr std::ptrdiff_t m_fl_min_steps_remaining = 0x68; // float32
            }
            // Parent: c_motion_metric_evaluator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_time_remaining_metric_evaluator {
                constexpr std::ptrdiff_t m_b_match_by_time_remaining = 0x50; // bool
                constexpr std::ptrdiff_t m_fl_max_time_remaining = 0x54; // float32
                constexpr std::ptrdiff_t m_b_filter_by_time_remaining = 0x58; // bool
                constexpr std::ptrdiff_t m_fl_min_time_remaining = 0x5C; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_motor_updater_base {
                constexpr std::ptrdiff_t m_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_b_default = 0x18; // bool
            }
            // Parent: c_anim_motor_updater_base
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_path_anim_motor_updater_base {
                constexpr std::ptrdiff_t m_b_lock_to_path = 0x19; // bool
            }
            // Parent: c_path_anim_motor_updater_base
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_damped_path_anim_motor_updater {
                constexpr std::ptrdiff_t m_fl_anticipation_time = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_min_speed_scale = 0x24; // float32
                constexpr std::ptrdiff_t m_h_anticipation_pos_param = 0x28; // CAnimParamHandle
                constexpr std::ptrdiff_t m_h_anticipation_heading_param = 0x2A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_fl_spring_constant = 0x2C; // float32
                constexpr std::ptrdiff_t m_fl_min_spring_tension = 0x30; // float32
                constexpr std::ptrdiff_t m_fl_max_spring_tension = 0x34; // float32
            }
            // Parent: c_path_anim_motor_updater_base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_path_anim_motor_updater {
            }
            // Parent: c_anim_motor_updater_base
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_player_input_anim_motor_updater {
                constexpr std::ptrdiff_t m_sample_times = 0x20; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_fl_spring_constant = 0x3C; // float32
                constexpr std::ptrdiff_t m_fl_anticipation_distance = 0x40; // float32
                constexpr std::ptrdiff_t m_h_anticipation_pos_param = 0x44; // CAnimParamHandle
                constexpr std::ptrdiff_t m_h_anticipation_heading_param = 0x46; // CAnimParamHandle
                constexpr std::ptrdiff_t m_b_use_acceleration = 0x48; // bool
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace aim_matrix_op_fixed_settings_t {
                constexpr std::ptrdiff_t m_attachment = 0x0; // CAnimAttachment
                constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
                constexpr std::ptrdiff_t m_pose_cache_handles = 0x90; // CPoseHandle[10]
                constexpr std::ptrdiff_t m_e_blend_mode = 0xB8; // AimMatrixBlendMode
                constexpr std::ptrdiff_t m_f_angle_increment = 0xBC; // float32
                constexpr std::ptrdiff_t m_n_sequence_max_frame = 0xC0; // int32
                constexpr std::ptrdiff_t m_n_bone_mask_index = 0xC4; // int32
                constexpr std::ptrdiff_t m_b_target_is_position = 0xC8; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace follow_attachment_settings_t {
                constexpr std::ptrdiff_t m_attachment = 0x0; // CAnimAttachment
                constexpr std::ptrdiff_t m_bone_index = 0x80; // int32
                constexpr std::ptrdiff_t m_b_match_translation = 0x84; // bool
                constexpr std::ptrdiff_t m_b_match_rotation = 0x85; // bool
            }
            // Parent: None
            // Fields count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace foot_lock_pose_op_fixed_settings {
                constexpr std::ptrdiff_t m_foot_info = 0x0; // CUtlVector< FootFixedData_t >
                constexpr std::ptrdiff_t m_hip_damping_settings = 0x18; // CAnimInputDamping
                constexpr std::ptrdiff_t m_n_hip_bone_index = 0x28; // int32
                constexpr std::ptrdiff_t m_ik_solver_type = 0x2C; // IKSolverType
                constexpr std::ptrdiff_t m_b_apply_tilt = 0x30; // bool
                constexpr std::ptrdiff_t m_b_apply_hip_drop = 0x31; // bool
                constexpr std::ptrdiff_t m_b_always_use_fallback_hinge = 0x32; // bool
                constexpr std::ptrdiff_t m_b_apply_foot_rotation_limits = 0x33; // bool
                constexpr std::ptrdiff_t m_b_apply_leg_twist_limits = 0x34; // bool
                constexpr std::ptrdiff_t m_fl_max_foot_height = 0x38; // float32
                constexpr std::ptrdiff_t m_fl_extension_scale = 0x3C; // float32
                constexpr std::ptrdiff_t m_fl_max_leg_twist = 0x40; // float32
                constexpr std::ptrdiff_t m_b_enable_lock_breaking = 0x44; // bool
                constexpr std::ptrdiff_t m_fl_lock_break_tolerance = 0x48; // float32
                constexpr std::ptrdiff_t m_fl_lock_blend_time = 0x4C; // float32
                constexpr std::ptrdiff_t m_b_enable_stretching = 0x50; // bool
                constexpr std::ptrdiff_t m_fl_max_stretch_amount = 0x54; // float32
                constexpr std::ptrdiff_t m_fl_stretch_extension_scale = 0x58; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace foot_pinning_pose_op_fixed_data_t {
                constexpr std::ptrdiff_t m_foot_info = 0x0; // CUtlVector< FootFixedData_t >
                constexpr std::ptrdiff_t m_fl_blend_time = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_lock_break_distance = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_max_leg_twist = 0x20; // float32
                constexpr std::ptrdiff_t m_n_hip_bone_index = 0x24; // int32
                constexpr std::ptrdiff_t m_b_apply_leg_twist_limits = 0x28; // bool
                constexpr std::ptrdiff_t m_b_apply_foot_rotation_limits = 0x29; // bool
            }
            // Parent: None
            // Fields count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace hit_react_fixed_settings_t {
                constexpr std::ptrdiff_t m_n_weight_list_index = 0x0; // int32
                constexpr std::ptrdiff_t m_n_effected_bone_count = 0x4; // int32
                constexpr std::ptrdiff_t m_fl_max_impact_force = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_min_impact_force = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_whip_impact_scale = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_counter_rotation_scale = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_distance_fade_scale = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_propagation_scale = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_whip_delay = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_spring_strength = 0x24; // float32
                constexpr std::ptrdiff_t m_fl_whip_spring_strength = 0x28; // float32
                constexpr std::ptrdiff_t m_fl_max_angle_radians = 0x2C; // float32
                constexpr std::ptrdiff_t m_n_hip_bone_index = 0x30; // int32
                constexpr std::ptrdiff_t m_fl_hip_bone_translation_scale = 0x34; // float32
                constexpr std::ptrdiff_t m_fl_hip_dip_spring_strength = 0x38; // float32
                constexpr std::ptrdiff_t m_fl_hip_dip_impact_scale = 0x3C; // float32
                constexpr std::ptrdiff_t m_fl_hip_dip_delay = 0x40; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace jiggle_bone_settings_t {
                constexpr std::ptrdiff_t m_n_bone_index = 0x0; // int32
                constexpr std::ptrdiff_t m_fl_spring_strength = 0x4; // float32
                constexpr std::ptrdiff_t m_fl_max_time_step = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_damping = 0xC; // float32
                constexpr std::ptrdiff_t m_v_bounds_max_ls = 0x10; // Vector
                constexpr std::ptrdiff_t m_v_bounds_min_ls = 0x1C; // Vector
                constexpr std::ptrdiff_t m_e_sim_space = 0x28; // JiggleBoneSimSpace
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace jiggle_bone_settings_list_t {
                constexpr std::ptrdiff_t m_bone_settings = 0x0; // CUtlVector< JiggleBoneSettings_t >
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace look_at_bone_t {
                constexpr std::ptrdiff_t m_index = 0x0; // int32
                constexpr std::ptrdiff_t m_weight = 0x4; // float32
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace look_at_op_fixed_settings_t {
                constexpr std::ptrdiff_t m_attachment = 0x0; // CAnimAttachment
                constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
                constexpr std::ptrdiff_t m_bones = 0x90; // CUtlVector< LookAtBone_t >
                constexpr std::ptrdiff_t m_fl_yaw_limit = 0xA8; // float32
                constexpr std::ptrdiff_t m_fl_pitch_limit = 0xAC; // float32
                constexpr std::ptrdiff_t m_fl_hysteresis_inner_angle = 0xB0; // float32
                constexpr std::ptrdiff_t m_fl_hysteresis_outer_angle = 0xB4; // float32
                constexpr std::ptrdiff_t m_b_rotate_yaw_forward = 0xB8; // bool
                constexpr std::ptrdiff_t m_b_maintain_up_direction = 0xB9; // bool
                constexpr std::ptrdiff_t m_b_target_is_position = 0xBA; // bool
                constexpr std::ptrdiff_t m_b_use_hysteresis = 0xBB; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace chain_to_solve_data_t {
                constexpr std::ptrdiff_t m_n_chain_index = 0x0; // int32
                constexpr std::ptrdiff_t m_solver_settings = 0x4; // IKSolverSettings_t
                constexpr std::ptrdiff_t m_target_settings = 0x10; // IKTargetSettings_t
                constexpr std::ptrdiff_t m_debug_setting = 0x38; // SolveIKChainAnimNodeDebugSetting
                constexpr std::ptrdiff_t m_fl_debug_normalized_value = 0x3C; // float32
                constexpr std::ptrdiff_t m_v_debug_offset = 0x40; // VectorAligned
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace solve_ik_chain_pose_op_fixed_settings_t {
                constexpr std::ptrdiff_t m_chains_to_solve_data = 0x0; // CUtlVector< ChainToSolveData_t >
                constexpr std::ptrdiff_t m_b_match_target_orientation = 0x18; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_parameter_base {
                constexpr std::ptrdiff_t m_name = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_group = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x28; // AnimParamID
                constexpr std::ptrdiff_t m_component_name = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_b_networking_requested = 0x60; // bool
                constexpr std::ptrdiff_t m_b_is_referenced = 0x61; // bool
            }
            // Parent: c_anim_parameter_base
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_concrete_anim_parameter {
                constexpr std::ptrdiff_t m_preview_button = 0x64; // AnimParamButton_t
                constexpr std::ptrdiff_t m_e_network_setting = 0x68; // AnimParamNetworkSetting
                constexpr std::ptrdiff_t m_b_use_most_recent_value = 0x6C; // bool
                constexpr std::ptrdiff_t m_b_auto_reset = 0x6D; // bool
                constexpr std::ptrdiff_t m_b_game_writable = 0x6E; // bool
                constexpr std::ptrdiff_t m_b_graph_writable = 0x6F; // bool
            }
            // Parent: c_anim_parameter_base
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_virtual_anim_parameter {
                constexpr std::ptrdiff_t m_expression_string = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_e_param_type = 0x70; // AnimParamType_t
            }
            // Parent: c_concrete_anim_parameter
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_bool_anim_parameter {
                constexpr std::ptrdiff_t m_b_default_value = 0x70; // bool
            }
            // Parent: c_concrete_anim_parameter
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_enum_anim_parameter {
                constexpr std::ptrdiff_t m_default_value = 0x78; // uint8
                constexpr std::ptrdiff_t m_enum_options = 0x80; // CUtlVector< CUtlString >
            }
            // Parent: c_concrete_anim_parameter
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_int_anim_parameter {
                constexpr std::ptrdiff_t m_default_value = 0x70; // int32
                constexpr std::ptrdiff_t m_min_value = 0x74; // int32
                constexpr std::ptrdiff_t m_max_value = 0x78; // int32
            }
            // Parent: c_concrete_anim_parameter
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_float_anim_parameter {
                constexpr std::ptrdiff_t m_f_default_value = 0x70; // float32
                constexpr std::ptrdiff_t m_f_min_value = 0x74; // float32
                constexpr std::ptrdiff_t m_f_max_value = 0x78; // float32
                constexpr std::ptrdiff_t m_b_interpolate = 0x7C; // bool
            }
            // Parent: c_concrete_anim_parameter
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_vector_anim_parameter {
                constexpr std::ptrdiff_t m_default_value = 0x70; // Vector
                constexpr std::ptrdiff_t m_b_interpolate = 0x7C; // bool
            }
            // Parent: c_concrete_anim_parameter
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_quaternion_anim_parameter {
                constexpr std::ptrdiff_t m_default_value = 0x70; // Quaternion
                constexpr std::ptrdiff_t m_b_interpolate = 0x80; // bool
            }
            // Parent: c_concrete_anim_parameter
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace c_symbol_anim_parameter {
                constexpr std::ptrdiff_t m_default_value = 0x70; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace script_info_t {
                constexpr std::ptrdiff_t m_code = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_params_modified = 0x8; // CUtlVector< CAnimParamHandle >
                constexpr std::ptrdiff_t m_proxy_read_params = 0x20; // CUtlVector< int32 >
                constexpr std::ptrdiff_t m_proxy_write_params = 0x38; // CUtlVector< int32 >
                constexpr std::ptrdiff_t m_e_script_type = 0x50; // AnimScriptType
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_script_manager {
                constexpr std::ptrdiff_t m_script_info = 0x10; // CUtlVector< ScriptInfo_t >
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_state_action_updater {
                constexpr std::ptrdiff_t m_p_action = 0x0; // CSmartPtr< CAnimActionUpdater >
                constexpr std::ptrdiff_t m_e_behavior = 0x8; // StateActionBehavior
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_transition_update_data {
                constexpr std::ptrdiff_t m_src_state_index = 0x0; // uint8
                constexpr std::ptrdiff_t m_dest_state_index = 0x1; // uint8
                constexpr std::ptrdiff_t m_b_disabled = 0x0; // bitfield:1
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_state_update_data {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_h_script = 0x8; // AnimScriptHandle
                constexpr std::ptrdiff_t m_transition_indices = 0x10; // CUtlVector< int32 >
                constexpr std::ptrdiff_t m_actions = 0x28; // CUtlVector< CStateActionUpdater >
                constexpr std::ptrdiff_t m_state_id = 0x40; // AnimStateID
                constexpr std::ptrdiff_t m_b_is_start_state = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_is_end_state = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_is_passthrough = 0x0; // bitfield:1
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_state_machine_updater {
                constexpr std::ptrdiff_t m_states = 0x8; // CUtlVector< CStateUpdateData >
                constexpr std::ptrdiff_t m_transitions = 0x20; // CUtlVector< CTransitionUpdateData >
                constexpr std::ptrdiff_t m_start_state_index = 0x50; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_update_node_ref {
                constexpr std::ptrdiff_t m_node_index = 0x8; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_update_node_base {
                constexpr std::ptrdiff_t m_node_path = 0x14; // CAnimNodePath
                constexpr std::ptrdiff_t m_network_mode = 0x44; // AnimNodeNetworkMode
                constexpr std::ptrdiff_t m_name = 0x50; // CUtlString
            }
            // Parent: c_anim_update_node_base
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_binary_update_node {
                constexpr std::ptrdiff_t m_p_child1 = 0x58; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_p_child2 = 0x68; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_timing_behavior = 0x78; // BinaryNodeTiming
                constexpr std::ptrdiff_t m_fl_timing_blend = 0x7C; // float32
                constexpr std::ptrdiff_t m_b_reset_child1 = 0x80; // bool
                constexpr std::ptrdiff_t m_b_reset_child2 = 0x81; // bool
            }
            // Parent: c_anim_update_node_base
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_blend_update_node {
                constexpr std::ptrdiff_t m_children = 0x60; // CUtlVector< CAnimUpdateNodeRef >
                constexpr std::ptrdiff_t m_sorted_order = 0x78; // CUtlVector< uint8 >
                constexpr std::ptrdiff_t m_target_values = 0x90; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_blend_value_source = 0xAC; // AnimValueSource
                constexpr std::ptrdiff_t m_param_index = 0xB0; // CAnimParamHandle
                constexpr std::ptrdiff_t m_damping = 0xB8; // CAnimInputDamping
                constexpr std::ptrdiff_t m_blend_key_type = 0xC8; // BlendKeyType
                constexpr std::ptrdiff_t m_b_lock_blend_on_reset = 0xCC; // bool
                constexpr std::ptrdiff_t m_b_sync_cycles = 0xCD; // bool
                constexpr std::ptrdiff_t m_b_loop = 0xCE; // bool
                constexpr std::ptrdiff_t m_b_lock_when_waning = 0xCF; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace blend_item_t {
                constexpr std::ptrdiff_t m_tags = 0x0; // CUtlVector< TagSpan_t >
                constexpr std::ptrdiff_t m_p_child = 0x18; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_h_sequence = 0x28; // HSequence
                constexpr std::ptrdiff_t m_v_pos = 0x2C; // Vector2D
                constexpr std::ptrdiff_t m_fl_duration = 0x34; // float32
                constexpr std::ptrdiff_t m_b_use_custom_duration = 0x38; // bool
            }
            // Parent: c_anim_update_node_base
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_blend2_d_update_node {
                constexpr std::ptrdiff_t m_items = 0x60; // CUtlVector< BlendItem_t >
                constexpr std::ptrdiff_t m_tags = 0x78; // CUtlVector< TagSpan_t >
                constexpr std::ptrdiff_t m_param_spans = 0x90; // CParamSpanUpdater
                constexpr std::ptrdiff_t m_node_item_indices = 0xA8; // CUtlVector< int32 >
                constexpr std::ptrdiff_t m_damping = 0xC0; // CAnimInputDamping
                constexpr std::ptrdiff_t m_blend_source_x = 0xD0; // AnimValueSource
                constexpr std::ptrdiff_t m_param_x = 0xD4; // CAnimParamHandle
                constexpr std::ptrdiff_t m_blend_source_y = 0xD8; // AnimValueSource
                constexpr std::ptrdiff_t m_param_y = 0xDC; // CAnimParamHandle
                constexpr std::ptrdiff_t m_e_blend_mode = 0xE0; // Blend2DMode
                constexpr std::ptrdiff_t m_playback_speed = 0xE4; // float32
                constexpr std::ptrdiff_t m_b_loop = 0xE8; // bool
                constexpr std::ptrdiff_t m_b_lock_blend_on_reset = 0xE9; // bool
                constexpr std::ptrdiff_t m_b_lock_when_waning = 0xEA; // bool
                constexpr std::ptrdiff_t m_b_anim_events_and_tags_on_most_weighted_only = 0xEB; // bool
            }
            // Parent: c_binary_update_node
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_bone_mask_update_node {
                constexpr std::ptrdiff_t m_n_weight_list_index = 0x88; // int32
                constexpr std::ptrdiff_t m_fl_root_motion_blend = 0x8C; // float32
                constexpr std::ptrdiff_t m_blend_space = 0x90; // BoneMaskBlendSpace
                constexpr std::ptrdiff_t m_foot_motion_timing = 0x94; // BinaryNodeChildOption
                constexpr std::ptrdiff_t m_b_use_blend_scale = 0x98; // bool
                constexpr std::ptrdiff_t m_blend_value_source = 0x9C; // AnimValueSource
                constexpr std::ptrdiff_t m_h_blend_parameter = 0xA0; // CAnimParamHandle
            }
            // Parent: c_anim_update_node_base
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_choice_update_node {
                constexpr std::ptrdiff_t m_children = 0x58; // CUtlVector< CAnimUpdateNodeRef >
                constexpr std::ptrdiff_t m_weights = 0x70; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_blend_times = 0x88; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_choice_method = 0xA0; // ChoiceMethod
                constexpr std::ptrdiff_t m_choice_change_method = 0xA4; // ChoiceChangeMethod
                constexpr std::ptrdiff_t m_blend_method = 0xA8; // ChoiceBlendMethod
                constexpr std::ptrdiff_t m_blend_time = 0xAC; // float32
                constexpr std::ptrdiff_t m_b_cross_fade = 0xB0; // bool
                constexpr std::ptrdiff_t m_b_reset_chosen = 0xB1; // bool
                constexpr std::ptrdiff_t m_b_dont_reset_same_selection = 0xB2; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_direct_playback_tag_data {
                constexpr std::ptrdiff_t m_sequence_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_tags = 0x8; // CUtlVector< TagSpan_t >
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace foot_fixed_data_t {
                constexpr std::ptrdiff_t m_v_toe_offset = 0x0; // VectorAligned
                constexpr std::ptrdiff_t m_v_heel_offset = 0x10; // VectorAligned
                constexpr std::ptrdiff_t m_n_target_bone_index = 0x20; // int32
                constexpr std::ptrdiff_t m_n_ankle_bone_index = 0x24; // int32
                constexpr std::ptrdiff_t m_n_ik_anchor_bone_index = 0x28; // int32
                constexpr std::ptrdiff_t m_ik_chain_index = 0x2C; // int32
                constexpr std::ptrdiff_t m_fl_max_ik_length = 0x30; // float32
                constexpr std::ptrdiff_t m_n_foot_index = 0x34; // int32
                constexpr std::ptrdiff_t m_n_tag_index = 0x38; // int32
                constexpr std::ptrdiff_t m_fl_max_rotation_left = 0x3C; // float32
                constexpr std::ptrdiff_t m_fl_max_rotation_right = 0x40; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace trace_settings_t {
                constexpr std::ptrdiff_t m_fl_trace_height = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_trace_radius = 0x4; // float32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace foot_fixed_settings {
                constexpr std::ptrdiff_t m_trace_settings = 0x0; // TraceSettings_t
                constexpr std::ptrdiff_t m_v_foot_base_bind_pose_position_ms = 0x10; // VectorAligned
                constexpr std::ptrdiff_t m_fl_foot_base_length = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_max_rotation_left = 0x24; // float32
                constexpr std::ptrdiff_t m_fl_max_rotation_right = 0x28; // float32
                constexpr std::ptrdiff_t m_footstep_landed_tag_index = 0x2C; // int32
                constexpr std::ptrdiff_t m_b_enable_tracing = 0x30; // bool
                constexpr std::ptrdiff_t m_fl_trace_angle_blend = 0x34; // float32
                constexpr std::ptrdiff_t m_n_disable_tag_index = 0x38; // int32
                constexpr std::ptrdiff_t m_n_foot_index = 0x3C; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace foot_step_trigger {
                constexpr std::ptrdiff_t m_tags = 0x0; // CUtlVector< int32 >
                constexpr std::ptrdiff_t m_n_foot_index = 0x18; // int32
                constexpr std::ptrdiff_t m_trigger_phase = 0x1C; // StepPhase
            }
            // Parent: c_anim_update_node_base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_leaf_update_node {
            }
            // Parent: c_leaf_update_node
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_lean_matrix_update_node {
                constexpr std::ptrdiff_t m_frame_corners = 0x5C; // int32[3][3]
                constexpr std::ptrdiff_t m_poses = 0x80; // CPoseHandle[9]
                constexpr std::ptrdiff_t m_damping = 0xA8; // CAnimInputDamping
                constexpr std::ptrdiff_t m_blend_source = 0xB8; // AnimVectorSource
                constexpr std::ptrdiff_t m_param_index = 0xBC; // CAnimParamHandle
                constexpr std::ptrdiff_t m_vertical_axis = 0xC0; // Vector
                constexpr std::ptrdiff_t m_horizontal_axis = 0xCC; // Vector
                constexpr std::ptrdiff_t m_h_sequence = 0xD8; // HSequence
                constexpr std::ptrdiff_t m_fl_max_value = 0xDC; // float32
                constexpr std::ptrdiff_t m_n_sequence_max_frame = 0xE0; // int32
            }
            // Parent: c_leaf_update_node
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_motion_graph_update_node {
                constexpr std::ptrdiff_t m_p_motion_graph = 0x58; // CSmartPtr< CMotionGraph >
            }
            // Parent: c_leaf_update_node
            // Fields count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_motion_matching_update_node {
                constexpr std::ptrdiff_t m_data_set = 0x58; // CMotionDataSet
                constexpr std::ptrdiff_t m_metrics = 0x78; // CUtlVector< CSmartPtr< CMotionMetricEvaluator > >
                constexpr std::ptrdiff_t m_weights = 0x90; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_b_search_every_tick = 0xE0; // bool
                constexpr std::ptrdiff_t m_fl_search_interval = 0xE4; // float32
                constexpr std::ptrdiff_t m_b_search_when_clip_ends = 0xE8; // bool
                constexpr std::ptrdiff_t m_b_search_when_goal_changes = 0xE9; // bool
                constexpr std::ptrdiff_t m_blend_curve = 0xEC; // CBlendCurve
                constexpr std::ptrdiff_t m_fl_sample_rate = 0xF4; // float32
                constexpr std::ptrdiff_t m_fl_blend_time = 0xF8; // float32
                constexpr std::ptrdiff_t m_b_lock_clip_when_waning = 0xFC; // bool
                constexpr std::ptrdiff_t m_fl_selection_threshold = 0x100; // float32
                constexpr std::ptrdiff_t m_fl_reselection_time_window = 0x104; // float32
                constexpr std::ptrdiff_t m_b_enable_rotation_correction = 0x108; // bool
                constexpr std::ptrdiff_t m_b_goal_assist = 0x109; // bool
                constexpr std::ptrdiff_t m_fl_goal_assist_distance = 0x10C; // float32
                constexpr std::ptrdiff_t m_fl_goal_assist_tolerance = 0x110; // float32
                constexpr std::ptrdiff_t m_distance_scale_damping = 0x118; // CAnimInputDamping
                constexpr std::ptrdiff_t m_fl_distance_scale_outer_radius = 0x128; // float32
                constexpr std::ptrdiff_t m_fl_distance_scale_inner_radius = 0x12C; // float32
                constexpr std::ptrdiff_t m_fl_distance_scale_max_scale = 0x130; // float32
                constexpr std::ptrdiff_t m_fl_distance_scale_min_scale = 0x134; // float32
                constexpr std::ptrdiff_t m_b_enable_distance_scaling = 0x138; // bool
            }
            // Parent: c_anim_update_node_base
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_selector_update_node {
                constexpr std::ptrdiff_t m_children = 0x58; // CUtlVector< CAnimUpdateNodeRef >
                constexpr std::ptrdiff_t m_tags = 0x70; // CUtlVector< int8 >
                constexpr std::ptrdiff_t m_blend_curve = 0x8C; // CBlendCurve
                constexpr std::ptrdiff_t m_fl_blend_time = 0x94; // CAnimValue< float32 >
                constexpr std::ptrdiff_t m_h_parameter = 0x9C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_e_tag_behavior = 0xA0; // SelectorTagBehavior_t
                constexpr std::ptrdiff_t m_b_reset_on_change = 0xA4; // bool
                constexpr std::ptrdiff_t m_b_sync_cycles_on_change = 0xA5; // bool
            }
            // Parent: c_leaf_update_node
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_sequence_update_node {
                constexpr std::ptrdiff_t m_param_spans = 0x60; // CParamSpanUpdater
                constexpr std::ptrdiff_t m_tags = 0x78; // CUtlVector< TagSpan_t >
                constexpr std::ptrdiff_t m_h_sequence = 0x94; // HSequence
                constexpr std::ptrdiff_t m_playback_speed = 0x98; // float32
                constexpr std::ptrdiff_t m_duration = 0x9C; // float32
                constexpr std::ptrdiff_t m_b_loop = 0xA0; // bool
            }
            // Parent: c_leaf_update_node
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_single_frame_update_node {
                constexpr std::ptrdiff_t m_actions = 0x58; // CUtlVector< CSmartPtr< CAnimActionUpdater > >
                constexpr std::ptrdiff_t m_h_pose_cache_handle = 0x70; // CPoseHandle
                constexpr std::ptrdiff_t m_h_sequence = 0x74; // HSequence
                constexpr std::ptrdiff_t m_fl_cycle = 0x78; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_solve_ik_target_handle_t {
                constexpr std::ptrdiff_t m_position_handle = 0x0; // CAnimParamHandle
                constexpr std::ptrdiff_t m_orientation_handle = 0x2; // CAnimParamHandle
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace stance_info_t {
                constexpr std::ptrdiff_t m_v_position = 0x0; // Vector
                constexpr std::ptrdiff_t m_fl_direction = 0xC; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_state_node_transition_data {
                constexpr std::ptrdiff_t m_curve = 0x0; // CBlendCurve
                constexpr std::ptrdiff_t m_blend_duration = 0x8; // CAnimValue< float32 >
                constexpr std::ptrdiff_t m_reset_cycle_value = 0x10; // CAnimValue< float32 >
                constexpr std::ptrdiff_t m_b_reset = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_reset_cycle_option = 0x0; // bitfield:3
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_state_node_state_data {
                constexpr std::ptrdiff_t m_p_child = 0x0; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_b_exclusive_root_motion = 0x0; // bitfield:1
            }
            // Parent: c_anim_update_node_base
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_state_machine_update_node {
                constexpr std::ptrdiff_t m_state_machine = 0x68; // CAnimStateMachineUpdater
                constexpr std::ptrdiff_t m_state_data = 0xC0; // CUtlVector< CStateNodeStateData >
                constexpr std::ptrdiff_t m_transition_data = 0xD8; // CUtlVector< CStateNodeTransitionData >
                constexpr std::ptrdiff_t m_b_block_waning_tags = 0xF4; // bool
                constexpr std::ptrdiff_t m_b_lock_state_when_waning = 0xF5; // bool
            }
            // Parent: c_binary_update_node
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_subtract_update_node {
                constexpr std::ptrdiff_t m_foot_motion_timing = 0x88; // BinaryNodeChildOption
                constexpr std::ptrdiff_t m_b_apply_to_foot_motion = 0x8C; // bool
                constexpr std::ptrdiff_t m_b_apply_channels_separately = 0x8D; // bool
                constexpr std::ptrdiff_t m_b_use_model_space = 0x8E; // bool
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace two_bone_ik_settings_t {
                constexpr std::ptrdiff_t m_end_effector_type = 0x0; // IkEndEffectorType
                constexpr std::ptrdiff_t m_end_effector_attachment = 0x10; // CAnimAttachment
                constexpr std::ptrdiff_t m_target_type = 0x90; // IkTargetType
                constexpr std::ptrdiff_t m_target_attachment = 0xA0; // CAnimAttachment
                constexpr std::ptrdiff_t m_target_bone_index = 0x120; // int32
                constexpr std::ptrdiff_t m_h_position_param = 0x124; // CAnimParamHandle
                constexpr std::ptrdiff_t m_h_rotation_param = 0x126; // CAnimParamHandle
                constexpr std::ptrdiff_t m_b_always_use_fallback_hinge = 0x128; // bool
                constexpr std::ptrdiff_t m_v_ls_fallback_hinge_axis = 0x130; // VectorAligned
                constexpr std::ptrdiff_t m_n_fixed_bone_index = 0x140; // int32
                constexpr std::ptrdiff_t m_n_middle_bone_index = 0x144; // int32
                constexpr std::ptrdiff_t m_n_end_bone_index = 0x148; // int32
                constexpr std::ptrdiff_t m_b_match_target_orientation = 0x14C; // bool
                constexpr std::ptrdiff_t m_b_constrain_twist = 0x14D; // bool
                constexpr std::ptrdiff_t m_fl_max_twist = 0x150; // float32
            }
            // Parent: c_anim_update_node_base
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_unary_update_node {
                constexpr std::ptrdiff_t m_p_child_node = 0x58; // CAnimUpdateNodeRef
            }
            // Parent: c_unary_update_node
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_way_point_helper_update_node {
                constexpr std::ptrdiff_t m_fl_start_cycle = 0x6C; // float32
                constexpr std::ptrdiff_t m_fl_end_cycle = 0x70; // float32
                constexpr std::ptrdiff_t m_b_only_goals = 0x74; // bool
                constexpr std::ptrdiff_t m_b_prevent_overshoot = 0x75; // bool
                constexpr std::ptrdiff_t m_b_prevent_undershoot = 0x76; // bool
            }
            // Parent: c_leaf_update_node
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_zero_pose_update_node {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace tag_span_t {
                constexpr std::ptrdiff_t m_tag_index = 0x0; // int32
                constexpr std::ptrdiff_t m_start_cycle = 0x4; // float32
                constexpr std::ptrdiff_t m_end_cycle = 0x8; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_node_path {
                constexpr std::ptrdiff_t m_path = 0x0; // AnimNodeID[11]
                constexpr std::ptrdiff_t m_n_count = 0x2C; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace config_index {
                constexpr std::ptrdiff_t m_n_group = 0x0; // uint16
                constexpr std::ptrdiff_t m_n_config = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace motion_index {
                constexpr std::ptrdiff_t m_n_group = 0x0; // uint16
                constexpr std::ptrdiff_t m_n_motion = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_motion_graph_config {
                constexpr std::ptrdiff_t m_param_values = 0x0; // float32[4]
                constexpr std::ptrdiff_t m_fl_duration = 0x10; // float32
                constexpr std::ptrdiff_t m_n_motion_index = 0x14; // MotionIndex
                constexpr std::ptrdiff_t m_n_sample_start = 0x18; // int32
                constexpr std::ptrdiff_t m_n_sample_count = 0x1C; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pose_handle {
                constexpr std::ptrdiff_t m_n_index = 0x0; // uint16
                constexpr std::ptrdiff_t m_e_type = 0x2; // PoseType_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_animation_graph_visualizer_primitive_base {
                constexpr std::ptrdiff_t m_type = 0x8; // CAnimationGraphVisualizerPrimitiveType
                constexpr std::ptrdiff_t m_owning_anim_node_paths = 0xC; // AnimNodeID[11]
                constexpr std::ptrdiff_t m_n_owning_anim_node_path_count = 0x38; // int32
            }
            // Parent: c_animation_graph_visualizer_primitive_base
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_animation_graph_visualizer_text {
                constexpr std::ptrdiff_t m_v_ws_position = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_color = 0x50; // Color
                constexpr std::ptrdiff_t m_text = 0x58; // CUtlString
            }
            // Parent: c_animation_graph_visualizer_primitive_base
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_animation_graph_visualizer_sphere {
                constexpr std::ptrdiff_t m_v_ws_position = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_fl_radius = 0x50; // float32
                constexpr std::ptrdiff_t m_color = 0x54; // Color
            }
            // Parent: c_animation_graph_visualizer_primitive_base
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_animation_graph_visualizer_line {
                constexpr std::ptrdiff_t m_v_ws_position_start = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_v_ws_position_end = 0x50; // VectorAligned
                constexpr std::ptrdiff_t m_color = 0x60; // Color
            }
            // Parent: c_animation_graph_visualizer_primitive_base
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_animation_graph_visualizer_pie {
                constexpr std::ptrdiff_t m_v_ws_center = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_v_ws_start = 0x50; // VectorAligned
                constexpr std::ptrdiff_t m_v_ws_end = 0x60; // VectorAligned
                constexpr std::ptrdiff_t m_color = 0x70; // Color
            }
            // Parent: c_animation_graph_visualizer_primitive_base
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_animation_graph_visualizer_axis {
                constexpr std::ptrdiff_t m_x_ws_transform = 0x40; // CTransform
                constexpr std::ptrdiff_t m_fl_axis_size = 0x60; // float32
            }
            // Parent: None
            // Fields count: 1
            namespace ik_bone_name_and_index_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
            }
            // Parent: None
            // Fields count: 2
            namespace ik_solver_settings_t {
                constexpr std::ptrdiff_t m_solver_type = 0x0; // IKSolverType
                constexpr std::ptrdiff_t m_n_num_iterations = 0x4; // int32
            }
            // Parent: None
            // Fields count: 5
            namespace ik_target_settings_t {
                constexpr std::ptrdiff_t m_target_source = 0x0; // IKTargetSource
                constexpr std::ptrdiff_t m_bone = 0x8; // IKBoneNameAndIndex_t
                constexpr std::ptrdiff_t m_animgraph_parameter_name_position = 0x18; // AnimParamID
                constexpr std::ptrdiff_t m_animgraph_parameter_name_orientation = 0x1C; // AnimParamID
                constexpr std::ptrdiff_t m_target_coord_system = 0x20; // IKTargetCoordinateSystem
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace anim_node_id {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace anim_node_output_id {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace anim_state_id {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace anim_param_id {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace anim_tag_id {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace anim_component_id {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace anim_script_handle {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_attachment {
                constexpr std::ptrdiff_t m_influence_rotations = 0x0; // Quaternion[3]
                constexpr std::ptrdiff_t m_influence_offsets = 0x30; // VectorAligned[3]
                constexpr std::ptrdiff_t m_influence_indices = 0x60; // int32[3]
                constexpr std::ptrdiff_t m_influence_weights = 0x6C; // float32[3]
                constexpr std::ptrdiff_t m_num_influences = 0x78; // uint8
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_physics2_shape_def_t {
                constexpr std::ptrdiff_t m_spheres = 0x0; // CUtlVector< RnSphereDesc_t >
                constexpr std::ptrdiff_t m_capsules = 0x18; // CUtlVector< RnCapsuleDesc_t >
                constexpr std::ptrdiff_t m_hulls = 0x30; // CUtlVector< RnHullDesc_t >
                constexpr std::ptrdiff_t m_meshes = 0x48; // CUtlVector< RnMeshDesc_t >
                constexpr std::ptrdiff_t m_collision_attribute_indices = 0x60; // CUtlVector< uint16 >
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_phys_x_body_part_t {
                constexpr std::ptrdiff_t m_n_flags = 0x0; // uint32
                constexpr std::ptrdiff_t m_fl_mass = 0x4; // float32
                constexpr std::ptrdiff_t m_rn_shape = 0x8; // VPhysics2ShapeDef_t
                constexpr std::ptrdiff_t m_n_collision_attribute_index = 0x80; // uint16
                constexpr std::ptrdiff_t m_n_reserved = 0x82; // uint16
                constexpr std::ptrdiff_t m_fl_inertia_scale = 0x84; // float32
                constexpr std::ptrdiff_t m_fl_linear_damping = 0x88; // float32
                constexpr std::ptrdiff_t m_fl_angular_damping = 0x8C; // float32
                constexpr std::ptrdiff_t m_b_override_mass_center = 0x90; // bool
                constexpr std::ptrdiff_t m_v_mass_center_override = 0x94; // Vector
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_phys_x_collision_attributes_t {
                constexpr std::ptrdiff_t m_collision_group = 0x0; // uint32
                constexpr std::ptrdiff_t m_interact_as = 0x8; // CUtlVector< uint32 >
                constexpr std::ptrdiff_t m_interact_with = 0x20; // CUtlVector< uint32 >
                constexpr std::ptrdiff_t m_interact_exclude = 0x38; // CUtlVector< uint32 >
                constexpr std::ptrdiff_t m_collision_group_string = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_interact_as_strings = 0x58; // CUtlVector< CUtlString >
                constexpr std::ptrdiff_t m_interact_with_strings = 0x70; // CUtlVector< CUtlString >
                constexpr std::ptrdiff_t m_interact_exclude_strings = 0x88; // CUtlVector< CUtlString >
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_phys_x_range_t {
                constexpr std::ptrdiff_t m_fl_min = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_max = 0x4; // float32
            }
            // Parent: None
            // Fields count: 46
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_phys_x_constraint_params_t {
                constexpr std::ptrdiff_t m_n_type = 0x0; // int8
                constexpr std::ptrdiff_t m_n_translate_motion = 0x1; // int8
                constexpr std::ptrdiff_t m_n_rotate_motion = 0x2; // int8
                constexpr std::ptrdiff_t m_n_flags = 0x3; // int8
                constexpr std::ptrdiff_t m_anchor = 0x4; // Vector[2]
                constexpr std::ptrdiff_t m_axes = 0x1C; // QuaternionStorage[2]
                constexpr std::ptrdiff_t m_max_force = 0x3C; // float32
                constexpr std::ptrdiff_t m_max_torque = 0x40; // float32
                constexpr std::ptrdiff_t m_linear_limit_value = 0x44; // float32
                constexpr std::ptrdiff_t m_linear_limit_restitution = 0x48; // float32
                constexpr std::ptrdiff_t m_linear_limit_spring = 0x4C; // float32
                constexpr std::ptrdiff_t m_linear_limit_damping = 0x50; // float32
                constexpr std::ptrdiff_t m_twist_low_limit_value = 0x54; // float32
                constexpr std::ptrdiff_t m_twist_low_limit_restitution = 0x58; // float32
                constexpr std::ptrdiff_t m_twist_low_limit_spring = 0x5C; // float32
                constexpr std::ptrdiff_t m_twist_low_limit_damping = 0x60; // float32
                constexpr std::ptrdiff_t m_twist_high_limit_value = 0x64; // float32
                constexpr std::ptrdiff_t m_twist_high_limit_restitution = 0x68; // float32
                constexpr std::ptrdiff_t m_twist_high_limit_spring = 0x6C; // float32
                constexpr std::ptrdiff_t m_twist_high_limit_damping = 0x70; // float32
                constexpr std::ptrdiff_t m_swing1_limit_value = 0x74; // float32
                constexpr std::ptrdiff_t m_swing1_limit_restitution = 0x78; // float32
                constexpr std::ptrdiff_t m_swing1_limit_spring = 0x7C; // float32
                constexpr std::ptrdiff_t m_swing1_limit_damping = 0x80; // float32
                constexpr std::ptrdiff_t m_swing2_limit_value = 0x84; // float32
                constexpr std::ptrdiff_t m_swing2_limit_restitution = 0x88; // float32
                constexpr std::ptrdiff_t m_swing2_limit_spring = 0x8C; // float32
                constexpr std::ptrdiff_t m_swing2_limit_damping = 0x90; // float32
                constexpr std::ptrdiff_t m_goal_position = 0x94; // Vector
                constexpr std::ptrdiff_t m_goal_orientation = 0xA0; // QuaternionStorage
                constexpr std::ptrdiff_t m_goal_angular_velocity = 0xB0; // Vector
                constexpr std::ptrdiff_t m_drive_spring_x = 0xBC; // float32
                constexpr std::ptrdiff_t m_drive_spring_y = 0xC0; // float32
                constexpr std::ptrdiff_t m_drive_spring_z = 0xC4; // float32
                constexpr std::ptrdiff_t m_drive_damping_x = 0xC8; // float32
                constexpr std::ptrdiff_t m_drive_damping_y = 0xCC; // float32
                constexpr std::ptrdiff_t m_drive_damping_z = 0xD0; // float32
                constexpr std::ptrdiff_t m_drive_spring_twist = 0xD4; // float32
                constexpr std::ptrdiff_t m_drive_spring_swing = 0xD8; // float32
                constexpr std::ptrdiff_t m_drive_spring_slerp = 0xDC; // float32
                constexpr std::ptrdiff_t m_drive_damping_twist = 0xE0; // float32
                constexpr std::ptrdiff_t m_drive_damping_swing = 0xE4; // float32
                constexpr std::ptrdiff_t m_drive_damping_slerp = 0xE8; // float32
                constexpr std::ptrdiff_t m_solver_iteration_count = 0xEC; // int32
                constexpr std::ptrdiff_t m_projection_linear_tolerance = 0xF0; // float32
                constexpr std::ptrdiff_t m_projection_angular_tolerance = 0xF4; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_phys_x_constraint2_t {
                constexpr std::ptrdiff_t m_n_flags = 0x0; // uint32
                constexpr std::ptrdiff_t m_n_parent = 0x4; // uint16
                constexpr std::ptrdiff_t m_n_child = 0x6; // uint16
                constexpr std::ptrdiff_t m_params = 0x8; // VPhysXConstraintParams_t
            }
            // Parent: None
            // Fields count: 24
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_phys_x_joint_t {
                constexpr std::ptrdiff_t m_n_type = 0x0; // uint16
                constexpr std::ptrdiff_t m_n_body1 = 0x2; // uint16
                constexpr std::ptrdiff_t m_n_body2 = 0x4; // uint16
                constexpr std::ptrdiff_t m_n_flags = 0x6; // uint16
                constexpr std::ptrdiff_t m_frame1 = 0x10; // CTransform
                constexpr std::ptrdiff_t m_frame2 = 0x30; // CTransform
                constexpr std::ptrdiff_t m_b_enable_collision = 0x50; // bool
                constexpr std::ptrdiff_t m_b_enable_linear_limit = 0x51; // bool
                constexpr std::ptrdiff_t m_linear_limit = 0x54; // VPhysXRange_t
                constexpr std::ptrdiff_t m_b_enable_linear_motor = 0x5C; // bool
                constexpr std::ptrdiff_t m_v_linear_target_velocity = 0x60; // Vector
                constexpr std::ptrdiff_t m_fl_max_force = 0x6C; // float32
                constexpr std::ptrdiff_t m_b_enable_swing_limit = 0x70; // bool
                constexpr std::ptrdiff_t m_swing_limit = 0x74; // VPhysXRange_t
                constexpr std::ptrdiff_t m_b_enable_twist_limit = 0x7C; // bool
                constexpr std::ptrdiff_t m_twist_limit = 0x80; // VPhysXRange_t
                constexpr std::ptrdiff_t m_b_enable_angular_motor = 0x88; // bool
                constexpr std::ptrdiff_t m_v_angular_target_velocity = 0x8C; // Vector
                constexpr std::ptrdiff_t m_fl_max_torque = 0x98; // float32
                constexpr std::ptrdiff_t m_fl_linear_frequency = 0x9C; // float32
                constexpr std::ptrdiff_t m_fl_linear_damping_ratio = 0xA0; // float32
                constexpr std::ptrdiff_t m_fl_angular_frequency = 0xA4; // float32
                constexpr std::ptrdiff_t m_fl_angular_damping_ratio = 0xA8; // float32
                constexpr std::ptrdiff_t m_fl_friction = 0xAC; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace phys_softbody_desc_t {
                constexpr std::ptrdiff_t m_particle_bone_hash = 0x0; // CUtlVector< uint32 >
                constexpr std::ptrdiff_t m_particles = 0x18; // CUtlVector< RnSoftbodyParticle_t >
                constexpr std::ptrdiff_t m_springs = 0x30; // CUtlVector< RnSoftbodySpring_t >
                constexpr std::ptrdiff_t m_capsules = 0x48; // CUtlVector< RnSoftbodyCapsule_t >
                constexpr std::ptrdiff_t m_init_pose = 0x60; // CUtlVector< CTransform >
                constexpr std::ptrdiff_t m_particle_bone_name = 0x78; // CUtlVector< CUtlString >
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_phys_x_aggregate_data_t {
                constexpr std::ptrdiff_t m_n_flags = 0x0; // uint16
                constexpr std::ptrdiff_t m_n_ref_counter = 0x2; // uint16
                constexpr std::ptrdiff_t m_bones_hash = 0x8; // CUtlVector< uint32 >
                constexpr std::ptrdiff_t m_bone_names = 0x20; // CUtlVector< CUtlString >
                constexpr std::ptrdiff_t m_index_names = 0x38; // CUtlVector< uint16 >
                constexpr std::ptrdiff_t m_index_hash = 0x50; // CUtlVector< uint16 >
                constexpr std::ptrdiff_t m_bind_pose = 0x68; // CUtlVector< matrix3x4a_t >
                constexpr std::ptrdiff_t m_parts = 0x80; // CUtlVector< VPhysXBodyPart_t >
                constexpr std::ptrdiff_t m_constraints2 = 0x98; // CUtlVector< VPhysXConstraint2_t >
                constexpr std::ptrdiff_t m_joints = 0xB0; // CUtlVector< VPhysXJoint_t >
                constexpr std::ptrdiff_t m_p_fe_model = 0xC8; // PhysFeModelDesc_t*
                constexpr std::ptrdiff_t m_bone_parents = 0xD0; // CUtlVector< uint16 >
                constexpr std::ptrdiff_t m_surface_property_hashes = 0xE8; // CUtlVector< uint32 >
                constexpr std::ptrdiff_t m_collision_attributes = 0x100; // CUtlVector< VPhysXCollisionAttributes_t >
                constexpr std::ptrdiff_t m_debug_part_names = 0x118; // CUtlVector< CUtlString >
                constexpr std::ptrdiff_t m_embedded_keyvalues = 0x130; // CUtlString
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_phys_surface_properties_physics {
                constexpr std::ptrdiff_t m_friction = 0x0; // float32
                constexpr std::ptrdiff_t m_elasticity = 0x4; // float32
                constexpr std::ptrdiff_t m_density = 0x8; // float32
                constexpr std::ptrdiff_t m_thickness = 0xC; // float32
                constexpr std::ptrdiff_t m_soft_contact_frequency = 0x10; // float32
                constexpr std::ptrdiff_t m_soft_contact_damping_ratio = 0x14; // float32
                constexpr std::ptrdiff_t m_wheel_drag = 0x18; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_phys_surface_properties_audio {
                constexpr std::ptrdiff_t m_reflectivity = 0x0; // float32
                constexpr std::ptrdiff_t m_hardness_factor = 0x4; // float32
                constexpr std::ptrdiff_t m_roughness_factor = 0x8; // float32
                constexpr std::ptrdiff_t m_rough_threshold = 0xC; // float32
                constexpr std::ptrdiff_t m_hard_threshold = 0x10; // float32
                constexpr std::ptrdiff_t m_hard_velocity_threshold = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_static_impact_volume = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_occlusion_factor = 0x1C; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_phys_surface_properties_sound_names {
                constexpr std::ptrdiff_t m_impact_soft = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_impact_hard = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_scrape_smooth = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_scrape_rough = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_bullet_impact = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_rolling = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_break = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_strain = 0x38; // CUtlString
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_phys_surface_properties {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_name_hash = 0x8; // uint32
                constexpr std::ptrdiff_t m_base_name_hash = 0xC; // uint32
                constexpr std::ptrdiff_t m_b_hidden = 0x18; // bool
                constexpr std::ptrdiff_t m_description = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_physics = 0x28; // CPhysSurfacePropertiesPhysics
                constexpr std::ptrdiff_t m_audio_sounds = 0x48; // CPhysSurfacePropertiesSoundNames
                constexpr std::ptrdiff_t m_audio_params = 0x88; // CPhysSurfacePropertiesAudio
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace cv_phys_x_surface_properties_list {
                constexpr std::ptrdiff_t m_surface_properties_list = 0x0; // CUtlVector< CPhysSurfaceProperties* >
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace material_group_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_materials = 0x8; // CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > >
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace model_skeleton_data_t {
                constexpr std::ptrdiff_t m_bone_name = 0x0; // CUtlVector< CUtlString >
                constexpr std::ptrdiff_t m_n_parent = 0x18; // CUtlVector< int16 >
                constexpr std::ptrdiff_t m_bone_sphere = 0x30; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_n_flag = 0x48; // CUtlVector< uint32 >
                constexpr std::ptrdiff_t m_bone_pos_parent = 0x60; // CUtlVector< Vector >
                constexpr std::ptrdiff_t m_bone_rot_parent = 0x78; // CUtlVector< QuaternionStorage >
                constexpr std::ptrdiff_t m_bone_scale_parent = 0x90; // CUtlVector< float32 >
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace perm_model_info_t {
                constexpr std::ptrdiff_t m_n_flags = 0x0; // uint32
                constexpr std::ptrdiff_t m_v_hull_min = 0x4; // Vector
                constexpr std::ptrdiff_t m_v_hull_max = 0x10; // Vector
                constexpr std::ptrdiff_t m_v_view_min = 0x1C; // Vector
                constexpr std::ptrdiff_t m_v_view_max = 0x28; // Vector
                constexpr std::ptrdiff_t m_fl_mass = 0x34; // float32
                constexpr std::ptrdiff_t m_v_eye_position = 0x38; // Vector
                constexpr std::ptrdiff_t m_fl_max_eye_deflection = 0x44; // float32
                constexpr std::ptrdiff_t m_s_surface_property = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_key_value_text = 0x50; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace perm_model_ext_part_t {
                constexpr std::ptrdiff_t m_transform = 0x0; // CTransform
                constexpr std::ptrdiff_t m_name = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_n_parent = 0x28; // int32
                constexpr std::ptrdiff_t m_ref_model = 0x30; // CStrongHandle< InfoForResourceTypeCModel >
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace model_bone_flex_driver_control_t {
                constexpr std::ptrdiff_t m_n_bone_component = 0x0; // ModelBoneFlexComponent_t
                constexpr std::ptrdiff_t m_flex_controller = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_flex_controller_token = 0x10; // uint32
                constexpr std::ptrdiff_t m_fl_min = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_max = 0x18; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace model_bone_flex_driver_t {
                constexpr std::ptrdiff_t m_bone_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_bone_name_token = 0x8; // uint32
                constexpr std::ptrdiff_t m_controls = 0x10; // CUtlVector< ModelBoneFlexDriverControl_t >
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace perm_model_data_animated_material_attribute_t {
                constexpr std::ptrdiff_t m_attribute_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_n_num_channels = 0x8; // int32
            }
            // Parent: None
            // Fields count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace perm_model_data_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_model_info = 0x8; // PermModelInfo_t
                constexpr std::ptrdiff_t m_ext_parts = 0x60; // CUtlVector< PermModelExtPart_t >
                constexpr std::ptrdiff_t m_ref_meshes = 0x78; // CUtlVector< CStrongHandle< InfoForResourceTypeCRenderMesh > >
                constexpr std::ptrdiff_t m_ref_mesh_group_masks = 0x90; // CUtlVector< uint64 >
                constexpr std::ptrdiff_t m_ref_phys_group_masks = 0xA8; // CUtlVector< uint64 >
                constexpr std::ptrdiff_t m_ref_lod_group_masks = 0xC0; // CUtlVector< uint8 >
                constexpr std::ptrdiff_t m_lod_group_switch_distances = 0xD8; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_ref_physics_data = 0xF0; // CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > >
                constexpr std::ptrdiff_t m_ref_physics_hitbox_data = 0x108; // CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > >
                constexpr std::ptrdiff_t m_ref_anim_groups = 0x120; // CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > >
                constexpr std::ptrdiff_t m_ref_sequence_groups = 0x138; // CUtlVector< CStrongHandle< InfoForResourceTypeCSequenceGroupData > >
                constexpr std::ptrdiff_t m_mesh_groups = 0x150; // CUtlVector< CUtlString >
                constexpr std::ptrdiff_t m_material_groups = 0x168; // CUtlVector< MaterialGroup_t >
                constexpr std::ptrdiff_t m_n_default_mesh_group_mask = 0x180; // uint64
                constexpr std::ptrdiff_t m_model_skeleton = 0x188; // ModelSkeletonData_t
                constexpr std::ptrdiff_t m_remapping_table = 0x230; // CUtlVector< int16 >
                constexpr std::ptrdiff_t m_remapping_table_starts = 0x248; // CUtlVector< uint16 >
                constexpr std::ptrdiff_t m_bone_flex_drivers = 0x260; // CUtlVector< ModelBoneFlexDriver_t >
                constexpr std::ptrdiff_t m_p_model_config_list = 0x278; // CModelConfigList*
                constexpr std::ptrdiff_t m_body_groups_hidden_in_tools = 0x280; // CUtlVector< CUtlString >
                constexpr std::ptrdiff_t m_ref_anim_include_models = 0x298; // CUtlVector< CStrongHandle< InfoForResourceTypeCModel > >
                constexpr std::ptrdiff_t m_animated_material_attributes = 0x2B0; // CUtlVector< PermModelDataAnimatedMaterialAttribute_t >
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_model_config_element {
                constexpr std::ptrdiff_t m_element_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_nested_elements = 0x10; // CUtlVector< CModelConfigElement* >
            }
            // Parent: c_model_config_element
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_model_config_element_attached_model {
                constexpr std::ptrdiff_t m_instance_name = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_entity_class = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_h_model = 0x58; // CStrongHandle< InfoForResourceTypeCModel >
                constexpr std::ptrdiff_t m_v_offset = 0x60; // Vector
                constexpr std::ptrdiff_t m_a_ang_offset = 0x6C; // QAngle
                constexpr std::ptrdiff_t m_attachment_name = 0x78; // CUtlString
                constexpr std::ptrdiff_t m_local_attachment_offset_name = 0x80; // CUtlString
                constexpr std::ptrdiff_t m_attachment_type = 0x88; // ModelConfigAttachmentType_t
                constexpr std::ptrdiff_t m_b_bone_merge_flex = 0x8C; // bool
                constexpr std::ptrdiff_t m_b_user_specified_color = 0x8D; // bool
                constexpr std::ptrdiff_t m_b_user_specified_material_group = 0x8E; // bool
                constexpr std::ptrdiff_t m_b_accept_parent_material_driven_decals = 0x8F; // bool
                constexpr std::ptrdiff_t m_bodygroup_on_other_models = 0x90; // CUtlString
                constexpr std::ptrdiff_t m_material_group_on_other_models = 0x98; // CUtlString
            }
            // Parent: c_model_config_element
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_model_config_element_user_pick {
                constexpr std::ptrdiff_t m_choices = 0x48; // CUtlVector< CUtlString >
            }
            // Parent: c_model_config_element
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_model_config_element_random_pick {
                constexpr std::ptrdiff_t m_choices = 0x48; // CUtlVector< CUtlString >
                constexpr std::ptrdiff_t m_choice_weights = 0x60; // CUtlVector< float32 >
            }
            // Parent: c_model_config_element
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_model_config_element_set_material_group {
                constexpr std::ptrdiff_t m_material_group_name = 0x48; // CUtlString
            }
            // Parent: c_model_config_element
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_model_config_element_set_material_group_on_attached_models {
                constexpr std::ptrdiff_t m_material_group_name = 0x48; // CUtlString
            }
            // Parent: c_model_config_element
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_model_config_element_set_render_color {
                constexpr std::ptrdiff_t m_color = 0x48; // Color
            }
            // Parent: c_model_config_element
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_model_config_element_random_color {
                constexpr std::ptrdiff_t m_gradient = 0x48; // CColorGradient
            }
            // Parent: c_model_config_element
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_model_config_element_set_bodygroup {
                constexpr std::ptrdiff_t m_group_name = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_n_choice = 0x50; // int32
            }
            // Parent: c_model_config_element
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_model_config_element_set_bodygroup_on_attached_models {
                constexpr std::ptrdiff_t m_group_name = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_n_choice = 0x50; // int32
            }
            // Parent: c_model_config_element
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_model_config_element_command {
                constexpr std::ptrdiff_t m_command = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_args = 0x50; // KeyValues3
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_model_config {
                constexpr std::ptrdiff_t m_config_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_elements = 0x8; // CUtlVector< CModelConfigElement* >
                constexpr std::ptrdiff_t m_b_top_level = 0x20; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_model_config_list {
                constexpr std::ptrdiff_t m_b_hide_material_group_in_tools = 0x0; // bool
                constexpr std::ptrdiff_t m_b_hide_render_color_in_tools = 0x1; // bool
                constexpr std::ptrdiff_t m_configs = 0x8; // CUtlVector< CModelConfig* >
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_render_buffer_binding {
                constexpr std::ptrdiff_t m_h_buffer = 0x0; // uint64
                constexpr std::ptrdiff_t m_n_bind_offset_bytes = 0x10; // uint32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace skeleton_bone_bounds_t {
                constexpr std::ptrdiff_t m_vec_center = 0x0; // Vector
                constexpr std::ptrdiff_t m_vec_size = 0xC; // Vector
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace render_skeleton_bone_t {
                constexpr std::ptrdiff_t m_bone_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_parent_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_inv_bind_pose = 0x10; // matrix3x4_t
                constexpr std::ptrdiff_t m_bbox = 0x40; // SkeletonBoneBounds_t
                constexpr std::ptrdiff_t m_fl_sphere_radius = 0x58; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_render_skeleton {
                constexpr std::ptrdiff_t m_bones = 0x0; // CUtlVector< RenderSkeletonBone_t >
                constexpr std::ptrdiff_t m_bone_parents = 0x30; // CUtlVector< int32 >
                constexpr std::ptrdiff_t m_n_bone_weight_count = 0x48; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_draw_culling_data {
                constexpr std::ptrdiff_t m_v_cone_apex = 0x0; // Vector
                constexpr std::ptrdiff_t m_cone_axis = 0xC; // int8[3]
                constexpr std::ptrdiff_t m_cone_cutoff = 0xF; // int8
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_material_draw_descriptor {
                constexpr std::ptrdiff_t m_n_primitive_type = 0x0; // RenderPrimitiveType_t
                constexpr std::ptrdiff_t m_n_base_vertex = 0x4; // int32
                constexpr std::ptrdiff_t m_n_vertex_count = 0x8; // int32
                constexpr std::ptrdiff_t m_n_start_index = 0xC; // int32
                constexpr std::ptrdiff_t m_n_index_count = 0x10; // int32
                constexpr std::ptrdiff_t m_fl_uv_density = 0x14; // float32
                constexpr std::ptrdiff_t m_v_tint_color = 0x18; // Vector
                constexpr std::ptrdiff_t m_fl_alpha = 0x24; // float32
                constexpr std::ptrdiff_t m_n_first_meshlet = 0x2C; // uint32
                constexpr std::ptrdiff_t m_n_num_meshlets = 0x30; // uint16
                constexpr std::ptrdiff_t m_index_buffer = 0xB8; // CRenderBufferBinding
                constexpr std::ptrdiff_t m_material = 0xE0; // CStrongHandle< InfoForResourceTypeIMaterial2 >
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_meshlet_descriptor {
                constexpr std::ptrdiff_t m_packed_aabb = 0x0; // PackedAABB_t
                constexpr std::ptrdiff_t m_culling_data = 0x8; // CDrawCullingData
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_scene_object_data {
                constexpr std::ptrdiff_t m_v_min_bounds = 0x0; // Vector
                constexpr std::ptrdiff_t m_v_max_bounds = 0xC; // Vector
                constexpr std::ptrdiff_t m_draw_calls = 0x18; // CUtlVector< CMaterialDrawDescriptor >
                constexpr std::ptrdiff_t m_draw_bounds = 0x30; // CUtlVector< AABB_t >
                constexpr std::ptrdiff_t m_meshlets = 0x48; // CUtlVector< CMeshletDescriptor >
                constexpr std::ptrdiff_t m_v_tint_color = 0x60; // Vector4D
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_attachment {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_influence_names = 0x8; // CUtlString[3]
                constexpr std::ptrdiff_t m_v_influence_rotations = 0x20; // Quaternion[3]
                constexpr std::ptrdiff_t m_v_influence_offsets = 0x50; // Vector[3]
                constexpr std::ptrdiff_t m_influence_weights = 0x74; // float32[3]
                constexpr std::ptrdiff_t m_b_influence_root_transform = 0x80; // bool[3]
                constexpr std::ptrdiff_t m_n_influences = 0x83; // uint8
                constexpr std::ptrdiff_t m_b_ignore_rotation = 0x84; // bool
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_hit_box {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_s_surface_property = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_s_bone_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_v_min_bounds = 0x18; // Vector
                constexpr std::ptrdiff_t m_v_max_bounds = 0x24; // Vector
                constexpr std::ptrdiff_t m_fl_shape_radius = 0x30; // float32
                constexpr std::ptrdiff_t m_n_bone_name_hash = 0x34; // uint32
                constexpr std::ptrdiff_t m_n_group_id = 0x38; // int32
                constexpr std::ptrdiff_t m_n_shape_type = 0x3C; // uint8
                constexpr std::ptrdiff_t m_b_translation_only = 0x3D; // bool
                constexpr std::ptrdiff_t m_crc = 0x40; // uint32
                constexpr std::ptrdiff_t m_c_render_color = 0x44; // Color
                constexpr std::ptrdiff_t m_n_hit_box_index = 0x48; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_hit_box_set {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_n_name_hash = 0x8; // uint32
                constexpr std::ptrdiff_t m_hit_boxes = 0x10; // CUtlVector< CHitBox >
                constexpr std::ptrdiff_t m_source_filename = 0x28; // CUtlString
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_hit_box_set_list {
                constexpr std::ptrdiff_t m_hit_box_sets = 0x0; // CUtlVector< CHitBoxSet >
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace dynamic_mesh_deform_params_t {
                constexpr std::ptrdiff_t m_fl_tension_compress_scale = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_tension_stretch_scale = 0x4; // float32
                constexpr std::ptrdiff_t m_b_recompute_smooth_normals_after_animation = 0x8; // bool
                constexpr std::ptrdiff_t m_b_compute_dynamic_mesh_tension_after_animation = 0x9; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace render_hair_strand_info_t {
                constexpr std::ptrdiff_t m_n_guide_idx = 0x0; // uint32[3]
                constexpr std::ptrdiff_t m_n_base_tri_idx = 0xC; // uint32
                constexpr std::ptrdiff_t m_v_guide_barycentric = 0x10; // Vector2D
                constexpr std::ptrdiff_t m_v_base_barycentric = 0x18; // Vector2D
                constexpr std::ptrdiff_t m_v_root_offset_fl_length_scale = 0x20; // uint16[4]
                constexpr std::ptrdiff_t m_n_packed_base_mesh_uv = 0x28; // uint32
                constexpr std::ptrdiff_t m_n_pad = 0x2C; // uint32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_render_groom {
                constexpr std::ptrdiff_t m_n_segments_per_hair_strand = 0x0; // int32
                constexpr std::ptrdiff_t m_n_guide_hair_count = 0x4; // int32
                constexpr std::ptrdiff_t m_n_hair_count = 0x8; // int32
                constexpr std::ptrdiff_t m_n_groom_group_id = 0xC; // int32
                constexpr std::ptrdiff_t m_n_attach_bone_idx = 0x10; // int32
                constexpr std::ptrdiff_t m_hair_info_buffer_data = 0x18; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_hairs = 0x30; // CUtlVector< RenderHairStrandInfo_t >
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_render_mesh {
                constexpr std::ptrdiff_t m_scene_objects = 0x10; // CUtlVectorFixedGrowable< CSceneObjectData >
                constexpr std::ptrdiff_t m_constraints = 0xA0; // CUtlVector< CBaseConstraint* >
                constexpr std::ptrdiff_t m_skeleton = 0xB8; // CRenderSkeleton
                constexpr std::ptrdiff_t m_mesh_deform_params = 0x1E0; // DynamicMeshDeformParams_t
                constexpr std::ptrdiff_t m_p_groom_data = 0x1F0; // CRenderGroom*
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_constraint_target {
                constexpr std::ptrdiff_t m_q_offset = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_v_offset = 0x30; // Vector
                constexpr std::ptrdiff_t m_n_bone_hash = 0x3C; // uint32
                constexpr std::ptrdiff_t m_s_name = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_fl_weight = 0x48; // float32
                constexpr std::ptrdiff_t m_b_is_attachment = 0x59; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_constraint_slave {
                constexpr std::ptrdiff_t m_q_base_orientation = 0x0; // Quaternion
                constexpr std::ptrdiff_t m_v_base_position = 0x10; // Vector
                constexpr std::ptrdiff_t m_n_bone_hash = 0x1C; // uint32
                constexpr std::ptrdiff_t m_fl_weight = 0x20; // float32
                constexpr std::ptrdiff_t m_s_name = 0x28; // CUtlString
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_bone_constraint_base {
            }
            // Parent: c_bone_constraint_base
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_base_constraint {
                constexpr std::ptrdiff_t m_name = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_v_up_vector = 0x30; // Vector
                constexpr std::ptrdiff_t m_slaves = 0x40; // CUtlVector< CConstraintSlave >
                constexpr std::ptrdiff_t m_targets = 0x58; // CUtlVector< CConstraintTarget >
            }
            // Parent: c_base_constraint
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_point_constraint {
            }
            // Parent: c_base_constraint
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_orient_constraint {
            }
            // Parent: c_base_constraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_aim_constraint {
                constexpr std::ptrdiff_t m_q_aim_offset = 0x70; // Quaternion
                constexpr std::ptrdiff_t m_n_up_type = 0x80; // uint32
            }
            // Parent: c_base_constraint
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_twist_constraint {
                constexpr std::ptrdiff_t m_b_inverse = 0x70; // bool
                constexpr std::ptrdiff_t m_q_parent_bind_rotation = 0x80; // Quaternion
                constexpr std::ptrdiff_t m_q_child_bind_rotation = 0x90; // Quaternion
            }
            // Parent: c_base_constraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_tilt_twist_constraint {
                constexpr std::ptrdiff_t m_n_target_axis = 0x70; // int32
                constexpr std::ptrdiff_t m_n_slave_axis = 0x74; // int32
            }
            // Parent: c_base_constraint
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_morph_constraint {
                constexpr std::ptrdiff_t m_s_target_morph = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_n_slave_channel = 0x78; // int32
                constexpr std::ptrdiff_t m_fl_min = 0x7C; // float32
                constexpr std::ptrdiff_t m_fl_max = 0x80; // float32
            }
            // Parent: c_base_constraint
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_parent_constraint {
            }
            // Parent: c_bone_constraint_base
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_bone_constraint_pose_space_morph {
                constexpr std::ptrdiff_t m_s_bone_name = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_s_attachment_name = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_output_morph = 0x38; // CUtlVector< CUtlString >
                constexpr std::ptrdiff_t m_input_list = 0x50; // CUtlVector< CBoneConstraintPoseSpaceMorph::Input_t >
                constexpr std::ptrdiff_t m_b_clamp = 0x68; // bool
            }
            // Parent: None
            // Fields count: 2
            namespace c_bone_constraint_pose_space_morph_input_t {
                constexpr std::ptrdiff_t m_input_value = 0x0; // Vector
                constexpr std::ptrdiff_t m_output_weight_list = 0x10; // CUtlVector< float32 >
            }
            // Parent: c_base_constraint
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_bone_constraint_pose_space_bone {
                constexpr std::ptrdiff_t m_input_list = 0x70; // CUtlVector< CBoneConstraintPoseSpaceBone::Input_t >
            }
            // Parent: None
            // Fields count: 2
            namespace c_bone_constraint_pose_space_bone_input_t {
                constexpr std::ptrdiff_t m_input_value = 0x0; // Vector
                constexpr std::ptrdiff_t m_output_transform_list = 0x10; // CUtlVector< CTransform >
            }
            // Parent: c_bone_constraint_base
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_bone_constraint_dot_to_morph {
                constexpr std::ptrdiff_t m_s_bone_name = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_s_target_bone_name = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_s_morph_channel_name = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_fl_remap = 0x40; // float32[4]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_flex_op {
                constexpr std::ptrdiff_t m_op_code = 0x0; // FlexOpCode_t
                constexpr std::ptrdiff_t m_data = 0x4; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_flex_rule {
                constexpr std::ptrdiff_t m_n_flex = 0x0; // int32
                constexpr std::ptrdiff_t m_flex_ops = 0x8; // CUtlVector< CFlexOp >
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_flex_desc {
                constexpr std::ptrdiff_t m_sz_facs = 0x0; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_flex_controller {
                constexpr std::ptrdiff_t m_sz_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_sz_type = 0x8; // CUtlString
                constexpr std::ptrdiff_t min = 0x10; // float32
                constexpr std::ptrdiff_t max = 0x14; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_morph_bundle_data {
                constexpr std::ptrdiff_t m_fl_u_left_src = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_v_top_src = 0x4; // float32
                constexpr std::ptrdiff_t m_offsets = 0x8; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_ranges = 0x20; // CUtlVector< float32 >
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_morph_rect_data {
                constexpr std::ptrdiff_t m_n_x_left_dst = 0x0; // int16
                constexpr std::ptrdiff_t m_n_y_top_dst = 0x2; // int16
                constexpr std::ptrdiff_t m_fl_u_width_src = 0x4; // float32
                constexpr std::ptrdiff_t m_fl_v_height_src = 0x8; // float32
                constexpr std::ptrdiff_t m_bundle_datas = 0x10; // CUtlVector< CMorphBundleData >
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_morph_data {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_morph_rect_datas = 0x8; // CUtlVector< CMorphRectData >
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_morph_set_data {
                constexpr std::ptrdiff_t m_n_width = 0xC; // int32
                constexpr std::ptrdiff_t m_n_height = 0x10; // int32
                constexpr std::ptrdiff_t m_bundle_types = 0x18; // CUtlVector< MorphBundleType_t >
                constexpr std::ptrdiff_t m_morph_datas = 0x30; // CUtlVector< CMorphData >
                constexpr std::ptrdiff_t m_p_texture_atlas = 0x48; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_flex_desc = 0x50; // CUtlVector< CFlexDesc >
                constexpr std::ptrdiff_t m_flex_controllers = 0x68; // CUtlVector< CFlexController >
                constexpr std::ptrdiff_t m_flex_rules = 0x80; // CUtlVector< CFlexRule >
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_foot {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_v_ball_offset = 0x8; // Vector
                constexpr std::ptrdiff_t m_v_heel_offset = 0x14; // Vector
                constexpr std::ptrdiff_t m_ankle_bone_index = 0x20; // int32
                constexpr std::ptrdiff_t m_toe_bone_index = 0x24; // int32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_skeleton {
                constexpr std::ptrdiff_t m_local_space_transforms = 0x10; // CUtlVector< CTransform >
                constexpr std::ptrdiff_t m_model_space_transforms = 0x28; // CUtlVector< CTransform >
                constexpr std::ptrdiff_t m_bone_names = 0x40; // CUtlVector< CUtlString >
                constexpr std::ptrdiff_t m_children = 0x58; // CUtlVector< CUtlVector< int32 > >
                constexpr std::ptrdiff_t m_parents = 0x70; // CUtlVector< int32 >
                constexpr std::ptrdiff_t m_feet = 0x88; // CUtlVector< CAnimFoot >
                constexpr std::ptrdiff_t m_morph_names = 0xA0; // CUtlVector< CUtlString >
                constexpr std::ptrdiff_t m_lod_bone_counts = 0xB8; // CUtlVector< int32 >
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_foot_definition {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_ankle_bone_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_toe_bone_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_v_ball_offset = 0x18; // Vector
                constexpr std::ptrdiff_t m_v_heel_offset = 0x24; // Vector
                constexpr std::ptrdiff_t m_fl_foot_length = 0x30; // float32
                constexpr std::ptrdiff_t m_fl_bind_pose_direction_ms = 0x34; // float32
                constexpr std::ptrdiff_t m_fl_trace_height = 0x38; // float32
                constexpr std::ptrdiff_t m_fl_trace_radius = 0x3C; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_cycle_base {
                constexpr std::ptrdiff_t m_fl_cycle = 0x0; // float32
            }
            // Parent: c_cycle_base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_anim_cycle {
            }
            // Parent: c_cycle_base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_foot_cycle {
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_foot_cycle_definition {
                constexpr std::ptrdiff_t m_v_stance_position_ms = 0x0; // Vector
                constexpr std::ptrdiff_t m_v_midpoint_position_ms = 0xC; // Vector
                constexpr std::ptrdiff_t m_fl_stance_direction_ms = 0x18; // float32
                constexpr std::ptrdiff_t m_v_to_stride_start_pos = 0x1C; // Vector
                constexpr std::ptrdiff_t m_stance_cycle = 0x28; // CAnimCycle
                constexpr std::ptrdiff_t m_foot_lift_cycle = 0x2C; // CFootCycle
                constexpr std::ptrdiff_t m_foot_off_cycle = 0x30; // CFootCycle
                constexpr std::ptrdiff_t m_foot_strike_cycle = 0x34; // CFootCycle
                constexpr std::ptrdiff_t m_foot_land_cycle = 0x38; // CFootCycle
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_foot_trajectory {
                constexpr std::ptrdiff_t m_v_offset = 0x0; // Vector
                constexpr std::ptrdiff_t m_fl_rotation_offset = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_progression = 0x10; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_foot_trajectories {
                constexpr std::ptrdiff_t m_trajectories = 0x0; // CUtlVector< CFootTrajectory >
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_foot_stride {
                constexpr std::ptrdiff_t m_definition = 0x0; // CFootCycleDefinition
                constexpr std::ptrdiff_t m_trajectories = 0x40; // CFootTrajectories
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_foot_motion {
                constexpr std::ptrdiff_t m_strides = 0x0; // CUtlVector< CFootStride >
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_b_additive = 0x20; // bool
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace skeleton_anim_capture_t {
                constexpr std::ptrdiff_t m_n_ent_index = 0x0; // CEntityIndex
                constexpr std::ptrdiff_t m_n_ent_parent = 0x4; // CEntityIndex
                constexpr std::ptrdiff_t m_imported_collision = 0x8; // CUtlVector< CEntityIndex >
                constexpr std::ptrdiff_t m_model_name = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_capture_name = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_model_bind_pose = 0x30; // CUtlVector< SkeletonAnimCapture_t::Bone_t >
                constexpr std::ptrdiff_t m_fe_model_init_pose = 0x48; // CUtlVector< SkeletonAnimCapture_t::Bone_t >
                constexpr std::ptrdiff_t m_n_flex_controllers = 0x60; // int32
                constexpr std::ptrdiff_t m_b_predicted = 0x64; // bool
                constexpr std::ptrdiff_t m_frames = 0xA8; // CUtlVector< SkeletonAnimCapture_t::Frame_t >
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace skeleton_anim_capture_t_bone_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_bind_pose = 0x10; // CTransform
                constexpr std::ptrdiff_t m_n_parent = 0x30; // int32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace skeleton_anim_capture_t_frame_stamp_t {
                constexpr std::ptrdiff_t m_fl_time = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_entity_sim_time = 0x4; // float32
                constexpr std::ptrdiff_t m_b_teleport_tick = 0x8; // bool
                constexpr std::ptrdiff_t m_b_predicted = 0x9; // bool
                constexpr std::ptrdiff_t m_fl_cur_time = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_real_time = 0x10; // float32
                constexpr std::ptrdiff_t m_n_frame_count = 0x14; // int32
                constexpr std::ptrdiff_t m_n_tick_count = 0x18; // int32
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace skeleton_anim_capture_t_frame_t {
                constexpr std::ptrdiff_t m_fl_time = 0x0; // float32
                constexpr std::ptrdiff_t m_stamp = 0x4; // SkeletonAnimCapture_t::FrameStamp_t
                constexpr std::ptrdiff_t m_transform = 0x20; // CTransform
                constexpr std::ptrdiff_t m_b_teleport = 0x40; // bool
                constexpr std::ptrdiff_t m_composite_bones = 0x48; // CUtlVector< CTransform >
                constexpr std::ptrdiff_t m_sim_state_bones = 0x60; // CUtlVector< CTransform >
                constexpr std::ptrdiff_t m_fe_model_anims = 0x78; // CUtlVector< CTransform >
                constexpr std::ptrdiff_t m_fe_model_pos = 0x90; // CUtlVector< VectorAligned >
                constexpr std::ptrdiff_t m_flex_controller_weights = 0xA8; // CUtlVector< float32 >
            }
        }
        // Module: libclient.so
        // Classes count: 256
        // Enums count: 0
        namespace libclient {
            // Parent: None
            // Fields count: 0
            namespace c_entity_component {
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // NetworkVarNames: m_nameStringableIndex (int32)
            namespace c_entity_identity {
                constexpr std::ptrdiff_t m_name_stringable_index = 0x14; // int32
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_designer_name = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flags = 0x30; // uint32
                constexpr std::ptrdiff_t m_world_group_id = 0x38; // WorldGroupId_t
                constexpr std::ptrdiff_t m_f_data_object_types = 0x3C; // uint32
                constexpr std::ptrdiff_t m_path_index = 0x40; // ChangeAccessorFieldPathIndex_t
                constexpr std::ptrdiff_t m_p_prev = 0x58; // CEntityIdentity*
                constexpr std::ptrdiff_t m_p_next = 0x60; // CEntityIdentity*
                constexpr std::ptrdiff_t m_p_prev_by_class = 0x68; // CEntityIdentity*
                constexpr std::ptrdiff_t m_p_next_by_class = 0x70; // CEntityIdentity*
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity *)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            namespace c_entity_instance {
                constexpr std::ptrdiff_t m_isz_private_v_scripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_p_entity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_c_script_component = 0x28; // CScriptComponent*
                constexpr std::ptrdiff_t m_b_visiblein_pvs = 0x30; // bool
            }
            // Parent: c_entity_component
            // Fields count: 1
            namespace c_script_component {
                constexpr std::ptrdiff_t m_script_class_name = 0x30; // CUtlSymbolLarge
            }
            // Parent: c_entity_component
            // Fields count: 2
            namespace c_body_component {
                constexpr std::ptrdiff_t m_p_scene_node = 0x8; // CGameSceneNode*
                constexpr std::ptrdiff_t m_p_chain_entity = 0x28; // CNetworkVarChainer
            }
            // Parent: c_body_component
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            namespace c_body_component_point {
                constexpr std::ptrdiff_t m_scene_node = 0x60; // CGameSceneNode
                constexpr std::ptrdiff_t m_p_chain_entity = 0x1C0; // CNetworkVarChainer
            }
            // Parent: c_body_component
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
            namespace c_body_component_skeleton_instance {
                constexpr std::ptrdiff_t m_skeleton_instance = 0x60; // CSkeletonInstance
                constexpr std::ptrdiff_t m_p_chain_entity = 0x450; // CNetworkVarChainer
            }
            // Parent: c_entity_component
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bvDisabledHitGroups (uint32)
            namespace c_hitbox_component {
                constexpr std::ptrdiff_t m_bv_disabled_hit_groups = 0x24; // uint32[1]
            }
            // Parent: c_entity_component
            // Fields count: 66
            //
            // Metadata:
            // NetworkVarNames: m_Color (Color)
            // NetworkVarNames: m_SecondaryColor (Color)
            // NetworkVarNames: m_flBrightness (float)
            // NetworkVarNames: m_flBrightnessScale (float)
            // NetworkVarNames: m_flBrightnessMult (float)
            // NetworkVarNames: m_flRange (float)
            // NetworkVarNames: m_flFalloff (float)
            // NetworkVarNames: m_flAttenuation0 (float)
            // NetworkVarNames: m_flAttenuation1 (float)
            // NetworkVarNames: m_flAttenuation2 (float)
            // NetworkVarNames: m_flTheta (float)
            // NetworkVarNames: m_flPhi (float)
            // NetworkVarNames: m_hLightCookie (HRenderTextureStrong)
            // NetworkVarNames: m_nCascades (int)
            // NetworkVarNames: m_nCastShadows (int)
            // NetworkVarNames: m_nShadowWidth (int)
            // NetworkVarNames: m_nShadowHeight (int)
            // NetworkVarNames: m_bRenderDiffuse (bool)
            // NetworkVarNames: m_nRenderSpecular (int)
            // NetworkVarNames: m_bRenderTransmissive (bool)
            // NetworkVarNames: m_flOrthoLightWidth (float)
            // NetworkVarNames: m_flOrthoLightHeight (float)
            // NetworkVarNames: m_nStyle (int)
            // NetworkVarNames: m_Pattern (CUtlString)
            // NetworkVarNames: m_nCascadeRenderStaticObjects (int)
            // NetworkVarNames: m_flShadowCascadeCrossFade (float)
            // NetworkVarNames: m_flShadowCascadeDistanceFade (float)
            // NetworkVarNames: m_flShadowCascadeDistance0 (float)
            // NetworkVarNames: m_flShadowCascadeDistance1 (float)
            // NetworkVarNames: m_flShadowCascadeDistance2 (float)
            // NetworkVarNames: m_flShadowCascadeDistance3 (float)
            // NetworkVarNames: m_nShadowCascadeResolution0 (int)
            // NetworkVarNames: m_nShadowCascadeResolution1 (int)
            // NetworkVarNames: m_nShadowCascadeResolution2 (int)
            // NetworkVarNames: m_nShadowCascadeResolution3 (int)
            // NetworkVarNames: m_bUsesBakedShadowing (bool)
            // NetworkVarNames: m_nShadowPriority (int)
            // NetworkVarNames: m_nBakedShadowIndex (int)
            // NetworkVarNames: m_bRenderToCubemaps (bool)
            // NetworkVarNames: m_nDirectLight (int)
            // NetworkVarNames: m_nIndirectLight (int)
            // NetworkVarNames: m_flFadeMinDist (float)
            // NetworkVarNames: m_flFadeMaxDist (float)
            // NetworkVarNames: m_flShadowFadeMinDist (float)
            // NetworkVarNames: m_flShadowFadeMaxDist (float)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bFlicker (bool)
            // NetworkVarNames: m_bPrecomputedFieldsValid (bool)
            // NetworkVarNames: m_vPrecomputedBoundsMins (Vector)
            // NetworkVarNames: m_vPrecomputedBoundsMaxs (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent (Vector)
            // NetworkVarNames: m_flPrecomputedMaxRange (float)
            // NetworkVarNames: m_nFogLightingMode (int)
            // NetworkVarNames: m_flFogContributionStength (float)
            // NetworkVarNames: m_flNearClipPlane (float)
            // NetworkVarNames: m_SkyColor (Color)
            // NetworkVarNames: m_flSkyIntensity (float)
            // NetworkVarNames: m_SkyAmbientBounce (Color)
            // NetworkVarNames: m_bUseSecondaryColor (bool)
            // NetworkVarNames: m_bMixedShadows (bool)
            // NetworkVarNames: m_flLightStyleStartTime (GameTime_t)
            // NetworkVarNames: m_flCapsuleLength (float)
            // NetworkVarNames: m_flMinRoughness (float)
            namespace c_light_component {
                constexpr std::ptrdiff_t m_p_chain_entity = 0x58; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_color = 0x95; // Color
                constexpr std::ptrdiff_t m_secondary_color = 0x99; // Color
                constexpr std::ptrdiff_t m_fl_brightness = 0xA0; // float32
                constexpr std::ptrdiff_t m_fl_brightness_scale = 0xA4; // float32
                constexpr std::ptrdiff_t m_fl_brightness_mult = 0xA8; // float32
                constexpr std::ptrdiff_t m_fl_range = 0xAC; // float32
                constexpr std::ptrdiff_t m_fl_falloff = 0xB0; // float32
                constexpr std::ptrdiff_t m_fl_attenuation0 = 0xB4; // float32
                constexpr std::ptrdiff_t m_fl_attenuation1 = 0xB8; // float32
                constexpr std::ptrdiff_t m_fl_attenuation2 = 0xBC; // float32
                constexpr std::ptrdiff_t m_fl_theta = 0xC0; // float32
                constexpr std::ptrdiff_t m_fl_phi = 0xC4; // float32
                constexpr std::ptrdiff_t m_h_light_cookie = 0xC8; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_n_cascades = 0xD0; // int32
                constexpr std::ptrdiff_t m_n_cast_shadows = 0xD4; // int32
                constexpr std::ptrdiff_t m_n_shadow_width = 0xD8; // int32
                constexpr std::ptrdiff_t m_n_shadow_height = 0xDC; // int32
                constexpr std::ptrdiff_t m_b_render_diffuse = 0xE0; // bool
                constexpr std::ptrdiff_t m_n_render_specular = 0xE4; // int32
                constexpr std::ptrdiff_t m_b_render_transmissive = 0xE8; // bool
                constexpr std::ptrdiff_t m_fl_ortho_light_width = 0xEC; // float32
                constexpr std::ptrdiff_t m_fl_ortho_light_height = 0xF0; // float32
                constexpr std::ptrdiff_t m_n_style = 0xF4; // int32
                constexpr std::ptrdiff_t m_pattern = 0xF8; // CUtlString
                constexpr std::ptrdiff_t m_n_cascade_render_static_objects = 0x100; // int32
                constexpr std::ptrdiff_t m_fl_shadow_cascade_cross_fade = 0x104; // float32
                constexpr std::ptrdiff_t m_fl_shadow_cascade_distance_fade = 0x108; // float32
                constexpr std::ptrdiff_t m_fl_shadow_cascade_distance0 = 0x10C; // float32
                constexpr std::ptrdiff_t m_fl_shadow_cascade_distance1 = 0x110; // float32
                constexpr std::ptrdiff_t m_fl_shadow_cascade_distance2 = 0x114; // float32
                constexpr std::ptrdiff_t m_fl_shadow_cascade_distance3 = 0x118; // float32
                constexpr std::ptrdiff_t m_n_shadow_cascade_resolution0 = 0x11C; // int32
                constexpr std::ptrdiff_t m_n_shadow_cascade_resolution1 = 0x120; // int32
                constexpr std::ptrdiff_t m_n_shadow_cascade_resolution2 = 0x124; // int32
                constexpr std::ptrdiff_t m_n_shadow_cascade_resolution3 = 0x128; // int32
                constexpr std::ptrdiff_t m_b_uses_baked_shadowing = 0x12C; // bool
                constexpr std::ptrdiff_t m_n_shadow_priority = 0x130; // int32
                constexpr std::ptrdiff_t m_n_baked_shadow_index = 0x134; // int32
                constexpr std::ptrdiff_t m_b_render_to_cubemaps = 0x138; // bool
                constexpr std::ptrdiff_t m_n_direct_light = 0x13C; // int32
                constexpr std::ptrdiff_t m_n_indirect_light = 0x140; // int32
                constexpr std::ptrdiff_t m_fl_fade_min_dist = 0x144; // float32
                constexpr std::ptrdiff_t m_fl_fade_max_dist = 0x148; // float32
                constexpr std::ptrdiff_t m_fl_shadow_fade_min_dist = 0x14C; // float32
                constexpr std::ptrdiff_t m_fl_shadow_fade_max_dist = 0x150; // float32
                constexpr std::ptrdiff_t m_b_enabled = 0x154; // bool
                constexpr std::ptrdiff_t m_b_flicker = 0x155; // bool
                constexpr std::ptrdiff_t m_b_precomputed_fields_valid = 0x156; // bool
                constexpr std::ptrdiff_t m_v_precomputed_bounds_mins = 0x158; // Vector
                constexpr std::ptrdiff_t m_v_precomputed_bounds_maxs = 0x164; // Vector
                constexpr std::ptrdiff_t m_v_precomputed_obb_origin = 0x170; // Vector
                constexpr std::ptrdiff_t m_v_precomputed_obb_angles = 0x17C; // QAngle
                constexpr std::ptrdiff_t m_v_precomputed_obb_extent = 0x188; // Vector
                constexpr std::ptrdiff_t m_fl_precomputed_max_range = 0x194; // float32
                constexpr std::ptrdiff_t m_n_fog_lighting_mode = 0x198; // int32
                constexpr std::ptrdiff_t m_fl_fog_contribution_stength = 0x19C; // float32
                constexpr std::ptrdiff_t m_fl_near_clip_plane = 0x1A0; // float32
                constexpr std::ptrdiff_t m_sky_color = 0x1A4; // Color
                constexpr std::ptrdiff_t m_fl_sky_intensity = 0x1A8; // float32
                constexpr std::ptrdiff_t m_sky_ambient_bounce = 0x1AC; // Color
                constexpr std::ptrdiff_t m_b_use_secondary_color = 0x1B0; // bool
                constexpr std::ptrdiff_t m_b_mixed_shadows = 0x1B1; // bool
                constexpr std::ptrdiff_t m_fl_light_style_start_time = 0x1B4; // GameTime_t
                constexpr std::ptrdiff_t m_fl_capsule_length = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_min_roughness = 0x1BC; // float32
            }
            // Parent: c_entity_component
            // Fields count: 5
            namespace c_render_component {
                constexpr std::ptrdiff_t m_p_chain_entity = 0x10; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_b_is_rendering_with_view_models = 0x50; // bool
                constexpr std::ptrdiff_t m_n_splitscreen_flags = 0x54; // uint32
                constexpr std::ptrdiff_t m_b_enable_rendering = 0x60; // bool
                constexpr std::ptrdiff_t m_b_interpolation_ready_to_draw = 0xC0; // bool
            }
            // Parent: None
            // Fields count: 1
            namespace c_buoyancy_helper {
                constexpr std::ptrdiff_t m_fl_fluid_density = 0x18; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace c_base_player_controller_api {
            }
            // Parent: None
            // Fields count: 2
            namespace c_command_context {
                constexpr std::ptrdiff_t needsprocessing = 0x0; // bool
                constexpr std::ptrdiff_t command_number = 0x90; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: nType (FixAngleSet_t)
            // NetworkVarNames: qAngle (QAngle)
            // NetworkVarNames: nIndex (uint32)
            namespace view_angle_server_change_t {
                constexpr std::ptrdiff_t n_type = 0x30; // FixAngleSet_t
                constexpr std::ptrdiff_t q_angle = 0x34; // QAngle
                constexpr std::ptrdiff_t n_index = 0x40; // uint32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace c_dynamic_prop_api {
            }
            // Parent: c_player_pawn_component
            // Fields count: 0
            namespace c_player_autoaim_services {
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: localSound (Vector)
            // NetworkVarNames: soundscapeIndex (int32)
            // NetworkVarNames: localBits (uint8)
            // NetworkVarNames: soundscapeEntityListIndex (int)
            // NetworkVarNames: soundEventHash (uint32)
            namespace audioparams_t {
                constexpr std::ptrdiff_t local_sound = 0x8; // Vector[8]
                constexpr std::ptrdiff_t soundscape_index = 0x68; // int32
                constexpr std::ptrdiff_t local_bits = 0x6C; // uint8
                constexpr std::ptrdiff_t soundscape_entity_list_index = 0x70; // int32
                constexpr std::ptrdiff_t sound_event_hash = 0x74; // uint32
            }
            // Parent: c_player_pawn_component
            // Fields count: 20
            //
            // Metadata:
            // NetworkVarNames: m_vecCsViewPunchAngle (QAngle)
            // NetworkVarNames: m_nCsViewPunchAngleTick (GameTick_t)
            // NetworkVarNames: m_flCsViewPunchAngleTickRatio (float32)
            // NetworkVarNames: m_PlayerFog (fogplayerparams_t)
            // NetworkVarNames: m_hColorCorrectionCtrl (CHandle< CColorCorrection>)
            // NetworkVarNames: m_hViewEntity (CHandle< CBaseEntity>)
            // NetworkVarNames: m_hTonemapController (CHandle< CTonemapController2>)
            // NetworkVarNames: m_audio (audioparams_t)
            // NetworkVarNames: m_PostProcessingVolumes (CHandle<C_PostProcessingVolume>)
            namespace c_player_camera_services {
                constexpr std::ptrdiff_t m_vec_cs_view_punch_angle = 0x40; // QAngle
                constexpr std::ptrdiff_t m_n_cs_view_punch_angle_tick = 0x4C; // GameTick_t
                constexpr std::ptrdiff_t m_fl_cs_view_punch_angle_tick_ratio = 0x50; // float32
                constexpr std::ptrdiff_t m_player_fog = 0x58; // C_fogplayerparams_t
                constexpr std::ptrdiff_t m_h_color_correction_ctrl = 0x98; // CHandle< C_ColorCorrection >
                constexpr std::ptrdiff_t m_h_view_entity = 0x9C; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_h_tonemap_controller = 0xA0; // CHandle< C_TonemapController2 >
                constexpr std::ptrdiff_t m_audio = 0xA8; // audioparams_t
                constexpr std::ptrdiff_t m_post_processing_volumes = 0x120; // C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > >
                constexpr std::ptrdiff_t m_fl_old_player_z = 0x138; // float32
                constexpr std::ptrdiff_t m_fl_old_player_view_offset_z = 0x13C; // float32
                constexpr std::ptrdiff_t m_current_fog = 0x140; // fogparams_t
                constexpr std::ptrdiff_t m_h_old_fog_controller = 0x1A8; // CHandle< C_FogController >
                constexpr std::ptrdiff_t m_b_override_fog_color = 0x1AC; // bool[5]
                constexpr std::ptrdiff_t m_override_fog_color = 0x1B1; // Color[5]
                constexpr std::ptrdiff_t m_b_override_fog_start_end = 0x1C5; // bool[5]
                constexpr std::ptrdiff_t m_f_override_fog_start = 0x1CC; // float32[5]
                constexpr std::ptrdiff_t m_f_override_fog_end = 0x1E0; // float32[5]
                constexpr std::ptrdiff_t m_h_active_post_processing_volume = 0x1F4; // CHandle< C_PostProcessingVolume >
                constexpr std::ptrdiff_t m_ang_demo_view_angles = 0x1F8; // QAngle
            }
            // Parent: c_player_pawn_component
            // Fields count: 0
            namespace c_player_flashlight_services {
            }
            // Parent: c_player_pawn_component
            // Fields count: 0
            namespace c_player_item_services {
            }
            // Parent: c_player_pawn_component
            // Fields count: 15
            //
            // Metadata:
            // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
            // NetworkVarNames: m_flMaxspeed (float32)
            // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
            namespace c_player_movement_services {
                constexpr std::ptrdiff_t m_n_impulse = 0x40; // int32
                constexpr std::ptrdiff_t m_n_buttons = 0x48; // CInButtonState
                constexpr std::ptrdiff_t m_n_queued_button_down_mask = 0x68; // uint64
                constexpr std::ptrdiff_t m_n_queued_button_change_mask = 0x70; // uint64
                constexpr std::ptrdiff_t m_n_button_double_pressed = 0x78; // uint64
                constexpr std::ptrdiff_t m_p_button_pressed_cmd_number = 0x80; // uint32[64]
                constexpr std::ptrdiff_t m_n_last_command_number_processed = 0x180; // uint32
                constexpr std::ptrdiff_t m_n_toggle_button_down_mask = 0x188; // uint64
                constexpr std::ptrdiff_t m_fl_maxspeed = 0x198; // float32
                constexpr std::ptrdiff_t m_arr_force_subtick_move_when = 0x19C; // float32[4]
                constexpr std::ptrdiff_t m_fl_forward_move = 0x1AC; // float32
                constexpr std::ptrdiff_t m_fl_left_move = 0x1B0; // float32
                constexpr std::ptrdiff_t m_fl_up_move = 0x1B4; // float32
                constexpr std::ptrdiff_t m_vec_last_movement_impulses = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_vec_old_view_angles = 0x1C4; // QAngle
            }
            // Parent: c_player_movement_services
            // Fields count: 12
            //
            // Metadata:
            // NetworkVarNames: m_flFallVelocity (float32)
            // NetworkVarNames: m_bInCrouch (bool)
            // NetworkVarNames: m_nCrouchState (uint32)
            // NetworkVarNames: m_flCrouchTransitionStartTime (GameTime_t)
            // NetworkVarNames: m_bDucked (bool)
            // NetworkVarNames: m_bDucking (bool)
            // NetworkVarNames: m_bInDuckJump (bool)
            namespace c_player_movement_services_humanoid {
                constexpr std::ptrdiff_t m_fl_step_sound_time = 0x1D8; // float32
                constexpr std::ptrdiff_t m_fl_fall_velocity = 0x1DC; // float32
                constexpr std::ptrdiff_t m_b_in_crouch = 0x1E0; // bool
                constexpr std::ptrdiff_t m_n_crouch_state = 0x1E4; // uint32
                constexpr std::ptrdiff_t m_fl_crouch_transition_start_time = 0x1E8; // GameTime_t
                constexpr std::ptrdiff_t m_b_ducked = 0x1EC; // bool
                constexpr std::ptrdiff_t m_b_ducking = 0x1ED; // bool
                constexpr std::ptrdiff_t m_b_in_duck_jump = 0x1EE; // bool
                constexpr std::ptrdiff_t m_ground_normal = 0x1F0; // Vector
                constexpr std::ptrdiff_t m_fl_surface_friction = 0x1FC; // float32
                constexpr std::ptrdiff_t m_surface_props = 0x200; // CUtlStringToken
                constexpr std::ptrdiff_t m_n_stepside = 0x210; // int32
            }
            // Parent: c_player_pawn_component
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iObserverMode (uint8)
            // NetworkVarNames: m_hObserverTarget (CHandle< CBaseEntity>)
            namespace c_player_observer_services {
                constexpr std::ptrdiff_t m_i_observer_mode = 0x40; // uint8
                constexpr std::ptrdiff_t m_h_observer_target = 0x44; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_i_observer_last_mode = 0x48; // ObserverMode_t
                constexpr std::ptrdiff_t m_b_forced_observer_mode = 0x4C; // bool
                constexpr std::ptrdiff_t m_fl_observer_chase_distance = 0x50; // float32
                constexpr std::ptrdiff_t m_fl_observer_chase_distance_calc_time = 0x54; // GameTime_t
            }
            // Parent: c_player_pawn_component
            // Fields count: 0
            namespace c_player_use_services {
            }
            // Parent: c_player_pawn_component
            // Fields count: 0
            namespace c_player_water_services {
            }
            // Parent: c_player_pawn_component
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_hMyWeapons (CHandle< C_BasePlayerWeapon >)
            // NetworkVarNames: m_hActiveWeapon (CHandle< CBasePlayerWeapon>)
            // NetworkVarNames: m_hLastWeapon (CHandle< CBasePlayerWeapon>)
            // NetworkVarNames: m_iAmmo (uint16)
            namespace c_player_weapon_services {
                constexpr std::ptrdiff_t m_h_my_weapons = 0x40; // C_NetworkUtlVectorBase< CHandle< C_BasePlayerWeapon > >
                constexpr std::ptrdiff_t m_h_active_weapon = 0x58; // CHandle< C_BasePlayerWeapon >
                constexpr std::ptrdiff_t m_h_last_weapon = 0x5C; // CHandle< C_BasePlayerWeapon >
                constexpr std::ptrdiff_t m_i_ammo = 0x60; // uint16[32]
            }
            // Parent: c_body_component_skeleton_instance
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_animationController (CBaseAnimGraphController)
            namespace c_body_component_base_anim_graph {
                constexpr std::ptrdiff_t m_animation_controller = 0x478; // CBaseAnimGraphController
                constexpr std::ptrdiff_t m_p_chain_entity = 0x1C68; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_ID (CUtlStringToken)
            // NetworkVarNames: m_Values (Vector4D)
            namespace entity_render_attribute_t {
                constexpr std::ptrdiff_t m_id = 0x30; // CUtlStringToken
                constexpr std::ptrdiff_t m_values = 0x34; // Vector4D
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle< C_BaseModelEntity >)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            namespace active_model_config_t {
                constexpr std::ptrdiff_t m_handle = 0x28; // ModelConfigHandle_t
                constexpr std::ptrdiff_t m_name = 0x30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_associated_entities = 0x38; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
                constexpr std::ptrdiff_t m_associated_entity_names = 0x50; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
            }
            // Parent: c_body_component_skeleton_instance
            // Fields count: 1
            namespace c_body_component_base_model_entity {
                constexpr std::ptrdiff_t m_p_chain_entity = 0x478; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CEntityHandle)
            // NetworkVarNames: m_name (CUtlStringToken)
            namespace c_game_scene_node_handle {
                constexpr std::ptrdiff_t m_h_owner = 0x8; // CEntityHandle
                constexpr std::ptrdiff_t m_name = 0xC; // CUtlStringToken
            }
            // Parent: None
            // Fields count: 32
            //
            // Metadata:
            // NetworkVarNames: m_hParent (CGameSceneNodeHandle)
            // NetworkVarNames: m_vecOrigin (CNetworkOriginCellCoordQuantizedVector)
            // NetworkVarNames: m_angRotation (QAngle)
            // NetworkVarNames: m_flScale (float)
            // NetworkVarNames: m_name (CUtlStringToken)
            // NetworkVarNames: m_hierarchyAttachName (CUtlStringToken)
            namespace c_game_scene_node {
                constexpr std::ptrdiff_t m_node_to_world = 0x10; // CTransform
                constexpr std::ptrdiff_t m_p_owner = 0x30; // CEntityInstance*
                constexpr std::ptrdiff_t m_p_parent = 0x38; // CGameSceneNode*
                constexpr std::ptrdiff_t m_p_child = 0x40; // CGameSceneNode*
                constexpr std::ptrdiff_t m_p_next_sibling = 0x48; // CGameSceneNode*
                constexpr std::ptrdiff_t m_h_parent = 0x70; // CGameSceneNodeHandle
                constexpr std::ptrdiff_t m_vec_origin = 0x80; // CNetworkOriginCellCoordQuantizedVector
                constexpr std::ptrdiff_t m_ang_rotation = 0xB8; // QAngle
                constexpr std::ptrdiff_t m_fl_scale = 0xC4; // float32
                constexpr std::ptrdiff_t m_vec_abs_origin = 0xC8; // Vector
                constexpr std::ptrdiff_t m_ang_abs_rotation = 0xD4; // QAngle
                constexpr std::ptrdiff_t m_fl_abs_scale = 0xE0; // float32
                constexpr std::ptrdiff_t m_n_parent_attachment_or_bone = 0xE4; // int16
                constexpr std::ptrdiff_t m_b_debug_abs_origin_changes = 0xE6; // bool
                constexpr std::ptrdiff_t m_b_dormant = 0xE7; // bool
                constexpr std::ptrdiff_t m_b_force_parent_to_be_networked = 0xE8; // bool
                constexpr std::ptrdiff_t m_b_dirty_hierarchy = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_dirty_bone_merge_info = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_networked_position_changed = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_networked_angles_changed = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_networked_scale_changed = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_will_be_calling_post_data_update = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_bone_merge_flex = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_n_latch_abs_origin = 0x0; // bitfield:2
                constexpr std::ptrdiff_t m_b_dirty_bone_merge_bone_to_root = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_n_hierarchical_depth = 0xEB; // uint8
                constexpr std::ptrdiff_t m_n_hierarchy_type = 0xEC; // uint8
                constexpr std::ptrdiff_t m_n_do_not_set_anim_time_in_invalidate_physics_count = 0xED; // uint8
                constexpr std::ptrdiff_t m_name = 0xF0; // CUtlStringToken
                constexpr std::ptrdiff_t m_hierarchy_attach_name = 0x140; // CUtlStringToken
                constexpr std::ptrdiff_t m_fl_z_offset = 0x144; // float32
                constexpr std::ptrdiff_t m_v_render_origin = 0x148; // Vector
            }
            // Parent: None
            // Fields count: 6
            namespace sequence_history_t {
                constexpr std::ptrdiff_t m_h_sequence = 0x0; // HSequence
                constexpr std::ptrdiff_t m_fl_seq_start_time = 0x4; // GameTime_t
                constexpr std::ptrdiff_t m_fl_seq_fixed_cycle = 0x8; // float32
                constexpr std::ptrdiff_t m_n_seq_loop_mode = 0xC; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_fl_playback_rate = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_cycles_per_second = 0x14; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flPrevCycle (float32)
            // NetworkVarNames: m_flCycle (float32)
            namespace c_networked_sequence_operation {
                constexpr std::ptrdiff_t m_h_sequence = 0x8; // HSequence
                constexpr std::ptrdiff_t m_fl_prev_cycle = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_cycle = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_weight = 0x14; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_b_sequence_change_networked = 0x1C; // bool
                constexpr std::ptrdiff_t m_b_discontinuity = 0x1D; // bool
                constexpr std::ptrdiff_t m_fl_prev_cycle_from_discontinuity = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_prev_cycle_for_anim_event_detection = 0x24; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_hModel (HModelStrong)
            // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
            // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
            // NetworkVarNames: m_nIdealMotionType (int8)
            namespace c_model_state {
                constexpr std::ptrdiff_t m_h_model = 0xA0; // CStrongHandle< InfoForResourceTypeCModel >
                constexpr std::ptrdiff_t m_model_name = 0xA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_b_client_cloth_creation_suppressed = 0xE8; // bool
                constexpr std::ptrdiff_t m_mesh_group_mask = 0x180; // uint64
                constexpr std::ptrdiff_t m_n_ideal_motion_type = 0x212; // int8
                constexpr std::ptrdiff_t m_n_force_lod = 0x213; // int8
                constexpr std::ptrdiff_t m_n_cloth_update_flags = 0x214; // int8
            }
            // Parent: c_game_scene_node
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_modelState (CModelState)
            // NetworkVarNames: m_bIsAnimationEnabled (bool)
            // NetworkVarNames: m_bUseParentRenderBounds (bool)
            // NetworkVarNames: m_materialGroup (CUtlStringToken)
            // NetworkVarNames: m_nHitboxSet (uint8)
            namespace c_skeleton_instance {
                constexpr std::ptrdiff_t m_model_state = 0x160; // CModelState
                constexpr std::ptrdiff_t m_b_is_animation_enabled = 0x380; // bool
                constexpr std::ptrdiff_t m_b_use_parent_render_bounds = 0x381; // bool
                constexpr std::ptrdiff_t m_b_disable_solid_collisions_for_hierarchy = 0x382; // bool
                constexpr std::ptrdiff_t m_b_dirty_motion_type = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_is_generating_latched_parent_space_state = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_material_group = 0x384; // CUtlStringToken
                constexpr std::ptrdiff_t m_n_hitbox_set = 0x388; // uint8
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace interval_timer {
                constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_n_world_group_id = 0xC; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_timescale (float32)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace countdown_timer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // GameTime_t
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
                constexpr std::ptrdiff_t m_n_world_group_id = 0x14; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (float32)
            // NetworkVarNames: m_timescale (float32)
            namespace engine_countdown_timer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // float32
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
            }
            // Parent: interval_timer
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_flValues (float)
            // NetworkVarNames: m_nValueCounts (int)
            // NetworkVarNames: m_nBucketCount (int)
            // NetworkVarNames: m_flInterval (float)
            // NetworkVarNames: m_flFinalValue (float)
            // NetworkVarNames: m_nCompressionType (TimelineCompression_t)
            // NetworkVarNames: m_bStopped (bool)
            namespace c_timeline {
                constexpr std::ptrdiff_t m_fl_values = 0x10; // float32[64]
                constexpr std::ptrdiff_t m_n_value_counts = 0x110; // int32[64]
                constexpr std::ptrdiff_t m_n_bucket_count = 0x210; // int32
                constexpr std::ptrdiff_t m_fl_interval = 0x214; // float32
                constexpr std::ptrdiff_t m_fl_final_value = 0x218; // float32
                constexpr std::ptrdiff_t m_n_compression_type = 0x21C; // TimelineCompression_t
                constexpr std::ptrdiff_t m_b_stopped = 0x220; // bool
            }
            // Parent: None
            // Fields count: 24
            //
            // Metadata:
            // NetworkVarNames: m_PredNetBoolVariables (uint32)
            // NetworkVarNames: m_PredNetByteVariables (byte)
            // NetworkVarNames: m_PredNetUInt16Variables (uint16)
            // NetworkVarNames: m_PredNetIntVariables (int32)
            // NetworkVarNames: m_PredNetUInt32Variables (uint32)
            // NetworkVarNames: m_PredNetUInt64Variables (uint64)
            // NetworkVarNames: m_PredNetFloatVariables (float)
            // NetworkVarNames: m_PredNetVectorVariables (Vector)
            // NetworkVarNames: m_PredNetQuaternionVariables (Quaternion)
            // NetworkVarNames: m_PredNetGlobalSymbolVariables (CGlobalSymbol)
            // NetworkVarNames: m_OwnerOnlyPredNetBoolVariables (uint32)
            // NetworkVarNames: m_OwnerOnlyPredNetByteVariables (byte)
            // NetworkVarNames: m_OwnerOnlyPredNetUInt16Variables (uint16)
            // NetworkVarNames: m_OwnerOnlyPredNetIntVariables (int32)
            // NetworkVarNames: m_OwnerOnlyPredNetUInt32Variables (uint32)
            // NetworkVarNames: m_OwnerOnlyPredNetUInt64Variables (uint64)
            // NetworkVarNames: m_OwnerOnlyPredNetFloatVariables (float)
            // NetworkVarNames: m_OwnerOnlyPredNetVectorVariables (Vector)
            // NetworkVarNames: m_OwnerOnlyPredNetQuaternionVariables (Quaternion)
            // NetworkVarNames: m_OwnerOnlyPredNetGlobalSymbolVariables (CGlobalSymbol)
            // NetworkVarNames: m_nBoolVariablesCount (int)
            // NetworkVarNames: m_nOwnerOnlyBoolVariablesCount (int)
            // NetworkVarNames: m_nRandomSeedOffset (int)
            // NetworkVarNames: m_flLastTeleportTime (float)
            namespace c_anim_graph_networked_variables {
                constexpr std::ptrdiff_t m_pred_net_bool_variables = 0x8; // C_NetworkUtlVectorBase< uint32 >
                constexpr std::ptrdiff_t m_pred_net_byte_variables = 0x20; // C_NetworkUtlVectorBase< uint8 >
                constexpr std::ptrdiff_t m_pred_net_u_int16_variables = 0x38; // C_NetworkUtlVectorBase< uint16 >
                constexpr std::ptrdiff_t m_pred_net_int_variables = 0x50; // C_NetworkUtlVectorBase< int32 >
                constexpr std::ptrdiff_t m_pred_net_u_int32_variables = 0x68; // C_NetworkUtlVectorBase< uint32 >
                constexpr std::ptrdiff_t m_pred_net_u_int64_variables = 0x80; // C_NetworkUtlVectorBase< uint64 >
                constexpr std::ptrdiff_t m_pred_net_float_variables = 0x98; // C_NetworkUtlVectorBase< float32 >
                constexpr std::ptrdiff_t m_pred_net_vector_variables = 0xB0; // C_NetworkUtlVectorBase< Vector >
                constexpr std::ptrdiff_t m_pred_net_quaternion_variables = 0xC8; // C_NetworkUtlVectorBase< Quaternion >
                constexpr std::ptrdiff_t m_pred_net_global_symbol_variables = 0xE0; // C_NetworkUtlVectorBase< CGlobalSymbol >
                constexpr std::ptrdiff_t m_owner_only_pred_net_bool_variables = 0xF8; // C_NetworkUtlVectorBase< uint32 >
                constexpr std::ptrdiff_t m_owner_only_pred_net_byte_variables = 0x110; // C_NetworkUtlVectorBase< uint8 >
                constexpr std::ptrdiff_t m_owner_only_pred_net_u_int16_variables = 0x128; // C_NetworkUtlVectorBase< uint16 >
                constexpr std::ptrdiff_t m_owner_only_pred_net_int_variables = 0x140; // C_NetworkUtlVectorBase< int32 >
                constexpr std::ptrdiff_t m_owner_only_pred_net_u_int32_variables = 0x158; // C_NetworkUtlVectorBase< uint32 >
                constexpr std::ptrdiff_t m_owner_only_pred_net_u_int64_variables = 0x170; // C_NetworkUtlVectorBase< uint64 >
                constexpr std::ptrdiff_t m_owner_only_pred_net_float_variables = 0x188; // C_NetworkUtlVectorBase< float32 >
                constexpr std::ptrdiff_t m_owner_only_pred_net_vector_variables = 0x1A0; // C_NetworkUtlVectorBase< Vector >
                constexpr std::ptrdiff_t m_owner_only_pred_net_quaternion_variables = 0x1B8; // C_NetworkUtlVectorBase< Quaternion >
                constexpr std::ptrdiff_t m_owner_only_pred_net_global_symbol_variables = 0x1D0; // C_NetworkUtlVectorBase< CGlobalSymbol >
                constexpr std::ptrdiff_t m_n_bool_variables_count = 0x1E8; // int32
                constexpr std::ptrdiff_t m_n_owner_only_bool_variables_count = 0x1EC; // int32
                constexpr std::ptrdiff_t m_n_random_seed_offset = 0x1F0; // int32
                constexpr std::ptrdiff_t m_fl_last_teleport_time = 0x1F4; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace c_base_entity_api {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace c_take_damage_info_api {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            namespace c_client_point_entity_api {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace c_pulse_graph_instance_client_entity {
                constexpr std::ptrdiff_t m_p_parent = 0xD8; // CClientScriptEntity*
            }
            // Parent: c_entity_instance
            // Fields count: 80
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames: m_CBodyComponent (CBodyComponent::Storage_t)
            // NetworkVarNames: m_iMaxHealth (int32)
            // NetworkVarNames: m_iHealth (int32)
            // NetworkVarNames: m_lifeState (uint8)
            // NetworkVarNames: m_bTakesDamage (bool)
            // NetworkVarNames: m_nTakeDamageFlags (TakeDamageFlags_t)
            // NetworkVarNames: m_bIsPlatform (bool)
            // NetworkVarNames: m_ubInterpolationFrame (uint8)
            // NetworkVarNames: m_nSubclassID (EntitySubclassID_t)
            // NetworkVarNames: m_flAnimTime (float32)
            // NetworkVarNames: m_flSimulationTime (float32)
            // NetworkVarNames: m_flCreateTime (GameTime_t)
            // NetworkVarNames: m_bClientSideRagdoll (bool)
            // NetworkVarNames: m_iTeamNum (uint8)
            // NetworkVarNames: m_spawnflags (uint32)
            // NetworkVarNames: m_nNextThinkTick (GameTick_t)
            // NetworkVarNames: m_fFlags (uint32)
            // NetworkVarNames: m_vecBaseVelocity (Vector)
            // NetworkVarNames: m_hEffectEntity (CHandle< CBaseEntity>)
            // NetworkVarNames: m_hOwnerEntity (CHandle< CBaseEntity>)
            // NetworkVarNames: m_MoveCollide (MoveCollide_t)
            // NetworkVarNames: m_MoveType (MoveType_t)
            // NetworkVarNames: m_flWaterLevel (float32)
            // NetworkVarNames: m_fEffects (uint32)
            // NetworkVarNames: m_hGroundEntity (CHandle< CBaseEntity>)
            // NetworkVarNames: m_flFriction (float32)
            // NetworkVarNames: m_flElasticity (float32)
            // NetworkVarNames: m_flGravityScale (float32)
            // NetworkVarNames: m_flTimeScale (float32)
            // NetworkVarNames: m_bAnimatedEveryTick (bool)
            // NetworkVarNames: m_flNavIgnoreUntilTime (GameTime_t)
            namespace c_base_entity {
                constexpr std::ptrdiff_t m_c_body_component = 0x38; // CBodyComponent*
                constexpr std::ptrdiff_t m_network_transmit_component = 0x40; // CNetworkTransmitComponent
                constexpr std::ptrdiff_t m_n_last_think_tick = 0x488; // GameTick_t
                constexpr std::ptrdiff_t m_p_game_scene_node = 0x490; // CGameSceneNode*
                constexpr std::ptrdiff_t m_p_render_component = 0x498; // CRenderComponent*
                constexpr std::ptrdiff_t m_p_collision = 0x4A0; // CCollisionProperty*
                constexpr std::ptrdiff_t m_i_max_health = 0x4A8; // int32
                constexpr std::ptrdiff_t m_i_health = 0x4AC; // int32
                constexpr std::ptrdiff_t m_life_state = 0x4B0; // uint8
                constexpr std::ptrdiff_t m_b_takes_damage = 0x4B1; // bool
                constexpr std::ptrdiff_t m_n_take_damage_flags = 0x4B4; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_b_is_platform = 0x4B8; // bool
                constexpr std::ptrdiff_t m_ub_interpolation_frame = 0x4B9; // uint8
                constexpr std::ptrdiff_t m_h_scene_object_controller = 0x4BC; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_n_no_interpolation_tick = 0x4C0; // int32
                constexpr std::ptrdiff_t m_n_visibility_no_interpolation_tick = 0x4C4; // int32
                constexpr std::ptrdiff_t m_fl_proxy_random_value = 0x4C8; // float32
                constexpr std::ptrdiff_t m_i_e_flags = 0x4CC; // int32
                constexpr std::ptrdiff_t m_n_water_type = 0x4D0; // uint8
                constexpr std::ptrdiff_t m_b_interpolate_even_with_no_model = 0x4D1; // bool
                constexpr std::ptrdiff_t m_b_prediction_eligible = 0x4D2; // bool
                constexpr std::ptrdiff_t m_b_apply_layer_match_id_to_model = 0x4D3; // bool
                constexpr std::ptrdiff_t m_tok_layer_match_id = 0x4D4; // CUtlStringToken
                constexpr std::ptrdiff_t m_n_subclass_id = 0x4D8; // CUtlStringToken
                constexpr std::ptrdiff_t m_n_simulation_tick = 0x4E8; // int32
                constexpr std::ptrdiff_t m_i_current_think_context = 0x4EC; // int32
                constexpr std::ptrdiff_t m_a_think_functions = 0x4F0; // CUtlVector< thinkfunc_t >
                constexpr std::ptrdiff_t m_n_disable_context_think_start_tick = 0x508; // GameTick_t
                constexpr std::ptrdiff_t m_fl_anim_time = 0x50C; // float32
                constexpr std::ptrdiff_t m_fl_simulation_time = 0x510; // float32
                constexpr std::ptrdiff_t m_n_scene_object_override_flags = 0x514; // uint8
                constexpr std::ptrdiff_t m_b_has_successfully_interpolated = 0x515; // bool
                constexpr std::ptrdiff_t m_b_has_added_vars_to_interpolation = 0x516; // bool
                constexpr std::ptrdiff_t m_b_render_even_when_not_successfully_interpolated = 0x517; // bool
                constexpr std::ptrdiff_t m_n_interpolation_latch_dirty_flags = 0x518; // int32[2]
                constexpr std::ptrdiff_t m_list_entry = 0x520; // uint16[11]
                constexpr std::ptrdiff_t m_fl_create_time = 0x538; // GameTime_t
                constexpr std::ptrdiff_t m_fl_speed = 0x53C; // float32
                constexpr std::ptrdiff_t m_ent_client_flags = 0x540; // uint16
                constexpr std::ptrdiff_t m_b_client_side_ragdoll = 0x542; // bool
                constexpr std::ptrdiff_t m_i_team_num = 0x543; // uint8
                constexpr std::ptrdiff_t m_spawnflags = 0x544; // uint32
                constexpr std::ptrdiff_t m_n_next_think_tick = 0x548; // GameTick_t
                constexpr std::ptrdiff_t m_f_flags = 0x54C; // uint32
                constexpr std::ptrdiff_t m_vec_abs_velocity = 0x550; // Vector
                constexpr std::ptrdiff_t m_vec_velocity = 0x560; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vec_base_velocity = 0x590; // Vector
                constexpr std::ptrdiff_t m_h_effect_entity = 0x59C; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_h_owner_entity = 0x5A0; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_move_collide = 0x5A4; // MoveCollide_t
                constexpr std::ptrdiff_t m_move_type = 0x5A5; // MoveType_t
                constexpr std::ptrdiff_t m_n_actual_move_type = 0x5A6; // MoveType_t
                constexpr std::ptrdiff_t m_fl_water_level = 0x5A8; // float32
                constexpr std::ptrdiff_t m_f_effects = 0x5AC; // uint32
                constexpr std::ptrdiff_t m_h_ground_entity = 0x5B0; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_fl_friction = 0x5B4; // float32
                constexpr std::ptrdiff_t m_fl_elasticity = 0x5B8; // float32
                constexpr std::ptrdiff_t m_fl_gravity_scale = 0x5BC; // float32
                constexpr std::ptrdiff_t m_fl_time_scale = 0x5C0; // float32
                constexpr std::ptrdiff_t m_b_animated_every_tick = 0x5C4; // bool
                constexpr std::ptrdiff_t m_fl_nav_ignore_until_time = 0x5C8; // GameTime_t
                constexpr std::ptrdiff_t m_h_think = 0x5CC; // uint16
                constexpr std::ptrdiff_t m_f_b_box_vis_flags = 0x5D8; // uint8
                constexpr std::ptrdiff_t m_b_predictable = 0x5D9; // bool
                constexpr std::ptrdiff_t m_b_render_with_view_models = 0x5DA; // bool
                constexpr std::ptrdiff_t m_n_split_user_player_prediction_slot = 0x5DC; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_n_first_predictable_command = 0x5E0; // int32
                constexpr std::ptrdiff_t m_n_last_predictable_command = 0x5E4; // int32
                constexpr std::ptrdiff_t m_h_old_move_parent = 0x5E8; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_particles = 0x5F0; // CParticleProperty
                constexpr std::ptrdiff_t m_vec_predicted_script_floats = 0x618; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_vec_predicted_script_float_i_ds = 0x630; // CUtlVector< int32 >
                constexpr std::ptrdiff_t m_n_next_script_var_record_id = 0x660; // int32
                constexpr std::ptrdiff_t m_vec_ang_velocity = 0x670; // QAngle
                constexpr std::ptrdiff_t m_data_change_event_ref = 0x67C; // int32
                constexpr std::ptrdiff_t m_dependencies = 0x680; // CUtlVector< CEntityHandle >
                constexpr std::ptrdiff_t m_n_creation_tick = 0x698; // int32
                constexpr std::ptrdiff_t m_b_anim_time_changed = 0x6B9; // bool
                constexpr std::ptrdiff_t m_b_simulation_time_changed = 0x6BA; // bool
                constexpr std::ptrdiff_t m_s_unique_hammer_id = 0x6C8; // CUtlString
            }
            // Parent: c_base_entity
            // Fields count: 0
            namespace c_logical_entity {
            }
            // Parent: None
            // Fields count: 5
            namespace c_base_flex_emphasized_phoneme {
                constexpr std::ptrdiff_t m_s_class_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_fl_amount = 0x18; // float32
                constexpr std::ptrdiff_t m_b_required = 0x1C; // bool
                constexpr std::ptrdiff_t m_b_basechecked = 0x1D; // bool
                constexpr std::ptrdiff_t m_b_valid = 0x1E; // bool
            }
            // Parent: c_base_entity
            // Fields count: 18
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // NetworkVarNames: m_MinFalloff (float32)
            // NetworkVarNames: m_MaxFalloff (float32)
            // NetworkVarNames: m_flFadeInDuration (float32)
            // NetworkVarNames: m_flFadeOutDuration (float32)
            // NetworkVarNames: m_flMaxWeight (float32)
            // NetworkVarNames: m_flCurWeight (float32)
            // NetworkVarNames: m_netlookupFilename (char)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bMaster (bool)
            // NetworkVarNames: m_bClientSide (bool)
            // NetworkVarNames: m_bExclusive (bool)
            namespace c_color_correction {
                constexpr std::ptrdiff_t m_vec_origin = 0x6D0; // Vector
                constexpr std::ptrdiff_t m_min_falloff = 0x6DC; // float32
                constexpr std::ptrdiff_t m_max_falloff = 0x6E0; // float32
                constexpr std::ptrdiff_t m_fl_fade_in_duration = 0x6E4; // float32
                constexpr std::ptrdiff_t m_fl_fade_out_duration = 0x6E8; // float32
                constexpr std::ptrdiff_t m_fl_max_weight = 0x6EC; // float32
                constexpr std::ptrdiff_t m_fl_cur_weight = 0x6F0; // float32
                constexpr std::ptrdiff_t m_netlookup_filename = 0x6F4; // char[512]
                constexpr std::ptrdiff_t m_b_enabled = 0x8F4; // bool
                constexpr std::ptrdiff_t m_b_master = 0x8F5; // bool
                constexpr std::ptrdiff_t m_b_client_side = 0x8F6; // bool
                constexpr std::ptrdiff_t m_b_exclusive = 0x8F7; // bool
                constexpr std::ptrdiff_t m_b_enabled_on_client = 0x8F8; // bool[1]
                constexpr std::ptrdiff_t m_fl_cur_weight_on_client = 0x8FC; // float32[1]
                constexpr std::ptrdiff_t m_b_fading_in = 0x900; // bool[1]
                constexpr std::ptrdiff_t m_fl_fade_start_weight = 0x904; // float32[1]
                constexpr std::ptrdiff_t m_fl_fade_start_time = 0x908; // float32[1]
                constexpr std::ptrdiff_t m_fl_fade_duration = 0x90C; // float32[1]
            }
            // Parent: c_base_entity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            namespace c_env_wind_clientside {
                constexpr std::ptrdiff_t m_env_wind_shared = 0x6D0; // C_EnvWindShared
            }
            // Parent: c_base_entity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_hEntAttached (CHandle< C_BaseEntity>)
            // NetworkVarNames: m_bCheapEffect (bool)
            namespace c_entity_flame {
                constexpr std::ptrdiff_t m_h_ent_attached = 0x6D0; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_h_old_attached = 0x6F8; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_b_cheap_effect = 0x6FC; // bool
            }
            // Parent: None
            // Fields count: 30
            //
            // Metadata:
            // NetworkVarNames: m_hTargetEntity (CHandle< C_BaseEntity>)
            // NetworkVarNames: m_bState (bool)
            // NetworkVarNames: m_bAlwaysUpdate (bool)
            // NetworkVarNames: m_flLightFOV (float32)
            // NetworkVarNames: m_bEnableShadows (bool)
            // NetworkVarNames: m_bSimpleProjection (bool)
            // NetworkVarNames: m_bLightOnlyTarget (bool)
            // NetworkVarNames: m_bLightWorld (bool)
            // NetworkVarNames: m_bCameraSpace (bool)
            // NetworkVarNames: m_flBrightnessScale (float32)
            // NetworkVarNames: m_LightColor (Color)
            // NetworkVarNames: m_flIntensity (float32)
            // NetworkVarNames: m_flLinearAttenuation (float32)
            // NetworkVarNames: m_flQuadraticAttenuation (float32)
            // NetworkVarNames: m_bVolumetric (bool)
            // NetworkVarNames: m_flVolumetricIntensity (float32)
            // NetworkVarNames: m_flNoiseStrength (float32)
            // NetworkVarNames: m_flFlashlightTime (float32)
            // NetworkVarNames: m_nNumPlanes (uint32)
            // NetworkVarNames: m_flPlaneOffset (float32)
            // NetworkVarNames: m_flColorTransitionTime (float32)
            // NetworkVarNames: m_flAmbient (float32)
            // NetworkVarNames: m_SpotlightTextureName (char)
            // NetworkVarNames: m_nSpotlightTextureFrame (int32)
            // NetworkVarNames: m_nShadowQuality (uint32)
            // NetworkVarNames: m_flNearZ (float32)
            // NetworkVarNames: m_flFarZ (float32)
            // NetworkVarNames: m_flProjectionSize (float32)
            // NetworkVarNames: m_flRotation (float32)
            // NetworkVarNames: m_bFlipHorizontal (bool)
            namespace c_projected_texture_base {
                constexpr std::ptrdiff_t m_h_target_entity = 0xC; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_b_state = 0x10; // bool
                constexpr std::ptrdiff_t m_b_always_update = 0x11; // bool
                constexpr std::ptrdiff_t m_fl_light_fov = 0x14; // float32
                constexpr std::ptrdiff_t m_b_enable_shadows = 0x18; // bool
                constexpr std::ptrdiff_t m_b_simple_projection = 0x19; // bool
                constexpr std::ptrdiff_t m_b_light_only_target = 0x1A; // bool
                constexpr std::ptrdiff_t m_b_light_world = 0x1B; // bool
                constexpr std::ptrdiff_t m_b_camera_space = 0x1C; // bool
                constexpr std::ptrdiff_t m_fl_brightness_scale = 0x20; // float32
                constexpr std::ptrdiff_t m_light_color = 0x24; // Color
                constexpr std::ptrdiff_t m_fl_intensity = 0x28; // float32
                constexpr std::ptrdiff_t m_fl_linear_attenuation = 0x2C; // float32
                constexpr std::ptrdiff_t m_fl_quadratic_attenuation = 0x30; // float32
                constexpr std::ptrdiff_t m_b_volumetric = 0x34; // bool
                constexpr std::ptrdiff_t m_fl_volumetric_intensity = 0x38; // float32
                constexpr std::ptrdiff_t m_fl_noise_strength = 0x3C; // float32
                constexpr std::ptrdiff_t m_fl_flashlight_time = 0x40; // float32
                constexpr std::ptrdiff_t m_n_num_planes = 0x44; // uint32
                constexpr std::ptrdiff_t m_fl_plane_offset = 0x48; // float32
                constexpr std::ptrdiff_t m_fl_color_transition_time = 0x4C; // float32
                constexpr std::ptrdiff_t m_fl_ambient = 0x50; // float32
                constexpr std::ptrdiff_t m_spotlight_texture_name = 0x54; // char[512]
                constexpr std::ptrdiff_t m_n_spotlight_texture_frame = 0x254; // int32
                constexpr std::ptrdiff_t m_n_shadow_quality = 0x258; // uint32
                constexpr std::ptrdiff_t m_fl_near_z = 0x25C; // float32
                constexpr std::ptrdiff_t m_fl_far_z = 0x260; // float32
                constexpr std::ptrdiff_t m_fl_projection_size = 0x264; // float32
                constexpr std::ptrdiff_t m_fl_rotation = 0x268; // float32
                constexpr std::ptrdiff_t m_b_flip_horizontal = 0x26C; // bool
            }
            // Parent: c_base_entity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_flScale (float32)
            // NetworkVarNames: m_flStartScale (float32)
            // NetworkVarNames: m_flScaleTime (float)
            // NetworkVarNames: m_nFlags (uint32)
            namespace c_base_fire {
                constexpr std::ptrdiff_t m_fl_scale = 0x6D0; // float32
                constexpr std::ptrdiff_t m_fl_start_scale = 0x6D4; // float32
                constexpr std::ptrdiff_t m_fl_scale_time = 0x6D8; // float32
                constexpr std::ptrdiff_t m_n_flags = 0x6DC; // uint32
            }
            // Parent: c_base_fire
            // Fields count: 13
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            // NetworkVarNames: m_nFlameModelIndex (int32)
            // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
            namespace c_fire_smoke {
                constexpr std::ptrdiff_t m_n_flame_model_index = 0x6E0; // int32
                constexpr std::ptrdiff_t m_n_flame_from_above_model_index = 0x6E4; // int32
                constexpr std::ptrdiff_t m_fl_scale_register = 0x6E8; // float32
                constexpr std::ptrdiff_t m_fl_scale_start = 0x6EC; // float32
                constexpr std::ptrdiff_t m_fl_scale_end = 0x6F0; // float32
                constexpr std::ptrdiff_t m_fl_scale_time_start = 0x6F4; // GameTime_t
                constexpr std::ptrdiff_t m_fl_scale_time_end = 0x6F8; // GameTime_t
                constexpr std::ptrdiff_t m_fl_child_flame_spread = 0x6FC; // float32
                constexpr std::ptrdiff_t m_fl_clip_perc = 0x710; // float32
                constexpr std::ptrdiff_t m_b_clip_tested = 0x714; // bool
                constexpr std::ptrdiff_t m_b_fading_out = 0x715; // bool
                constexpr std::ptrdiff_t m_t_particle_spawn = 0x718; // TimedEvent
                constexpr std::ptrdiff_t m_p_fire_overlay = 0x720; // CFireOverlay*
            }
            // Parent: None
            // Fields count: 1
            namespace c_rope_keyframe_c_physics_delegate {
                constexpr std::ptrdiff_t m_p_keyframe = 0x8; // C_RopeKeyframe*
            }
            // Parent: None
            // Fields count: 1
            namespace c_scene_entity_queued_events_t {
                constexpr std::ptrdiff_t starttime = 0x0; // float32
            }
            // Parent: c_base_entity
            // Fields count: 0
            namespace c_tint_controller {
            }
            // Parent: None
            // Fields count: 13
            namespace c_flashlight_effect {
                constexpr std::ptrdiff_t m_b_is_on = 0x8; // bool
                constexpr std::ptrdiff_t m_b_muzzle_flash_enabled = 0x18; // bool
                constexpr std::ptrdiff_t m_fl_muzzle_flash_brightness = 0x1C; // float32
                constexpr std::ptrdiff_t m_quat_muzzle_flash_orientation = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_vec_muzzle_flash_origin = 0x30; // Vector
                constexpr std::ptrdiff_t m_fl_fov = 0x3C; // float32
                constexpr std::ptrdiff_t m_fl_far_z = 0x40; // float32
                constexpr std::ptrdiff_t m_fl_linear_atten = 0x44; // float32
                constexpr std::ptrdiff_t m_b_casts_shadows = 0x48; // bool
                constexpr std::ptrdiff_t m_fl_current_pull_back_dist = 0x4C; // float32
                constexpr std::ptrdiff_t m_flashlight_texture = 0x50; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_muzzle_flash_texture = 0x58; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_texture_name = 0x60; // char[64]
            }
            // Parent: None
            // Fields count: 5
            namespace c_interpolated_value {
                constexpr std::ptrdiff_t m_fl_start_time = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_end_time = 0x4; // float32
                constexpr std::ptrdiff_t m_fl_start_value = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_end_value = 0xC; // float32
                constexpr std::ptrdiff_t m_n_interp_type = 0x10; // int32
            }
            // Parent: None
            // Fields count: 4
            namespace c_glow_sprite {
                constexpr std::ptrdiff_t m_v_color = 0x0; // Vector
                constexpr std::ptrdiff_t m_fl_horz_size = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_vert_size = 0x10; // float32
                constexpr std::ptrdiff_t m_h_material = 0x18; // CStrongHandle< InfoForResourceTypeIMaterial2 >
            }
            // Parent: None
            // Fields count: 15
            namespace c_glow_overlay {
                constexpr std::ptrdiff_t m_v_pos = 0x8; // Vector
                constexpr std::ptrdiff_t m_b_directional = 0x14; // bool
                constexpr std::ptrdiff_t m_v_direction = 0x18; // Vector
                constexpr std::ptrdiff_t m_b_in_sky = 0x24; // bool
                constexpr std::ptrdiff_t m_sky_obstruction_scale = 0x28; // float32
                constexpr std::ptrdiff_t m_sprites = 0x30; // CGlowSprite[4]
                constexpr std::ptrdiff_t m_n_sprites = 0xB0; // int32
                constexpr std::ptrdiff_t m_fl_proxy_radius = 0xB4; // float32
                constexpr std::ptrdiff_t m_fl_hdr_color_scale = 0xB8; // float32
                constexpr std::ptrdiff_t m_fl_glow_obstruction_scale = 0xBC; // float32
                constexpr std::ptrdiff_t m_b_cache_glow_obstruction = 0xC0; // bool
                constexpr std::ptrdiff_t m_b_cache_sky_obstruction = 0xC1; // bool
                constexpr std::ptrdiff_t m_b_activated = 0xC2; // int16
                constexpr std::ptrdiff_t m_list_index = 0xC4; // uint16
                constexpr std::ptrdiff_t m_query_handle = 0xC8; // int32
            }
            // Parent: None
            // Fields count: 0
            namespace i_client_alpha_property {
            }
            // Parent: c_base_entity
            // Fields count: 2
            namespace c_skybox_reference {
                constexpr std::ptrdiff_t m_world_group_id = 0x6D0; // WorldGroupId_t
                constexpr std::ptrdiff_t m_h_sky_camera = 0x6D4; // CHandle< C_SkyCamera >
            }
            // Parent: c_base_entity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_skyboxData (sky3dparams_t)
            // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
            namespace c_sky_camera {
                constexpr std::ptrdiff_t m_skybox_data = 0x6D0; // sky3dparams_t
                constexpr std::ptrdiff_t m_skybox_slot_token = 0x760; // CUtlStringToken
                constexpr std::ptrdiff_t m_b_use_angles = 0x764; // bool
                constexpr std::ptrdiff_t m_p_next = 0x768; // C_SkyCamera*
            }
            // Parent: None
            // Fields count: 2
            namespace timed_event {
                constexpr std::ptrdiff_t m_time_between_events = 0x0; // float32
                constexpr std::ptrdiff_t m_f_next_event = 0x4; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_nInteractsAs (uint64)
            // NetworkVarNames: m_nInteractsWith (uint64)
            // NetworkVarNames: m_nInteractsExclude (uint64)
            // NetworkVarNames: m_nEntityId (uint32)
            // NetworkVarNames: m_nOwnerId (uint32)
            // NetworkVarNames: m_nHierarchyId (uint16)
            // NetworkVarNames: m_nCollisionGroup (uint8)
            // NetworkVarNames: m_nCollisionFunctionMask (uint8)
            namespace v_physics_collision_attribute_t {
                constexpr std::ptrdiff_t m_n_interacts_as = 0x8; // uint64
                constexpr std::ptrdiff_t m_n_interacts_with = 0x10; // uint64
                constexpr std::ptrdiff_t m_n_interacts_exclude = 0x18; // uint64
                constexpr std::ptrdiff_t m_n_entity_id = 0x20; // uint32
                constexpr std::ptrdiff_t m_n_owner_id = 0x24; // uint32
                constexpr std::ptrdiff_t m_n_hierarchy_id = 0x28; // uint16
                constexpr std::ptrdiff_t m_n_collision_group = 0x2A; // uint8
                constexpr std::ptrdiff_t m_n_collision_function_mask = 0x2B; // uint8
            }
            // Parent: None
            // Fields count: 17
            //
            // Metadata:
            // NetworkVarNames: m_collisionAttribute (VPhysicsCollisionAttribute_t)
            // NetworkVarNames: m_vecMins (Vector)
            // NetworkVarNames: m_vecMaxs (Vector)
            // NetworkVarNames: m_usSolidFlags (uint8)
            // NetworkVarNames: m_nSolidType (SolidType_t)
            // NetworkVarNames: m_triggerBloat (uint8)
            // NetworkVarNames: m_nSurroundType (SurroundingBoundsType_t)
            // NetworkVarNames: m_CollisionGroup (uint8)
            // NetworkVarNames: m_nEnablePhysics (uint8)
            // NetworkVarNames: m_vecSpecifiedSurroundingMins (Vector)
            // NetworkVarNames: m_vecSpecifiedSurroundingMaxs (Vector)
            // NetworkVarNames: m_vCapsuleCenter1 (Vector)
            // NetworkVarNames: m_vCapsuleCenter2 (Vector)
            // NetworkVarNames: m_flCapsuleRadius (float)
            namespace c_collision_property {
                constexpr std::ptrdiff_t m_collision_attribute = 0x10; // VPhysicsCollisionAttribute_t
                constexpr std::ptrdiff_t m_vec_mins = 0x40; // Vector
                constexpr std::ptrdiff_t m_vec_maxs = 0x4C; // Vector
                constexpr std::ptrdiff_t m_us_solid_flags = 0x5A; // uint8
                constexpr std::ptrdiff_t m_n_solid_type = 0x5B; // SolidType_t
                constexpr std::ptrdiff_t m_trigger_bloat = 0x5C; // uint8
                constexpr std::ptrdiff_t m_n_surround_type = 0x5D; // SurroundingBoundsType_t
                constexpr std::ptrdiff_t m_collision_group = 0x5E; // uint8
                constexpr std::ptrdiff_t m_n_enable_physics = 0x5F; // uint8
                constexpr std::ptrdiff_t m_fl_bounding_radius = 0x60; // float32
                constexpr std::ptrdiff_t m_vec_specified_surrounding_mins = 0x64; // Vector
                constexpr std::ptrdiff_t m_vec_specified_surrounding_maxs = 0x70; // Vector
                constexpr std::ptrdiff_t m_vec_surrounding_maxs = 0x7C; // Vector
                constexpr std::ptrdiff_t m_vec_surrounding_mins = 0x88; // Vector
                constexpr std::ptrdiff_t m_v_capsule_center1 = 0x94; // Vector
                constexpr std::ptrdiff_t m_v_capsule_center2 = 0xA0; // Vector
                constexpr std::ptrdiff_t m_fl_capsule_radius = 0xAC; // float32
            }
            // Parent: None
            // Fields count: 12
            namespace c_decal_info {
                constexpr std::ptrdiff_t m_fl_animation_scale = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_animation_life_span = 0x4; // float32
                constexpr std::ptrdiff_t m_fl_place_time = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_fade_start_time = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_fade_duration = 0x10; // float32
                constexpr std::ptrdiff_t m_n_vb_slot = 0x14; // int32
                constexpr std::ptrdiff_t m_n_bone_index = 0x18; // int32
                constexpr std::ptrdiff_t m_v_position = 0x28; // Vector
                constexpr std::ptrdiff_t m_fl_bounding_radius_sqr = 0x34; // float32
                constexpr std::ptrdiff_t m_p_next = 0x40; // CDecalInfo*
                constexpr std::ptrdiff_t m_p_prev = 0x48; // CDecalInfo*
                constexpr std::ptrdiff_t m_n_decal_material_index = 0xA8; // int32
            }
            // Parent: None
            // Fields count: 21
            //
            // Metadata:
            // NetworkVarNames: m_vOrigin (Vector)
            // NetworkVarNames: m_vStart (Vector)
            // NetworkVarNames: m_vNormal (Vector)
            // NetworkVarNames: m_vAngles (QAngle)
            // NetworkVarNames: m_hEntity (CEntityHandle)
            // NetworkVarNames: m_hOtherEntity (CEntityHandle)
            // NetworkVarNames: m_flScale (float32)
            // NetworkVarNames: m_flMagnitude (float32)
            // NetworkVarNames: m_flRadius (float32)
            // NetworkVarNames: m_nSurfaceProp (CUtlStringToken)
            // NetworkVarNames: m_nEffectIndex (HParticleSystemDefinition)
            // NetworkVarNames: m_nDamageType (uint32)
            // NetworkVarNames: m_nPenetrate (uint8)
            // NetworkVarNames: m_nMaterial (uint16)
            // NetworkVarNames: m_nHitBox (uint16)
            // NetworkVarNames: m_nColor (uint8)
            // NetworkVarNames: m_fFlags (uint8)
            // NetworkVarNames: m_nAttachmentIndex (AttachmentHandle_t)
            // NetworkVarNames: m_nAttachmentName (CUtlStringToken)
            // NetworkVarNames: m_iEffectName (uint16)
            // NetworkVarNames: m_nExplosionType (uint8)
            namespace c_effect_data {
                constexpr std::ptrdiff_t m_v_origin = 0x8; // Vector
                constexpr std::ptrdiff_t m_v_start = 0x14; // Vector
                constexpr std::ptrdiff_t m_v_normal = 0x20; // Vector
                constexpr std::ptrdiff_t m_v_angles = 0x2C; // QAngle
                constexpr std::ptrdiff_t m_h_entity = 0x38; // CEntityHandle
                constexpr std::ptrdiff_t m_h_other_entity = 0x3C; // CEntityHandle
                constexpr std::ptrdiff_t m_fl_scale = 0x40; // float32
                constexpr std::ptrdiff_t m_fl_magnitude = 0x44; // float32
                constexpr std::ptrdiff_t m_fl_radius = 0x48; // float32
                constexpr std::ptrdiff_t m_n_surface_prop = 0x4C; // CUtlStringToken
                constexpr std::ptrdiff_t m_n_effect_index = 0x50; // CWeakHandle< InfoForResourceTypeIParticleSystemDefinition >
                constexpr std::ptrdiff_t m_n_damage_type = 0x58; // uint32
                constexpr std::ptrdiff_t m_n_penetrate = 0x5C; // uint8
                constexpr std::ptrdiff_t m_n_material = 0x5E; // uint16
                constexpr std::ptrdiff_t m_n_hit_box = 0x60; // uint16
                constexpr std::ptrdiff_t m_n_color = 0x62; // uint8
                constexpr std::ptrdiff_t m_f_flags = 0x63; // uint8
                constexpr std::ptrdiff_t m_n_attachment_index = 0x64; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_n_attachment_name = 0x68; // CUtlStringToken
                constexpr std::ptrdiff_t m_i_effect_name = 0x6C; // uint16
                constexpr std::ptrdiff_t m_n_explosion_type = 0x6E; // uint8
            }
            // Parent: c_base_entity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFadeStartDist (float32)
            // NetworkVarNames: m_flFadeEndDist (float32)
            namespace c_env_detail_controller {
                constexpr std::ptrdiff_t m_fl_fade_start_dist = 0x6D0; // float32
                constexpr std::ptrdiff_t m_fl_fade_end_dist = 0x6D4; // float32
            }
            // Parent: None
            // Fields count: 29
            //
            // Metadata:
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_iWindSeed (uint32)
            // NetworkVarNames: m_iMinWind (uint16)
            // NetworkVarNames: m_iMaxWind (uint16)
            // NetworkVarNames: m_windRadius (int32)
            // NetworkVarNames: m_iMinGust (uint16)
            // NetworkVarNames: m_iMaxGust (uint16)
            // NetworkVarNames: m_flMinGustDelay (float32)
            // NetworkVarNames: m_flMaxGustDelay (float32)
            // NetworkVarNames: m_flGustDuration (float32)
            // NetworkVarNames: m_iGustDirChange (uint16)
            // NetworkVarNames: m_location (Vector)
            // NetworkVarNames: m_iInitialWindDir (uint16)
            // NetworkVarNames: m_flInitialWindSpeed (float32)
            namespace c_env_wind_shared {
                constexpr std::ptrdiff_t m_fl_start_time = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_i_wind_seed = 0xC; // uint32
                constexpr std::ptrdiff_t m_i_min_wind = 0x10; // uint16
                constexpr std::ptrdiff_t m_i_max_wind = 0x12; // uint16
                constexpr std::ptrdiff_t m_wind_radius = 0x14; // int32
                constexpr std::ptrdiff_t m_i_min_gust = 0x18; // uint16
                constexpr std::ptrdiff_t m_i_max_gust = 0x1A; // uint16
                constexpr std::ptrdiff_t m_fl_min_gust_delay = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_max_gust_delay = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_gust_duration = 0x24; // float32
                constexpr std::ptrdiff_t m_i_gust_dir_change = 0x28; // uint16
                constexpr std::ptrdiff_t m_location = 0x2C; // Vector
                constexpr std::ptrdiff_t m_isz_gust_sound = 0x38; // int32
                constexpr std::ptrdiff_t m_i_wind_dir = 0x3C; // int32
                constexpr std::ptrdiff_t m_fl_wind_speed = 0x40; // float32
                constexpr std::ptrdiff_t m_current_wind_vector = 0x44; // Vector
                constexpr std::ptrdiff_t m_current_sway_vector = 0x50; // Vector
                constexpr std::ptrdiff_t m_prev_sway_vector = 0x5C; // Vector
                constexpr std::ptrdiff_t m_i_initial_wind_dir = 0x68; // uint16
                constexpr std::ptrdiff_t m_fl_initial_wind_speed = 0x6C; // float32
                constexpr std::ptrdiff_t m_fl_variation_time = 0x70; // GameTime_t
                constexpr std::ptrdiff_t m_fl_sway_time = 0x74; // GameTime_t
                constexpr std::ptrdiff_t m_fl_sim_time = 0x78; // GameTime_t
                constexpr std::ptrdiff_t m_fl_switch_time = 0x7C; // GameTime_t
                constexpr std::ptrdiff_t m_fl_ave_wind_speed = 0x80; // float32
                constexpr std::ptrdiff_t m_b_gusting = 0x84; // bool
                constexpr std::ptrdiff_t m_fl_wind_angle_variation = 0x88; // float32
                constexpr std::ptrdiff_t m_fl_wind_speed_variation = 0x8C; // float32
                constexpr std::ptrdiff_t m_i_ent_index = 0x90; // CEntityIndex
            }
            // Parent: None
            // Fields count: 2
            namespace c_env_wind_shared_wind_ave_event_t {
                constexpr std::ptrdiff_t m_fl_start_wind_speed = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_ave_wind_speed = 0x4; // float32
            }
            // Parent: None
            // Fields count: 2
            namespace c_env_wind_shared_wind_variation_event_t {
                constexpr std::ptrdiff_t m_fl_wind_angle_variation = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_wind_speed_variation = 0x4; // float32
            }
            // Parent: c_base_entity
            // Fields count: 0
            namespace c_info_ladder_dismount {
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // NetworkVarNames: m_nModelID (int32)
            // NetworkVarNames: m_hMaterial (HMaterialStrong)
            // NetworkVarNames: m_solid (ShardSolid_t)
            // NetworkVarNames: m_ShatterPanelMode (ShatterPanelMode)
            // NetworkVarNames: m_vecPanelSize (Vector2D)
            // NetworkVarNames: m_vecStressPositionA (Vector2D)
            // NetworkVarNames: m_vecStressPositionB (Vector2D)
            // NetworkVarNames: m_vecPanelVertices (Vector2D)
            // NetworkVarNames: m_flGlassHalfThickness (float)
            // NetworkVarNames: m_bHasParent (bool)
            // NetworkVarNames: m_bParentFrozen (bool)
            // NetworkVarNames: m_SurfacePropStringToken (CUtlStringToken)
            namespace shard_model_desc_t {
                constexpr std::ptrdiff_t m_n_model_id = 0x8; // int32
                constexpr std::ptrdiff_t m_h_material = 0x10; // CStrongHandle< InfoForResourceTypeIMaterial2 >
                constexpr std::ptrdiff_t m_solid = 0x18; // ShardSolid_t
                constexpr std::ptrdiff_t m_shatter_panel_mode = 0x19; // ShatterPanelMode
                constexpr std::ptrdiff_t m_vec_panel_size = 0x1C; // Vector2D
                constexpr std::ptrdiff_t m_vec_stress_position_a = 0x24; // Vector2D
                constexpr std::ptrdiff_t m_vec_stress_position_b = 0x2C; // Vector2D
                constexpr std::ptrdiff_t m_vec_panel_vertices = 0x38; // C_NetworkUtlVectorBase< Vector2D >
                constexpr std::ptrdiff_t m_fl_glass_half_thickness = 0x50; // float32
                constexpr std::ptrdiff_t m_b_has_parent = 0x54; // bool
                constexpr std::ptrdiff_t m_b_parent_frozen = 0x55; // bool
                constexpr std::ptrdiff_t m_surface_prop_string_token = 0x58; // CUtlStringToken
            }
            // Parent: c_base_entity
            // Fields count: 0
            namespace c_game_rules_proxy {
            }
            // Parent: None
            // Fields count: 0
            namespace c_game_rules {
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // NetworkVarNames: m_iGlowType (int32)
            // NetworkVarNames: m_iGlowTeam (int32)
            // NetworkVarNames: m_nGlowRange (int32)
            // NetworkVarNames: m_nGlowRangeMin (int32)
            // NetworkVarNames: m_glowColorOverride (Color)
            // NetworkVarNames: m_bFlashing (bool)
            // NetworkVarNames: m_flGlowTime (float)
            // NetworkVarNames: m_flGlowStartTime (float)
            // NetworkVarNames: m_bEligibleForScreenHighlight (bool)
            namespace c_glow_property {
                constexpr std::ptrdiff_t m_f_glow_color = 0x8; // Vector
                constexpr std::ptrdiff_t m_i_glow_type = 0x30; // int32
                constexpr std::ptrdiff_t m_i_glow_team = 0x34; // int32
                constexpr std::ptrdiff_t m_n_glow_range = 0x38; // int32
                constexpr std::ptrdiff_t m_n_glow_range_min = 0x3C; // int32
                constexpr std::ptrdiff_t m_glow_color_override = 0x40; // Color
                constexpr std::ptrdiff_t m_b_flashing = 0x44; // bool
                constexpr std::ptrdiff_t m_fl_glow_time = 0x48; // float32
                constexpr std::ptrdiff_t m_fl_glow_start_time = 0x4C; // float32
                constexpr std::ptrdiff_t m_b_eligible_for_screen_highlight = 0x50; // bool
                constexpr std::ptrdiff_t m_b_glowing = 0x51; // bool
            }
            // Parent: c_game_rules
            // Fields count: 0
            namespace c_multiplay_rules {
            }
            // Parent: None
            // Fields count: 25
            //
            // Metadata:
            // NetworkVarNames: dirPrimary (Vector)
            // NetworkVarNames: colorPrimary (Color)
            // NetworkVarNames: colorSecondary (Color)
            // NetworkVarNames: colorPrimaryLerpTo (Color)
            // NetworkVarNames: colorSecondaryLerpTo (Color)
            // NetworkVarNames: start (float32)
            // NetworkVarNames: end (float32)
            // NetworkVarNames: farz (float32)
            // NetworkVarNames: maxdensity (float32)
            // NetworkVarNames: exponent (float32)
            // NetworkVarNames: HDRColorScale (float32)
            // NetworkVarNames: skyboxFogFactor (float32)
            // NetworkVarNames: skyboxFogFactorLerpTo (float32)
            // NetworkVarNames: startLerpTo (float32)
            // NetworkVarNames: endLerpTo (float32)
            // NetworkVarNames: maxdensityLerpTo (float32)
            // NetworkVarNames: lerptime (GameTime_t)
            // NetworkVarNames: duration (float32)
            // NetworkVarNames: blendtobackground (float32)
            // NetworkVarNames: scattering (float32)
            // NetworkVarNames: locallightscale (float32)
            // NetworkVarNames: enable (bool)
            // NetworkVarNames: blend (bool)
            // NetworkVarNames: m_bNoReflectionFog (bool)
            namespace fogparams_t {
                constexpr std::ptrdiff_t dir_primary = 0x8; // Vector
                constexpr std::ptrdiff_t color_primary = 0x14; // Color
                constexpr std::ptrdiff_t color_secondary = 0x18; // Color
                constexpr std::ptrdiff_t color_primary_lerp_to = 0x1C; // Color
                constexpr std::ptrdiff_t color_secondary_lerp_to = 0x20; // Color
                constexpr std::ptrdiff_t start = 0x24; // float32
                constexpr std::ptrdiff_t end = 0x28; // float32
                constexpr std::ptrdiff_t farz = 0x2C; // float32
                constexpr std::ptrdiff_t maxdensity = 0x30; // float32
                constexpr std::ptrdiff_t exponent = 0x34; // float32
                constexpr std::ptrdiff_t hdr_color_scale = 0x38; // float32
                constexpr std::ptrdiff_t skybox_fog_factor = 0x3C; // float32
                constexpr std::ptrdiff_t skybox_fog_factor_lerp_to = 0x40; // float32
                constexpr std::ptrdiff_t start_lerp_to = 0x44; // float32
                constexpr std::ptrdiff_t end_lerp_to = 0x48; // float32
                constexpr std::ptrdiff_t maxdensity_lerp_to = 0x4C; // float32
                constexpr std::ptrdiff_t lerptime = 0x50; // GameTime_t
                constexpr std::ptrdiff_t duration = 0x54; // float32
                constexpr std::ptrdiff_t blendtobackground = 0x58; // float32
                constexpr std::ptrdiff_t scattering = 0x5C; // float32
                constexpr std::ptrdiff_t locallightscale = 0x60; // float32
                constexpr std::ptrdiff_t enable = 0x64; // bool
                constexpr std::ptrdiff_t blend = 0x65; // bool
                constexpr std::ptrdiff_t m_b_no_reflection_fog = 0x66; // bool
                constexpr std::ptrdiff_t m_b_padding = 0x67; // bool
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // NetworkVarNames: m_hCtrl (CHandle< CFogController>)
            namespace c_fogplayerparams_t {
                constexpr std::ptrdiff_t m_h_ctrl = 0x8; // CHandle< C_FogController >
                constexpr std::ptrdiff_t m_fl_transition_time = 0xC; // float32
                constexpr std::ptrdiff_t m_old_color = 0x10; // Color
                constexpr std::ptrdiff_t m_fl_old_start = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_old_end = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_old_max_density = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_old_hdr_color_scale = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_old_far_z = 0x24; // float32
                constexpr std::ptrdiff_t m_new_color = 0x28; // Color
                constexpr std::ptrdiff_t m_fl_new_start = 0x2C; // float32
                constexpr std::ptrdiff_t m_fl_new_end = 0x30; // float32
                constexpr std::ptrdiff_t m_fl_new_max_density = 0x34; // float32
                constexpr std::ptrdiff_t m_fl_new_hdr_color_scale = 0x38; // float32
                constexpr std::ptrdiff_t m_fl_new_far_z = 0x3C; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: scale (int16)
            // NetworkVarNames: origin (Vector)
            // NetworkVarNames: bClip3DSkyBoxNearToWorldFar (bool)
            // NetworkVarNames: flClip3DSkyBoxNearToWorldFarOffset (float32)
            // NetworkVarNames: fog (fogparams_t)
            // NetworkVarNames: m_nWorldGroupID (WorldGroupId_t)
            namespace sky3dparams_t {
                constexpr std::ptrdiff_t scale = 0x8; // int16
                constexpr std::ptrdiff_t origin = 0xC; // Vector
                constexpr std::ptrdiff_t b_clip3_d_sky_box_near_to_world_far = 0x18; // bool
                constexpr std::ptrdiff_t fl_clip3_d_sky_box_near_to_world_far_offset = 0x1C; // float32
                constexpr std::ptrdiff_t fog = 0x20; // fogparams_t
                constexpr std::ptrdiff_t m_n_world_group_id = 0x88; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Transforms (CTransform)
            // NetworkVarNames: m_hOwner (EHANDLE)
            namespace physics_ragdoll_pose_t {
                constexpr std::ptrdiff_t m_p_chain_entity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_transforms = 0x30; // C_NetworkUtlVectorBase< CTransform >
                constexpr std::ptrdiff_t m_h_owner = 0x48; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_b_dirty = 0x68; // bool
            }
            // Parent: c_game_rules
            // Fields count: 0
            namespace c_singleplay_rules {
            }
            // Parent: c_base_entity
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iszStackName (string_t)
            // NetworkVarNames: m_iszOperatorName (string_t)
            // NetworkVarNames: m_iszOpvarName (string_t)
            // NetworkVarNames: m_iOpvarIndex (int)
            // NetworkVarNames: m_bUseAutoCompare (bool)
            namespace c_sound_opvar_set_point_base {
                constexpr std::ptrdiff_t m_isz_stack_name = 0x6D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_isz_operator_name = 0x6D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_isz_opvar_name = 0x6E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_i_opvar_index = 0x6E8; // int32
                constexpr std::ptrdiff_t m_b_use_auto_compare = 0x6EC; // bool
            }
            // Parent: c_sound_opvar_set_point_base
            // Fields count: 0
            namespace c_sound_opvar_set_point_entity {
            }
            // Parent: c_sound_opvar_set_point_entity
            // Fields count: 0
            namespace c_sound_opvar_set_aabb_entity {
            }
            // Parent: c_sound_opvar_set_aabb_entity
            // Fields count: 0
            namespace c_sound_opvar_set_obb_entity {
            }
            // Parent: c_sound_opvar_set_point_entity
            // Fields count: 0
            namespace c_sound_opvar_set_path_corner_entity {
            }
            // Parent: c_sound_opvar_set_point_entity
            // Fields count: 0
            namespace c_sound_opvar_set_auto_room_entity {
            }
            // Parent: c_sound_opvar_set_point_base
            // Fields count: 0
            namespace c_sound_opvar_set_obb_wind_entity {
            }
            // Parent: c_multiplay_rules
            // Fields count: 0
            namespace c_teamplay_rules {
            }
            // Parent: c_base_entity
            // Fields count: 30
            //
            // Metadata:
            // NetworkVarNames: m_bTimerPaused (bool)
            // NetworkVarNames: m_flTimeRemaining (float)
            // NetworkVarNames: m_flTimerEndTime (GameTime_t)
            // NetworkVarNames: m_bIsDisabled (bool)
            // NetworkVarNames: m_bShowInHUD (bool)
            // NetworkVarNames: m_nTimerLength (int)
            // NetworkVarNames: m_nTimerInitialLength (int)
            // NetworkVarNames: m_nTimerMaxLength (int)
            // NetworkVarNames: m_bAutoCountdown (bool)
            // NetworkVarNames: m_nSetupTimeLength (int)
            // NetworkVarNames: m_nState (int)
            // NetworkVarNames: m_bStartPaused (bool)
            // NetworkVarNames: m_bInCaptureWatchState (bool)
            // NetworkVarNames: m_flTotalTime (float)
            // NetworkVarNames: m_bStopWatchTimer (bool)
            namespace c_team_round_timer {
                constexpr std::ptrdiff_t m_b_timer_paused = 0x6D0; // bool
                constexpr std::ptrdiff_t m_fl_time_remaining = 0x6D4; // float32
                constexpr std::ptrdiff_t m_fl_timer_end_time = 0x6D8; // GameTime_t
                constexpr std::ptrdiff_t m_b_is_disabled = 0x6DC; // bool
                constexpr std::ptrdiff_t m_b_show_in_hud = 0x6DD; // bool
                constexpr std::ptrdiff_t m_n_timer_length = 0x6E0; // int32
                constexpr std::ptrdiff_t m_n_timer_initial_length = 0x6E4; // int32
                constexpr std::ptrdiff_t m_n_timer_max_length = 0x6E8; // int32
                constexpr std::ptrdiff_t m_b_auto_countdown = 0x6EC; // bool
                constexpr std::ptrdiff_t m_n_setup_time_length = 0x6F0; // int32
                constexpr std::ptrdiff_t m_n_state = 0x6F4; // int32
                constexpr std::ptrdiff_t m_b_start_paused = 0x6F8; // bool
                constexpr std::ptrdiff_t m_b_in_capture_watch_state = 0x6F9; // bool
                constexpr std::ptrdiff_t m_fl_total_time = 0x6FC; // float32
                constexpr std::ptrdiff_t m_b_stop_watch_timer = 0x700; // bool
                constexpr std::ptrdiff_t m_b_fire_finished = 0x701; // bool
                constexpr std::ptrdiff_t m_b_fire5_min_remain = 0x702; // bool
                constexpr std::ptrdiff_t m_b_fire4_min_remain = 0x703; // bool
                constexpr std::ptrdiff_t m_b_fire3_min_remain = 0x704; // bool
                constexpr std::ptrdiff_t m_b_fire2_min_remain = 0x705; // bool
                constexpr std::ptrdiff_t m_b_fire1_min_remain = 0x706; // bool
                constexpr std::ptrdiff_t m_b_fire30_sec_remain = 0x707; // bool
                constexpr std::ptrdiff_t m_b_fire10_sec_remain = 0x708; // bool
                constexpr std::ptrdiff_t m_b_fire5_sec_remain = 0x709; // bool
                constexpr std::ptrdiff_t m_b_fire4_sec_remain = 0x70A; // bool
                constexpr std::ptrdiff_t m_b_fire3_sec_remain = 0x70B; // bool
                constexpr std::ptrdiff_t m_b_fire2_sec_remain = 0x70C; // bool
                constexpr std::ptrdiff_t m_b_fire1_sec_remain = 0x70D; // bool
                constexpr std::ptrdiff_t m_n_old_timer_length = 0x710; // int32
                constexpr std::ptrdiff_t m_n_old_timer_state = 0x714; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
            namespace c_attribute_list {
                constexpr std::ptrdiff_t m_attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar< CEconItemAttribute >
                constexpr std::ptrdiff_t m_p_manager = 0x58; // CAttributeManager*
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iAttributeDefinitionIndex (attrib_definition_index_t)
            // NetworkVarNames: m_flValue (float)
            // NetworkVarNames: m_flInitialValue (float)
            // NetworkVarNames: m_nRefundableCurrency (int)
            // NetworkVarNames: m_bSetBonus (bool)
            namespace c_econ_item_attribute {
                constexpr std::ptrdiff_t m_i_attribute_definition_index = 0x30; // uint16
                constexpr std::ptrdiff_t m_fl_value = 0x34; // float32
                constexpr std::ptrdiff_t m_fl_initial_value = 0x38; // float32
                constexpr std::ptrdiff_t m_n_refundable_currency = 0x3C; // int32
                constexpr std::ptrdiff_t m_b_set_bonus = 0x40; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iReapplyProvisionParity (int)
            // NetworkVarNames: m_hOuter (EHANDLE)
            // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
            namespace c_attribute_manager {
                constexpr std::ptrdiff_t m_providers = 0x8; // CUtlVector< CHandle< C_BaseEntity > >
                constexpr std::ptrdiff_t m_i_reapply_provision_parity = 0x20; // int32
                constexpr std::ptrdiff_t m_h_outer = 0x24; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_b_prevent_loopback = 0x28; // bool
                constexpr std::ptrdiff_t m_provider_type = 0x2C; // attributeprovidertypes_t
                constexpr std::ptrdiff_t m_cached_results = 0x30; // CUtlVector< CAttributeManager::cached_attribute_float_t >
            }
            // Parent: None
            // Fields count: 3
            namespace c_attribute_manager_cached_attribute_float_t {
                constexpr std::ptrdiff_t fl_in = 0x0; // float32
                constexpr std::ptrdiff_t i_attrib_hook = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t fl_out = 0x10; // float32
            }
            // Parent: c_attribute_manager
            // Fields count: 3
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_Item (CEconItemView)
            namespace c_attribute_container {
                constexpr std::ptrdiff_t m_item = 0x50; // C_EconItemView
                constexpr std::ptrdiff_t m_i_external_item_provider_registered_token = 0x13A0; // int32
                constexpr std::ptrdiff_t m_ull_registered_as_item_id = 0x13A8; // uint64
            }
            // Parent: None
            // Fields count: 1
            namespace c_econ_entity_attached_model_data_t {
                constexpr std::ptrdiff_t m_i_model_display_flags = 0x0; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSpotted (bool)
            // NetworkVarNames: m_bSpottedByMask (uint32)
            namespace entity_spotted_state_t {
                constexpr std::ptrdiff_t m_b_spotted = 0x8; // bool
                constexpr std::ptrdiff_t m_b_spotted_by_mask = 0xC; // uint32[2]
            }
            // Parent: c_game_rules_proxy
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_pGameRules (CCSGameRules*)
            namespace c_cs_game_rules_proxy {
                constexpr std::ptrdiff_t m_p_game_rules = 0x6D0; // C_CSGameRules*
            }
            // Parent: c_teamplay_rules
            // Fields count: 117
            //
            // Metadata:
            // NetworkVarNames: m_bFreezePeriod (bool)
            // NetworkVarNames: m_bWarmupPeriod (bool)
            // NetworkVarNames: m_fWarmupPeriodEnd (GameTime_t)
            // NetworkVarNames: m_fWarmupPeriodStart (GameTime_t)
            // NetworkVarNames: m_nTotalPausedTicks (int)
            // NetworkVarNames: m_nPauseStartTick (int)
            // NetworkVarNames: m_bServerPaused (bool)
            // NetworkVarNames: m_bGamePaused (bool)
            // NetworkVarNames: m_bTerroristTimeOutActive (bool)
            // NetworkVarNames: m_bCTTimeOutActive (bool)
            // NetworkVarNames: m_flTerroristTimeOutRemaining (float)
            // NetworkVarNames: m_flCTTimeOutRemaining (float)
            // NetworkVarNames: m_nTerroristTimeOuts (int)
            // NetworkVarNames: m_nCTTimeOuts (int)
            // NetworkVarNames: m_bTechnicalTimeOut (bool)
            // NetworkVarNames: m_bMatchWaitingForResume (bool)
            // NetworkVarNames: m_iRoundTime (int)
            // NetworkVarNames: m_fMatchStartTime (float)
            // NetworkVarNames: m_fRoundStartTime (GameTime_t)
            // NetworkVarNames: m_flRestartRoundTime (GameTime_t)
            // NetworkVarNames: m_bGameRestart (bool)
            // NetworkVarNames: m_flGameStartTime (float)
            // NetworkVarNames: m_timeUntilNextPhaseStarts (float)
            // NetworkVarNames: m_gamePhase (int)
            // NetworkVarNames: m_totalRoundsPlayed (int)
            // NetworkVarNames: m_nRoundsPlayedThisPhase (int)
            // NetworkVarNames: m_nOvertimePlaying (int)
            // NetworkVarNames: m_iHostagesRemaining (int)
            // NetworkVarNames: m_bAnyHostageReached (bool)
            // NetworkVarNames: m_bMapHasBombTarget (bool)
            // NetworkVarNames: m_bMapHasRescueZone (bool)
            // NetworkVarNames: m_bMapHasBuyZone (bool)
            // NetworkVarNames: m_bIsQueuedMatchmaking (bool)
            // NetworkVarNames: m_nQueuedMatchmakingMode (int)
            // NetworkVarNames: m_bIsValveDS (bool)
            // NetworkVarNames: m_bLogoMap (bool)
            // NetworkVarNames: m_bPlayAllStepSoundsOnServer (bool)
            // NetworkVarNames: m_iSpectatorSlotCount (int)
            // NetworkVarNames: m_MatchDevice (int)
            // NetworkVarNames: m_bHasMatchStarted (bool)
            // NetworkVarNames: m_nNextMapInMapgroup (int)
            // NetworkVarNames: m_szTournamentEventName (char)
            // NetworkVarNames: m_szTournamentEventStage (char)
            // NetworkVarNames: m_szMatchStatTxt (char)
            // NetworkVarNames: m_szTournamentPredictionsTxt (char)
            // NetworkVarNames: m_nTournamentPredictionsPct (int)
            // NetworkVarNames: m_flCMMItemDropRevealStartTime (GameTime_t)
            // NetworkVarNames: m_flCMMItemDropRevealEndTime (GameTime_t)
            // NetworkVarNames: m_bIsDroppingItems (bool)
            // NetworkVarNames: m_bIsQuestEligible (bool)
            // NetworkVarNames: m_bIsHltvActive (bool)
            // NetworkVarNames: m_nGuardianModeWaveNumber (int)
            // NetworkVarNames: m_nGuardianModeSpecialKillsRemaining (int)
            // NetworkVarNames: m_nGuardianModeSpecialWeaponNeeded (int)
            // NetworkVarNames: m_numGlobalGiftsGiven (uint32)
            // NetworkVarNames: m_numGlobalGifters (uint32)
            // NetworkVarNames: m_numGlobalGiftsPeriodSeconds (uint32)
            // NetworkVarNames: m_arrFeaturedGiftersAccounts (uint32)
            // NetworkVarNames: m_arrFeaturedGiftersGifts (uint32)
            // NetworkVarNames: m_arrProhibitedItemIndices (uint16)
            // NetworkVarNames: m_arrTournamentActiveCasterAccounts (uint32)
            // NetworkVarNames: m_numBestOfMaps (int)
            // NetworkVarNames: m_nHalloweenMaskListSeed (int)
            // NetworkVarNames: m_bBombDropped (bool)
            // NetworkVarNames: m_bBombPlanted (bool)
            // NetworkVarNames: m_iRoundWinStatus (int)
            // NetworkVarNames: m_eRoundWinReason (int)
            // NetworkVarNames: m_bTCantBuy (bool)
            // NetworkVarNames: m_bCTCantBuy (bool)
            // NetworkVarNames: m_flGuardianBuyUntilTime (GameTime_t)
            // NetworkVarNames: m_iMatchStats_RoundResults (int)
            // NetworkVarNames: m_iMatchStats_PlayersAlive_CT (int)
            // NetworkVarNames: m_iMatchStats_PlayersAlive_T (int)
            // NetworkVarNames: m_TeamRespawnWaveTimes (float)
            // NetworkVarNames: m_flNextRespawnWave (GameTime_t)
            // NetworkVarNames: m_nServerQuestID (int)
            // NetworkVarNames: m_vMinimapMins (Vector)
            // NetworkVarNames: m_vMinimapMaxs (Vector)
            // NetworkVarNames: m_MinimapVerticalSectionHeights (float)
            // NetworkVarNames: m_nEndMatchMapGroupVoteTypes (int)
            // NetworkVarNames: m_nEndMatchMapGroupVoteOptions (int)
            // NetworkVarNames: m_nEndMatchMapVoteWinner (int)
            // NetworkVarNames: m_iNumConsecutiveCTLoses (int)
            // NetworkVarNames: m_iNumConsecutiveTerroristLoses (int)
            // NetworkVarNames: m_nMatchAbortedEarlyReason (int)
            // NetworkVarNames: m_pGameModeRules (CCSGameModeRules *)
            // NetworkVarNames: m_RetakeRules (CRetakeGameRules)
            // NetworkVarNames: m_nMatchEndCount (uint8)
            // NetworkVarNames: m_nTTeamIntroVariant (int)
            // NetworkVarNames: m_nCTTeamIntroVariant (int)
            // NetworkVarNames: m_bTeamIntroPeriod (bool)
            // NetworkVarNames: m_iRoundEndWinnerTeam (int)
            // NetworkVarNames: m_eRoundEndReason (int)
            // NetworkVarNames: m_bRoundEndShowTimerDefend (bool)
            // NetworkVarNames: m_iRoundEndTimerTime (int)
            // NetworkVarNames: m_sRoundEndFunFactToken (CUtlString)
            // NetworkVarNames: m_iRoundEndFunFactPlayerSlot (CPlayerSlot)
            // NetworkVarNames: m_iRoundEndFunFactData1 (int)
            // NetworkVarNames: m_iRoundEndFunFactData2 (int)
            // NetworkVarNames: m_iRoundEndFunFactData3 (int)
            // NetworkVarNames: m_sRoundEndMessage (CUtlString)
            // NetworkVarNames: m_iRoundEndPlayerCount (int)
            // NetworkVarNames: m_bRoundEndNoMusic (bool)
            // NetworkVarNames: m_iRoundEndLegacy (int)
            // NetworkVarNames: m_nRoundEndCount (uint8)
            // NetworkVarNames: m_iRoundStartRoundNumber (int)
            // NetworkVarNames: m_nRoundStartCount (uint8)
            namespace c_cs_game_rules {
                constexpr std::ptrdiff_t m_p_chain_entity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_b_freeze_period = 0x30; // bool
                constexpr std::ptrdiff_t m_b_warmup_period = 0x31; // bool
                constexpr std::ptrdiff_t m_f_warmup_period_end = 0x34; // GameTime_t
                constexpr std::ptrdiff_t m_f_warmup_period_start = 0x38; // GameTime_t
                constexpr std::ptrdiff_t m_n_total_paused_ticks = 0x3C; // int32
                constexpr std::ptrdiff_t m_n_pause_start_tick = 0x40; // int32
                constexpr std::ptrdiff_t m_b_server_paused = 0x44; // bool
                constexpr std::ptrdiff_t m_b_game_paused = 0x45; // bool
                constexpr std::ptrdiff_t m_b_terrorist_time_out_active = 0x46; // bool
                constexpr std::ptrdiff_t m_b_ct_time_out_active = 0x47; // bool
                constexpr std::ptrdiff_t m_fl_terrorist_time_out_remaining = 0x48; // float32
                constexpr std::ptrdiff_t m_fl_ct_time_out_remaining = 0x4C; // float32
                constexpr std::ptrdiff_t m_n_terrorist_time_outs = 0x50; // int32
                constexpr std::ptrdiff_t m_n_ct_time_outs = 0x54; // int32
                constexpr std::ptrdiff_t m_b_technical_time_out = 0x58; // bool
                constexpr std::ptrdiff_t m_b_match_waiting_for_resume = 0x59; // bool
                constexpr std::ptrdiff_t m_i_round_time = 0x5C; // int32
                constexpr std::ptrdiff_t m_f_match_start_time = 0x60; // float32
                constexpr std::ptrdiff_t m_f_round_start_time = 0x64; // GameTime_t
                constexpr std::ptrdiff_t m_fl_restart_round_time = 0x68; // GameTime_t
                constexpr std::ptrdiff_t m_b_game_restart = 0x6C; // bool
                constexpr std::ptrdiff_t m_fl_game_start_time = 0x70; // float32
                constexpr std::ptrdiff_t m_time_until_next_phase_starts = 0x74; // float32
                constexpr std::ptrdiff_t m_game_phase = 0x78; // int32
                constexpr std::ptrdiff_t m_total_rounds_played = 0x7C; // int32
                constexpr std::ptrdiff_t m_n_rounds_played_this_phase = 0x80; // int32
                constexpr std::ptrdiff_t m_n_overtime_playing = 0x84; // int32
                constexpr std::ptrdiff_t m_i_hostages_remaining = 0x88; // int32
                constexpr std::ptrdiff_t m_b_any_hostage_reached = 0x8C; // bool
                constexpr std::ptrdiff_t m_b_map_has_bomb_target = 0x8D; // bool
                constexpr std::ptrdiff_t m_b_map_has_rescue_zone = 0x8E; // bool
                constexpr std::ptrdiff_t m_b_map_has_buy_zone = 0x8F; // bool
                constexpr std::ptrdiff_t m_b_is_queued_matchmaking = 0x90; // bool
                constexpr std::ptrdiff_t m_n_queued_matchmaking_mode = 0x94; // int32
                constexpr std::ptrdiff_t m_b_is_valve_ds = 0x98; // bool
                constexpr std::ptrdiff_t m_b_logo_map = 0x99; // bool
                constexpr std::ptrdiff_t m_b_play_all_step_sounds_on_server = 0x9A; // bool
                constexpr std::ptrdiff_t m_i_spectator_slot_count = 0x9C; // int32
                constexpr std::ptrdiff_t m_match_device = 0xA0; // int32
                constexpr std::ptrdiff_t m_b_has_match_started = 0xA4; // bool
                constexpr std::ptrdiff_t m_n_next_map_in_mapgroup = 0xA8; // int32
                constexpr std::ptrdiff_t m_sz_tournament_event_name = 0xAC; // char[512]
                constexpr std::ptrdiff_t m_sz_tournament_event_stage = 0x2AC; // char[512]
                constexpr std::ptrdiff_t m_sz_match_stat_txt = 0x4AC; // char[512]
                constexpr std::ptrdiff_t m_sz_tournament_predictions_txt = 0x6AC; // char[512]
                constexpr std::ptrdiff_t m_n_tournament_predictions_pct = 0x8AC; // int32
                constexpr std::ptrdiff_t m_fl_cmm_item_drop_reveal_start_time = 0x8B0; // GameTime_t
                constexpr std::ptrdiff_t m_fl_cmm_item_drop_reveal_end_time = 0x8B4; // GameTime_t
                constexpr std::ptrdiff_t m_b_is_dropping_items = 0x8B8; // bool
                constexpr std::ptrdiff_t m_b_is_quest_eligible = 0x8B9; // bool
                constexpr std::ptrdiff_t m_b_is_hltv_active = 0x8BA; // bool
                constexpr std::ptrdiff_t m_n_guardian_mode_wave_number = 0x8BC; // int32
                constexpr std::ptrdiff_t m_n_guardian_mode_special_kills_remaining = 0x8C0; // int32
                constexpr std::ptrdiff_t m_n_guardian_mode_special_weapon_needed = 0x8C4; // int32
                constexpr std::ptrdiff_t m_n_guardian_grenades_to_give_bots = 0x8C8; // int32
                constexpr std::ptrdiff_t m_n_num_heavies_to_spawn = 0x8CC; // int32
                constexpr std::ptrdiff_t m_num_global_gifts_given = 0x8D0; // uint32
                constexpr std::ptrdiff_t m_num_global_gifters = 0x8D4; // uint32
                constexpr std::ptrdiff_t m_num_global_gifts_period_seconds = 0x8D8; // uint32
                constexpr std::ptrdiff_t m_arr_featured_gifters_accounts = 0x8DC; // uint32[4]
                constexpr std::ptrdiff_t m_arr_featured_gifters_gifts = 0x8EC; // uint32[4]
                constexpr std::ptrdiff_t m_arr_prohibited_item_indices = 0x8FC; // uint16[100]
                constexpr std::ptrdiff_t m_arr_tournament_active_caster_accounts = 0x9C4; // uint32[4]
                constexpr std::ptrdiff_t m_num_best_of_maps = 0x9D4; // int32
                constexpr std::ptrdiff_t m_n_halloween_mask_list_seed = 0x9D8; // int32
                constexpr std::ptrdiff_t m_b_bomb_dropped = 0x9DC; // bool
                constexpr std::ptrdiff_t m_b_bomb_planted = 0x9DD; // bool
                constexpr std::ptrdiff_t m_i_round_win_status = 0x9E0; // int32
                constexpr std::ptrdiff_t m_e_round_win_reason = 0x9E4; // int32
                constexpr std::ptrdiff_t m_b_t_cant_buy = 0x9E8; // bool
                constexpr std::ptrdiff_t m_b_ct_cant_buy = 0x9E9; // bool
                constexpr std::ptrdiff_t m_fl_guardian_buy_until_time = 0x9EC; // GameTime_t
                constexpr std::ptrdiff_t m_i_match_stats_round_results = 0x9F0; // int32[30]
                constexpr std::ptrdiff_t m_i_match_stats_players_alive_ct = 0xA68; // int32[30]
                constexpr std::ptrdiff_t m_i_match_stats_players_alive_t = 0xAE0; // int32[30]
                constexpr std::ptrdiff_t m_team_respawn_wave_times = 0xB58; // float32[32]
                constexpr std::ptrdiff_t m_fl_next_respawn_wave = 0xBD8; // GameTime_t[32]
                constexpr std::ptrdiff_t m_n_server_quest_id = 0xC58; // int32
                constexpr std::ptrdiff_t m_v_minimap_mins = 0xC5C; // Vector
                constexpr std::ptrdiff_t m_v_minimap_maxs = 0xC68; // Vector
                constexpr std::ptrdiff_t m_minimap_vertical_section_heights = 0xC74; // float32[8]
                constexpr std::ptrdiff_t m_b_dont_increment_coop_wave = 0xC94; // bool
                constexpr std::ptrdiff_t m_b_spawned_terror_hunt_heavy = 0xC95; // bool
                constexpr std::ptrdiff_t m_n_end_match_map_group_vote_types = 0xC98; // int32[10]
                constexpr std::ptrdiff_t m_n_end_match_map_group_vote_options = 0xCC0; // int32[10]
                constexpr std::ptrdiff_t m_n_end_match_map_vote_winner = 0xCE8; // int32
                constexpr std::ptrdiff_t m_i_num_consecutive_ct_loses = 0xCEC; // int32
                constexpr std::ptrdiff_t m_i_num_consecutive_terrorist_loses = 0xCF0; // int32
                constexpr std::ptrdiff_t m_b_mark_client_stop_record_at_round_end = 0xD10; // bool
                constexpr std::ptrdiff_t m_n_match_aborted_early_reason = 0xD68; // int32
                constexpr std::ptrdiff_t m_b_has_triggered_round_start_music = 0xD6C; // bool
                constexpr std::ptrdiff_t m_b_has_triggered_coop_spawn_reset = 0xD6D; // bool
                constexpr std::ptrdiff_t m_b_switching_teams_at_round_reset = 0xD6E; // bool
                constexpr std::ptrdiff_t m_p_game_mode_rules = 0xD88; // CCSGameModeRules*
                constexpr std::ptrdiff_t m_retake_rules = 0xD90; // C_RetakeGameRules
                constexpr std::ptrdiff_t m_n_match_end_count = 0xEA8; // uint8
                constexpr std::ptrdiff_t m_n_t_team_intro_variant = 0xEAC; // int32
                constexpr std::ptrdiff_t m_n_ct_team_intro_variant = 0xEB0; // int32
                constexpr std::ptrdiff_t m_b_team_intro_period = 0xEB4; // bool
                constexpr std::ptrdiff_t m_i_round_end_winner_team = 0xEB8; // int32
                constexpr std::ptrdiff_t m_e_round_end_reason = 0xEBC; // int32
                constexpr std::ptrdiff_t m_b_round_end_show_timer_defend = 0xEC0; // bool
                constexpr std::ptrdiff_t m_i_round_end_timer_time = 0xEC4; // int32
                constexpr std::ptrdiff_t m_s_round_end_fun_fact_token = 0xEC8; // CUtlString
                constexpr std::ptrdiff_t m_i_round_end_fun_fact_player_slot = 0xED0; // CPlayerSlot
                constexpr std::ptrdiff_t m_i_round_end_fun_fact_data1 = 0xED4; // int32
                constexpr std::ptrdiff_t m_i_round_end_fun_fact_data2 = 0xED8; // int32
                constexpr std::ptrdiff_t m_i_round_end_fun_fact_data3 = 0xEDC; // int32
                constexpr std::ptrdiff_t m_s_round_end_message = 0xEE0; // CUtlString
                constexpr std::ptrdiff_t m_i_round_end_player_count = 0xEE8; // int32
                constexpr std::ptrdiff_t m_b_round_end_no_music = 0xEEC; // bool
                constexpr std::ptrdiff_t m_i_round_end_legacy = 0xEF0; // int32
                constexpr std::ptrdiff_t m_n_round_end_count = 0xEF4; // uint8
                constexpr std::ptrdiff_t m_i_round_start_round_number = 0xEF8; // int32
                constexpr std::ptrdiff_t m_n_round_start_count = 0xEFC; // uint8
                constexpr std::ptrdiff_t m_fl_last_perf_sample_time = 0x4F08; // float64
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace ccs_take_damage_info_api {
            }
            // Parent: None
            // Fields count: 1
            namespace ccs_game_mode_rules {
                constexpr std::ptrdiff_t m_p_chain_entity = 0x8; // CNetworkVarChainer
            }
            // Parent: ccs_game_mode_rules
            // Fields count: 0
            namespace ccs_game_mode_rules_noop {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace ccs_game_mode_script {
            }
            // Parent: ccs_game_mode_rules
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_WeaponSequence (CUtlString)
            namespace ccs_game_mode_rules_arms_race {
                constexpr std::ptrdiff_t m_weapon_sequence = 0x38; // C_NetworkUtlVectorBase< CUtlString >
            }
            // Parent: ccs_game_mode_script
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace ccs_arms_race_script {
                constexpr std::ptrdiff_t m_p_outer = 0xD8; // CCSGameModeRules_ArmsRace*
            }
            // Parent: ccs_game_mode_rules
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
            // NetworkVarNames: m_flDMBonusTimeLength (float)
            // NetworkVarNames: m_nDMBonusWeaponLoadoutSlot (int16)
            namespace ccs_game_mode_rules_deathmatch {
                constexpr std::ptrdiff_t m_fl_dm_bonus_start_time = 0x38; // GameTime_t
                constexpr std::ptrdiff_t m_fl_dm_bonus_time_length = 0x3C; // float32
                constexpr std::ptrdiff_t m_n_dm_bonus_weapon_loadout_slot = 0x40; // int16
            }
            // Parent: ccs_game_mode_script
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace ccs_deathmatch_script {
                constexpr std::ptrdiff_t m_p_outer = 0xD8; // CCSGameModeRules_Deathmatch*
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_nMatchSeed (int)
            // NetworkVarNames: m_bBlockersPresent (bool)
            // NetworkVarNames: m_bRoundInProgress (bool)
            // NetworkVarNames: m_iFirstSecondHalfRound (int)
            // NetworkVarNames: m_iBombSite (int)
            namespace c_retake_game_rules {
                constexpr std::ptrdiff_t m_n_match_seed = 0xF8; // int32
                constexpr std::ptrdiff_t m_b_blockers_present = 0xFC; // bool
                constexpr std::ptrdiff_t m_b_round_in_progress = 0xFD; // bool
                constexpr std::ptrdiff_t m_i_first_second_half_round = 0x100; // int32
                constexpr std::ptrdiff_t m_i_bomb_site = 0x104; // int32
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // NetworkVarNames: m_iKills (int)
            // NetworkVarNames: m_iDeaths (int)
            // NetworkVarNames: m_iAssists (int)
            // NetworkVarNames: m_iDamage (int)
            // NetworkVarNames: m_iEquipmentValue (int)
            // NetworkVarNames: m_iMoneySaved (int)
            // NetworkVarNames: m_iKillReward (int)
            // NetworkVarNames: m_iLiveTime (int)
            // NetworkVarNames: m_iHeadShotKills (int)
            // NetworkVarNames: m_iObjective (int)
            // NetworkVarNames: m_iCashEarned (int)
            // NetworkVarNames: m_iUtilityDamage (int)
            // NetworkVarNames: m_iEnemiesFlashed (int)
            namespace cs_per_round_stats_t {
                constexpr std::ptrdiff_t m_i_kills = 0x30; // int32
                constexpr std::ptrdiff_t m_i_deaths = 0x34; // int32
                constexpr std::ptrdiff_t m_i_assists = 0x38; // int32
                constexpr std::ptrdiff_t m_i_damage = 0x3C; // int32
                constexpr std::ptrdiff_t m_i_equipment_value = 0x40; // int32
                constexpr std::ptrdiff_t m_i_money_saved = 0x44; // int32
                constexpr std::ptrdiff_t m_i_kill_reward = 0x48; // int32
                constexpr std::ptrdiff_t m_i_live_time = 0x4C; // int32
                constexpr std::ptrdiff_t m_i_head_shot_kills = 0x50; // int32
                constexpr std::ptrdiff_t m_i_objective = 0x54; // int32
                constexpr std::ptrdiff_t m_i_cash_earned = 0x58; // int32
                constexpr std::ptrdiff_t m_i_utility_damage = 0x5C; // int32
                constexpr std::ptrdiff_t m_i_enemies_flashed = 0x60; // int32
            }
            // Parent: cs_per_round_stats_t
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iEnemy5Ks (int)
            // NetworkVarNames: m_iEnemy4Ks (int)
            // NetworkVarNames: m_iEnemy3Ks (int)
            // NetworkVarNames: m_iEnemyKnifeKills (int)
            // NetworkVarNames: m_iEnemyTaserKills (int)
            namespace cs_match_stats_t {
                constexpr std::ptrdiff_t m_i_enemy5_ks = 0x64; // int32
                constexpr std::ptrdiff_t m_i_enemy4_ks = 0x68; // int32
                constexpr std::ptrdiff_t m_i_enemy3_ks = 0x6C; // int32
                constexpr std::ptrdiff_t m_i_enemy_knife_kills = 0x70; // int32
                constexpr std::ptrdiff_t m_i_enemy_taser_kills = 0x74; // int32
            }
            // Parent: c_base_entity
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_nVariant (int)
            // NetworkVarNames: m_nRandom (int)
            // NetworkVarNames: m_nOrdinal (int)
            // NetworkVarNames: m_sWeaponName (CUtlString)
            // NetworkVarNames: m_xuid (XUID)
            // NetworkVarNames: m_agentItem (CEconItemView)
            // NetworkVarNames: m_glovesItem (CEconItemView)
            // NetworkVarNames: m_weaponItem (CEconItemView)
            namespace c_csgo_team_preview_character_position {
                constexpr std::ptrdiff_t m_n_variant = 0x6D0; // int32
                constexpr std::ptrdiff_t m_n_random = 0x6D4; // int32
                constexpr std::ptrdiff_t m_n_ordinal = 0x6D8; // int32
                constexpr std::ptrdiff_t m_s_weapon_name = 0x6E0; // CUtlString
                constexpr std::ptrdiff_t m_xuid = 0x6E8; // uint64
                constexpr std::ptrdiff_t m_agent_item = 0x6F0; // C_EconItemView
                constexpr std::ptrdiff_t m_gloves_item = 0x1A40; // C_EconItemView
                constexpr std::ptrdiff_t m_weapon_item = 0x2D90; // C_EconItemView
            }
            // Parent: c_csgo_team_preview_character_position
            // Fields count: 0
            namespace c_csgo_team_select_character_position {
            }
            // Parent: c_csgo_team_select_character_position
            // Fields count: 0
            namespace c_csgo_team_select_terrorist_position {
            }
            // Parent: c_csgo_team_select_character_position
            // Fields count: 0
            namespace c_csgo_team_select_counter_terrorist_position {
            }
            // Parent: c_csgo_team_preview_character_position
            // Fields count: 0
            namespace c_csgo_team_intro_character_position {
            }
            // Parent: c_csgo_team_intro_character_position
            // Fields count: 0
            namespace c_csgo_team_intro_terrorist_position {
            }
            // Parent: c_csgo_team_intro_character_position
            // Fields count: 0
            namespace c_csgo_team_intro_counter_terrorist_position {
            }
            // Parent: c_csgo_team_intro_character_position
            // Fields count: 0
            namespace ccsgo_wingman_intro_character_position {
            }
            // Parent: ccsgo_wingman_intro_character_position
            // Fields count: 0
            namespace ccsgo_wingman_intro_terrorist_position {
            }
            // Parent: ccsgo_wingman_intro_character_position
            // Fields count: 0
            namespace ccsgo_wingman_intro_counter_terrorist_position {
            }
            // Parent: c_base_entity
            // Fields count: 0
            namespace c_cs_minimap_boundary {
            }
            // Parent: c_base_entity
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_hPlayer (CHandle< CCSPlayerPawn>)
            // NetworkVarNames: m_hPingedEntity (CHandle< CBaseEntity>)
            // NetworkVarNames: m_iType (int)
            // NetworkVarNames: m_bUrgent (bool)
            // NetworkVarNames: m_szPlaceName (char)
            namespace c_player_ping {
                constexpr std::ptrdiff_t m_h_player = 0x700; // CHandle< C_CSPlayerPawn >
                constexpr std::ptrdiff_t m_h_pinged_entity = 0x704; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_i_type = 0x708; // int32
                constexpr std::ptrdiff_t m_b_urgent = 0x70C; // bool
                constexpr std::ptrdiff_t m_sz_place_name = 0x70D; // char[18]
            }
            // Parent: c_player_pawn_component
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle< CBaseEntity>)
            namespace ccs_player_ping_services {
                constexpr std::ptrdiff_t m_h_player_ping = 0x40; // CHandle< C_BaseEntity >
            }
            // Parent: c_base_entity
            // Fields count: 10
            //
            // Metadata:
            // NetworkVarNames: m_bHostageAlive (bool)
            // NetworkVarNames: m_isHostageFollowingSomeone (bool)
            // NetworkVarNames: m_iHostageEntityIDs (CEntityIndex)
            // NetworkVarNames: m_bombsiteCenterA (Vector)
            // NetworkVarNames: m_bombsiteCenterB (Vector)
            // NetworkVarNames: m_hostageRescueX (int)
            // NetworkVarNames: m_hostageRescueY (int)
            // NetworkVarNames: m_hostageRescueZ (int)
            // NetworkVarNames: m_bEndMatchNextMapAllVoted (bool)
            namespace c_cs_player_resource {
                constexpr std::ptrdiff_t m_b_hostage_alive = 0x6D0; // bool[12]
                constexpr std::ptrdiff_t m_is_hostage_following_someone = 0x6DC; // bool[12]
                constexpr std::ptrdiff_t m_i_hostage_entity_i_ds = 0x6E8; // CEntityIndex[12]
                constexpr std::ptrdiff_t m_bombsite_center_a = 0x718; // Vector
                constexpr std::ptrdiff_t m_bombsite_center_b = 0x724; // Vector
                constexpr std::ptrdiff_t m_hostage_rescue_x = 0x730; // int32[4]
                constexpr std::ptrdiff_t m_hostage_rescue_y = 0x740; // int32[4]
                constexpr std::ptrdiff_t m_hostage_rescue_z = 0x750; // int32[4]
                constexpr std::ptrdiff_t m_b_end_match_next_map_all_voted = 0x760; // bool
                constexpr std::ptrdiff_t m_found_goal_positions = 0x761; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace ccs_player_controller_api {
            }
            // Parent: c_player_pawn_component
            // Fields count: 0
            namespace c_player_view_model_services {
            }
            // Parent: c_player_camera_services
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iFOV (uint32)
            // NetworkVarNames: m_iFOVStart (uint32)
            // NetworkVarNames: m_flFOVTime (GameTime_t)
            // NetworkVarNames: m_flFOVRate (float32)
            // NetworkVarNames: m_hZoomOwner (CHandle< CBaseEntity>)
            namespace ccs_player_base_camera_services {
                constexpr std::ptrdiff_t m_i_fov = 0x210; // uint32
                constexpr std::ptrdiff_t m_i_fov_start = 0x214; // uint32
                constexpr std::ptrdiff_t m_fl_fov_time = 0x218; // GameTime_t
                constexpr std::ptrdiff_t m_fl_fov_rate = 0x21C; // float32
                constexpr std::ptrdiff_t m_h_zoom_owner = 0x220; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_fl_last_shot_fov = 0x224; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nItemDefIndex (uint16)
            // NetworkVarNames: m_nCount (uint16)
            namespace weapon_purchase_count_t {
                constexpr std::ptrdiff_t m_n_item_def_index = 0x30; // uint16
                constexpr std::ptrdiff_t m_n_count = 0x32; // uint16
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
            namespace weapon_purchase_tracker_t {
                constexpr std::ptrdiff_t m_weapon_purchases = 0x8; // C_UtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t >
            }
            // Parent: c_player_pawn_component
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
            // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
            namespace ccs_player_action_tracking_services {
                constexpr std::ptrdiff_t m_h_last_weapon_before_c4_auto_switch = 0x40; // CHandle< C_BasePlayerWeapon >
                constexpr std::ptrdiff_t m_b_is_rescuing = 0x44; // bool
                constexpr std::ptrdiff_t m_weapon_purchases_this_match = 0x48; // WeaponPurchaseTracker_t
                constexpr std::ptrdiff_t m_weapon_purchases_this_round = 0xA0; // WeaponPurchaseTracker_t
            }
            // Parent: c_player_pawn_component
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_totalHitsOnServer (int32)
            namespace ccs_player_bullet_services {
                constexpr std::ptrdiff_t m_total_hits_on_server = 0x40; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_unDefIdx (item_definition_index_t)
            // NetworkVarNames: m_nCost (int)
            // NetworkVarNames: m_nPrevArmor (int)
            // NetworkVarNames: m_bPrevHelmet (bool)
            // NetworkVarNames: m_hItem (CEntityHandle)
            namespace sellback_purchase_entry_t {
                constexpr std::ptrdiff_t m_un_def_idx = 0x30; // uint16
                constexpr std::ptrdiff_t m_n_cost = 0x34; // int32
                constexpr std::ptrdiff_t m_n_prev_armor = 0x38; // int32
                constexpr std::ptrdiff_t m_b_prev_helmet = 0x3C; // bool
                constexpr std::ptrdiff_t m_h_item = 0x40; // CEntityHandle
            }
            // Parent: c_player_pawn_component
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
            namespace ccs_player_buy_services {
                constexpr std::ptrdiff_t m_vec_sellback_purchase_entries = 0x40; // C_UtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t >
            }
            // Parent: ccs_player_base_camera_services
            // Fields count: 1
            namespace ccs_player_camera_services {
                constexpr std::ptrdiff_t m_fl_death_cam_tilt = 0x228; // float32
            }
            // Parent: c_player_pawn_component
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hCarriedHostage (CHandle< CBaseEntity>)
            // NetworkVarNames: m_hCarriedHostageProp (CHandle< CBaseEntity>)
            namespace ccs_player_hostage_services {
                constexpr std::ptrdiff_t m_h_carried_hostage = 0x40; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_h_carried_hostage_prop = 0x44; // CHandle< C_BaseEntity >
            }
            // Parent: c_player_item_services
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_bHasDefuser (bool)
            // NetworkVarNames: m_bHasHelmet (bool)
            // NetworkVarNames: m_bHasHeavyArmor (bool)
            namespace ccs_player_item_services {
                constexpr std::ptrdiff_t m_b_has_defuser = 0x40; // bool
                constexpr std::ptrdiff_t m_b_has_helmet = 0x41; // bool
                constexpr std::ptrdiff_t m_b_has_heavy_armor = 0x42; // bool
            }
            // Parent: c_player_movement_services_humanoid
            // Fields count: 37
            //
            // Metadata:
            // NetworkVarNames: m_flMaxFallVelocity (float)
            // NetworkVarNames: m_vecLadderNormal (Vector)
            // NetworkVarNames: m_nLadderSurfacePropIndex (int)
            // NetworkVarNames: m_flDuckAmount (float)
            // NetworkVarNames: m_flDuckSpeed (float)
            // NetworkVarNames: m_bDuckOverride (bool)
            // NetworkVarNames: m_bDesiresDuck (bool)
            // NetworkVarNames: m_nDuckTimeMsecs (uint32)
            // NetworkVarNames: m_nDuckJumpTimeMsecs (uint32)
            // NetworkVarNames: m_nJumpTimeMsecs (uint32)
            // NetworkVarNames: m_flLastDuckTime (float)
            // NetworkVarNames: m_nGameCodeHasMovedPlayerAfterCommand (int)
            // NetworkVarNames: m_bOldJumpPressed (bool)
            // NetworkVarNames: m_flJumpUntil (float)
            // NetworkVarNames: m_flJumpVel (float)
            // NetworkVarNames: m_fStashGrenadeParameterWhen (GameTime_t)
            // NetworkVarNames: m_nButtonDownMaskPrev (ButtonBitMask_t)
            // NetworkVarNames: m_flOffsetTickCompleteTime (float)
            // NetworkVarNames: m_flOffsetTickStashedSpeed (float)
            // NetworkVarNames: m_flStamina (float)
            namespace ccs_player_movement_services {
                constexpr std::ptrdiff_t m_fl_max_fall_velocity = 0x214; // float32
                constexpr std::ptrdiff_t m_vec_ladder_normal = 0x218; // Vector
                constexpr std::ptrdiff_t m_n_ladder_surface_prop_index = 0x224; // int32
                constexpr std::ptrdiff_t m_fl_duck_amount = 0x228; // float32
                constexpr std::ptrdiff_t m_fl_duck_speed = 0x22C; // float32
                constexpr std::ptrdiff_t m_b_duck_override = 0x230; // bool
                constexpr std::ptrdiff_t m_b_desires_duck = 0x231; // bool
                constexpr std::ptrdiff_t m_fl_duck_offset = 0x234; // float32
                constexpr std::ptrdiff_t m_n_duck_time_msecs = 0x238; // uint32
                constexpr std::ptrdiff_t m_n_duck_jump_time_msecs = 0x23C; // uint32
                constexpr std::ptrdiff_t m_n_jump_time_msecs = 0x240; // uint32
                constexpr std::ptrdiff_t m_fl_last_duck_time = 0x244; // float32
                constexpr std::ptrdiff_t m_vec_last_position_at_full_crouch_speed = 0x250; // Vector2D
                constexpr std::ptrdiff_t m_duck_until_on_ground = 0x258; // bool
                constexpr std::ptrdiff_t m_b_has_walk_moved_since_last_jump = 0x259; // bool
                constexpr std::ptrdiff_t m_b_in_stuck_test = 0x25A; // bool
                constexpr std::ptrdiff_t m_fl_stuck_check_time = 0x268; // float32[64][2]
                constexpr std::ptrdiff_t m_n_trace_count = 0x468; // int32
                constexpr std::ptrdiff_t m_stuck_last = 0x46C; // int32
                constexpr std::ptrdiff_t m_b_speed_cropped = 0x470; // bool
                constexpr std::ptrdiff_t m_n_old_water_level = 0x474; // int32
                constexpr std::ptrdiff_t m_fl_water_entry_time = 0x478; // float32
                constexpr std::ptrdiff_t m_vec_forward = 0x47C; // Vector
                constexpr std::ptrdiff_t m_vec_left = 0x488; // Vector
                constexpr std::ptrdiff_t m_vec_up = 0x494; // Vector
                constexpr std::ptrdiff_t m_n_game_code_has_moved_player_after_command = 0x4A0; // int32
                constexpr std::ptrdiff_t m_b_old_jump_pressed = 0x4A4; // bool
                constexpr std::ptrdiff_t m_fl_jump_pressed_time = 0x4A8; // float32
                constexpr std::ptrdiff_t m_fl_jump_until = 0x4AC; // float32
                constexpr std::ptrdiff_t m_fl_jump_vel = 0x4B0; // float32
                constexpr std::ptrdiff_t m_f_stash_grenade_parameter_when = 0x4B4; // GameTime_t
                constexpr std::ptrdiff_t m_n_button_down_mask_prev = 0x4B8; // uint64
                constexpr std::ptrdiff_t m_fl_offset_tick_complete_time = 0x4C0; // float32
                constexpr std::ptrdiff_t m_fl_offset_tick_stashed_speed = 0x4C4; // float32
                constexpr std::ptrdiff_t m_fl_stamina = 0x4C8; // float32
                constexpr std::ptrdiff_t m_fl_height_at_jump_start = 0x4CC; // float32
                constexpr std::ptrdiff_t m_fl_max_jump_height_this_jump = 0x4D0; // float32
            }
            // Parent: c_player_use_services
            // Fields count: 0
            namespace ccs_player_use_services {
            }
            // Parent: c_player_view_model_services
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hViewModel (CHandle< CBaseViewModel >)
            namespace ccs_player_view_model_services {
                constexpr std::ptrdiff_t m_h_view_model = 0x40; // CHandle< C_BaseViewModel >[3]
            }
            // Parent: c_player_water_services
            // Fields count: 3
            namespace ccs_player_water_services {
                constexpr std::ptrdiff_t m_fl_water_jump_time = 0x40; // float32
                constexpr std::ptrdiff_t m_vec_water_jump_vel = 0x44; // Vector
                constexpr std::ptrdiff_t m_fl_swim_sound_time = 0x50; // float32
            }
            // Parent: c_player_weapon_services
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_flNextAttack (GameTime_t)
            // NetworkVarNames: m_bIsLookingAtWeapon (bool)
            // NetworkVarNames: m_bIsHoldingLookAtWeapon (bool)
            namespace ccs_player_weapon_services {
                constexpr std::ptrdiff_t m_fl_next_attack = 0xB8; // GameTime_t
                constexpr std::ptrdiff_t m_b_is_looking_at_weapon = 0xBC; // bool
                constexpr std::ptrdiff_t m_b_is_holding_look_at_weapon = 0xBD; // bool
                constexpr std::ptrdiff_t m_n_old_shoot_position_history_count = 0xC0; // uint32
                constexpr std::ptrdiff_t m_n_old_input_history_count = 0x458; // uint32
            }
            // Parent: c_player_observer_services
            // Fields count: 8
            namespace ccs_observer_observer_services {
                constexpr std::ptrdiff_t m_h_last_observer_target = 0x58; // CEntityHandle
                constexpr std::ptrdiff_t m_vec_observer_interpolate_offset = 0x5C; // Vector
                constexpr std::ptrdiff_t m_vec_observer_interp_start_pos = 0x68; // Vector
                constexpr std::ptrdiff_t m_fl_obs_interp_path_length = 0x74; // float32
                constexpr std::ptrdiff_t m_q_obs_interp_orientation_start = 0x80; // Quaternion
                constexpr std::ptrdiff_t m_q_obs_interp_orientation_travel_dir = 0x90; // Quaternion
                constexpr std::ptrdiff_t m_obs_interp_state = 0xA0; // ObserverInterpState_t
                constexpr std::ptrdiff_t m_b_observer_interpolation_needs_deferred_setup = 0xA4; // bool
            }
            // Parent: ccs_player_base_camera_services
            // Fields count: 0
            namespace ccs_observer_camera_services {
            }
            // Parent: c_player_movement_services
            // Fields count: 0
            namespace ccs_observer_movement_services {
            }
            // Parent: c_player_use_services
            // Fields count: 0
            namespace ccs_observer_use_services {
            }
            // Parent: c_player_view_model_services
            // Fields count: 0
            namespace ccs_observer_view_model_services {
            }
            // Parent: c_player_controller_component
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_perRoundStats (CSPerRoundStats_t)
            // NetworkVarNames: m_matchStats (CSMatchStats_t)
            // NetworkVarNames: m_iNumRoundKills (int)
            // NetworkVarNames: m_iNumRoundKillsHeadshots (int)
            // NetworkVarNames: m_unTotalRoundDamageDealt (uint32)
            namespace ccs_player_controller_action_tracking_services {
                constexpr std::ptrdiff_t m_per_round_stats = 0x40; // C_UtlVectorEmbeddedNetworkVar< CSPerRoundStats_t >
                constexpr std::ptrdiff_t m_match_stats = 0x90; // CSMatchStats_t
                constexpr std::ptrdiff_t m_i_num_round_kills = 0x108; // int32
                constexpr std::ptrdiff_t m_i_num_round_kills_headshots = 0x10C; // int32
                constexpr std::ptrdiff_t m_un_total_round_damage_dealt = 0x110; // uint32
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // NetworkVarNames: m_PlayerDamager (CHandle< CCSPlayerPawnBase >)
            // NetworkVarNames: m_PlayerRecipient (CHandle< CCSPlayerPawnBase >)
            // NetworkVarNames: m_hPlayerControllerDamager (CHandle< CCSPlayerController >)
            // NetworkVarNames: m_hPlayerControllerRecipient (CHandle< CCSPlayerController >)
            // NetworkVarNames: m_szPlayerDamagerName (CUtlString)
            // NetworkVarNames: m_szPlayerRecipientName (CUtlString)
            // NetworkVarNames: m_DamagerXuid (uint64)
            // NetworkVarNames: m_RecipientXuid (uint64)
            // NetworkVarNames: m_iDamage (int)
            // NetworkVarNames: m_iActualHealthRemoved (int)
            // NetworkVarNames: m_iNumHits (int)
            // NetworkVarNames: m_iLastBulletUpdate (int)
            // NetworkVarNames: m_bIsOtherEnemy (bool)
            // NetworkVarNames: m_killType (EKillTypes_t)
            namespace c_damage_record {
                constexpr std::ptrdiff_t m_player_damager = 0x28; // CHandle< C_CSPlayerPawnBase >
                constexpr std::ptrdiff_t m_player_recipient = 0x2C; // CHandle< C_CSPlayerPawnBase >
                constexpr std::ptrdiff_t m_h_player_controller_damager = 0x30; // CHandle< CCSPlayerController >
                constexpr std::ptrdiff_t m_h_player_controller_recipient = 0x34; // CHandle< CCSPlayerController >
                constexpr std::ptrdiff_t m_sz_player_damager_name = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_sz_player_recipient_name = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_damager_xuid = 0x48; // uint64
                constexpr std::ptrdiff_t m_recipient_xuid = 0x50; // uint64
                constexpr std::ptrdiff_t m_i_damage = 0x58; // int32
                constexpr std::ptrdiff_t m_i_actual_health_removed = 0x5C; // int32
                constexpr std::ptrdiff_t m_i_num_hits = 0x60; // int32
                constexpr std::ptrdiff_t m_i_last_bullet_update = 0x64; // int32
                constexpr std::ptrdiff_t m_b_is_other_enemy = 0x68; // bool
                constexpr std::ptrdiff_t m_kill_type = 0x69; // EKillTypes_t
            }
            // Parent: c_player_controller_component
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nSendUpdate (int)
            // NetworkVarNames: m_DamageList (CDamageRecord)
            namespace ccs_player_controller_damage_services {
                constexpr std::ptrdiff_t m_n_send_update = 0x40; // int32
                constexpr std::ptrdiff_t m_damage_list = 0x48; // C_UtlVectorEmbeddedNetworkVar< CDamageRecord >
            }
            // Parent: c_player_controller_component
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iAccount (int)
            // NetworkVarNames: m_iStartAccount (int)
            // NetworkVarNames: m_iTotalCashSpent (int)
            // NetworkVarNames: m_iCashSpentThisRound (int)
            namespace ccs_player_controller_in_game_money_services {
                constexpr std::ptrdiff_t m_i_account = 0x40; // int32
                constexpr std::ptrdiff_t m_i_start_account = 0x44; // int32
                constexpr std::ptrdiff_t m_i_total_cash_spent = 0x48; // int32
                constexpr std::ptrdiff_t m_i_cash_spent_this_round = 0x4C; // int32
                constexpr std::ptrdiff_t m_n_previous_account = 0x50; // int32
            }
            // Parent: None
            // Fields count: 3
            namespace server_authoritative_weapon_slot_t {
                constexpr std::ptrdiff_t un_class = 0x28; // uint16
                constexpr std::ptrdiff_t un_slot = 0x2A; // uint16
                constexpr std::ptrdiff_t un_item_def_idx = 0x2C; // uint16
            }
            // Parent: c_player_controller_component
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_unMusicID (item_definition_index_t)
            // NetworkVarNames: m_rank (MedalRank_t)
            // NetworkVarNames: m_nPersonaDataPublicLevel (int)
            // NetworkVarNames: m_nPersonaDataPublicCommendsLeader (int)
            // NetworkVarNames: m_nPersonaDataPublicCommendsTeacher (int)
            // NetworkVarNames: m_nPersonaDataPublicCommendsFriendly (int)
            // NetworkVarNames: m_nPersonaDataXpTrailLevel (int)
            // NetworkVarNames: m_vecServerAuthoritativeWeaponSlots (ServerAuthoritativeWeaponSlot_t)
            namespace ccs_player_controller_inventory_services {
                constexpr std::ptrdiff_t m_un_music_id = 0x40; // uint16
                constexpr std::ptrdiff_t m_rank = 0x44; // MedalRank_t[6]
                constexpr std::ptrdiff_t m_n_persona_data_public_level = 0x5C; // int32
                constexpr std::ptrdiff_t m_n_persona_data_public_commends_leader = 0x60; // int32
                constexpr std::ptrdiff_t m_n_persona_data_public_commends_teacher = 0x64; // int32
                constexpr std::ptrdiff_t m_n_persona_data_public_commends_friendly = 0x68; // int32
                constexpr std::ptrdiff_t m_n_persona_data_xp_trail_level = 0x6C; // int32
                constexpr std::ptrdiff_t m_vec_server_authoritative_weapon_slots = 0x70; // C_UtlVectorEmbeddedNetworkVar< ServerAuthoritativeWeaponSlot_t >
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace ccs_weapon_base_v_data_api {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace ccs_weapon_base_api {
            }
            // Parent: None
            // Fields count: 13
            namespace c_iron_sight_controller {
                constexpr std::ptrdiff_t m_b_iron_sight_available = 0x10; // bool
                constexpr std::ptrdiff_t m_fl_iron_sight_amount = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_iron_sight_amount_gained = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_iron_sight_amount_biased = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_iron_sight_amount_interpolated = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_iron_sight_amount_gained_interpolated = 0x24; // float32
                constexpr std::ptrdiff_t m_fl_iron_sight_amount_biased_interpolated = 0x28; // float32
                constexpr std::ptrdiff_t m_fl_interpolation_last_updated = 0x2C; // float32
                constexpr std::ptrdiff_t m_ang_delta_average = 0x30; // QAngle[8]
                constexpr std::ptrdiff_t m_ang_view_last = 0x90; // QAngle
                constexpr std::ptrdiff_t m_vec_dot_coords = 0x9C; // Vector2D
                constexpr std::ptrdiff_t m_fl_dot_blur = 0xA4; // float32
                constexpr std::ptrdiff_t m_fl_speed_ratio = 0xA8; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace composite_material_match_filter_t {
                constexpr std::ptrdiff_t m_n_composite_material_match_filter_type = 0x0; // CompositeMaterialMatchFilterType_t
                constexpr std::ptrdiff_t m_str_match_filter = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_str_match_value = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_b_pass_when_true = 0x18; // bool
            }
            // Parent: None
            // Fields count: 34
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace composite_material_input_loose_variable_t {
                constexpr std::ptrdiff_t m_str_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_b_expose_externally = 0x8; // bool
                constexpr std::ptrdiff_t m_str_exposed_friendly_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_str_exposed_friendly_group_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_b_exposed_variable_is_fixed_range = 0x20; // bool
                constexpr std::ptrdiff_t m_str_exposed_visible_when_true = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_str_exposed_hidden_when_true = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_n_variable_type = 0x38; // CompositeMaterialInputLooseVariableType_t
                constexpr std::ptrdiff_t m_b_value_boolean = 0x3C; // bool
                constexpr std::ptrdiff_t m_n_value_int_x = 0x40; // int32
                constexpr std::ptrdiff_t m_n_value_int_y = 0x44; // int32
                constexpr std::ptrdiff_t m_n_value_int_z = 0x48; // int32
                constexpr std::ptrdiff_t m_n_value_int_w = 0x4C; // int32
                constexpr std::ptrdiff_t m_b_has_float_bounds = 0x50; // bool
                constexpr std::ptrdiff_t m_fl_value_float_x = 0x54; // float32
                constexpr std::ptrdiff_t m_fl_value_float_x_min = 0x58; // float32
                constexpr std::ptrdiff_t m_fl_value_float_x_max = 0x5C; // float32
                constexpr std::ptrdiff_t m_fl_value_float_y = 0x60; // float32
                constexpr std::ptrdiff_t m_fl_value_float_y_min = 0x64; // float32
                constexpr std::ptrdiff_t m_fl_value_float_y_max = 0x68; // float32
                constexpr std::ptrdiff_t m_fl_value_float_z = 0x6C; // float32
                constexpr std::ptrdiff_t m_fl_value_float_z_min = 0x70; // float32
                constexpr std::ptrdiff_t m_fl_value_float_z_max = 0x74; // float32
                constexpr std::ptrdiff_t m_fl_value_float_w = 0x78; // float32
                constexpr std::ptrdiff_t m_fl_value_float_w_min = 0x7C; // float32
                constexpr std::ptrdiff_t m_fl_value_float_w_max = 0x80; // float32
                constexpr std::ptrdiff_t m_c_value_color4 = 0x84; // Color
                constexpr std::ptrdiff_t m_n_value_system_var = 0x88; // CompositeMaterialVarSystemVar_t
                constexpr std::ptrdiff_t m_str_resource_material = 0x90; // CResourceName
                constexpr std::ptrdiff_t m_str_texture_content_asset_path = 0x170; // CUtlString
                constexpr std::ptrdiff_t m_str_texture_runtime_resource_path = 0x178; // CResourceName
                constexpr std::ptrdiff_t m_str_texture_compilation_vtex_template = 0x258; // CUtlString
                constexpr std::ptrdiff_t m_n_texture_type = 0x260; // CompositeMaterialInputTextureType_t
                constexpr std::ptrdiff_t m_str_string = 0x268; // CUtlString
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace comp_mat_mutator_condition_t {
                constexpr std::ptrdiff_t m_n_mutator_condition = 0x0; // CompMatPropertyMutatorConditionType_t
                constexpr std::ptrdiff_t m_str_mutator_condition_container_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_str_mutator_condition_container_var_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_str_mutator_condition_container_var_value = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_b_pass_when_true = 0x20; // bool
            }
            // Parent: None
            // Fields count: 28
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace comp_mat_property_mutator_t {
                constexpr std::ptrdiff_t m_b_enabled = 0x0; // bool
                constexpr std::ptrdiff_t m_n_mutator_command_type = 0x4; // CompMatPropertyMutatorType_t
                constexpr std::ptrdiff_t m_str_init_with_container = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_str_copy_property_input_container_src = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_str_copy_property_input_container_property = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_str_copy_property_target_property = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_str_random_roll_input_vars_seed_input_var = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_vec_random_roll_input_vars_input_vars_to_roll = 0x30; // CUtlVector< CUtlString >
                constexpr std::ptrdiff_t m_str_copy_matching_keys_input_container_src = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_str_copy_keys_with_suffix_input_container_src = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_str_copy_keys_with_suffix_find_suffix = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_str_copy_keys_with_suffix_replace_suffix = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_n_set_value_value = 0x68; // CompositeMaterialInputLooseVariable_t
                constexpr std::ptrdiff_t m_str_generate_texture_target_param = 0x2D8; // CUtlString
                constexpr std::ptrdiff_t m_str_generate_texture_initial_container = 0x2E0; // CUtlString
                constexpr std::ptrdiff_t m_n_resolution = 0x2E8; // int32
                constexpr std::ptrdiff_t m_b_is_scratch_target = 0x2EC; // bool
                constexpr std::ptrdiff_t m_b_splat_debug_info = 0x2ED; // bool
                constexpr std::ptrdiff_t m_b_capture_in_render_doc = 0x2EE; // bool
                constexpr std::ptrdiff_t m_vec_tex_gen_instructions = 0x2F0; // CUtlVector< CompMatPropertyMutator_t >
                constexpr std::ptrdiff_t m_vec_conditional_mutators = 0x308; // CUtlVector< CompMatPropertyMutator_t >
                constexpr std::ptrdiff_t m_str_pop_input_queue_container = 0x320; // CUtlString
                constexpr std::ptrdiff_t m_str_draw_text_input_container_src = 0x328; // CUtlString
                constexpr std::ptrdiff_t m_str_draw_text_input_container_property = 0x330; // CUtlString
                constexpr std::ptrdiff_t m_vec_draw_text_position = 0x338; // Vector2D
                constexpr std::ptrdiff_t m_col_draw_text_color = 0x340; // Color
                constexpr std::ptrdiff_t m_str_draw_text_font = 0x348; // CUtlString
                constexpr std::ptrdiff_t m_vec_conditions = 0x350; // CUtlVector< CompMatMutatorCondition_t >
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace composite_material_input_container_t {
                constexpr std::ptrdiff_t m_b_enabled = 0x0; // bool
                constexpr std::ptrdiff_t m_n_composite_material_input_container_source_type = 0x4; // CompositeMaterialInputContainerSourceType_t
                constexpr std::ptrdiff_t m_str_specific_container_material = 0x8; // CResourceName
                constexpr std::ptrdiff_t m_str_attr_name = 0xE8; // CUtlString
                constexpr std::ptrdiff_t m_str_alias = 0xF0; // CUtlString
                constexpr std::ptrdiff_t m_vec_loose_variables = 0xF8; // CUtlVector< CompositeMaterialInputLooseVariable_t >
                constexpr std::ptrdiff_t m_str_attr_name_for_var = 0x110; // CUtlString
                constexpr std::ptrdiff_t m_b_expose_externally = 0x118; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace composite_material_assembly_procedure_t {
                constexpr std::ptrdiff_t m_vec_comp_mat_includes = 0x0; // CUtlVector< CResourceName >
                constexpr std::ptrdiff_t m_vec_match_filters = 0x18; // CUtlVector< CompositeMaterialMatchFilter_t >
                constexpr std::ptrdiff_t m_vec_composite_input_containers = 0x30; // CUtlVector< CompositeMaterialInputContainer_t >
                constexpr std::ptrdiff_t m_vec_property_mutators = 0x48; // CUtlVector< CompMatPropertyMutator_t >
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyElementNameFn
            namespace generated_texture_handle_t {
                constexpr std::ptrdiff_t m_str_bitmap_name = 0x0; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MPropertyElementNameFn
            namespace composite_material_t {
                constexpr std::ptrdiff_t m_target_k_vs = 0x8; // KeyValues3
                constexpr std::ptrdiff_t m_pre_generation_k_vs = 0x18; // KeyValues3
                constexpr std::ptrdiff_t m_final_k_vs = 0x28; // KeyValues3
                constexpr std::ptrdiff_t m_vec_generated_textures = 0x40; // CUtlVector< GeneratedTextureHandle_t >
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace composite_material_editor_point_t {
                constexpr std::ptrdiff_t m_model_name = 0x0; // CResourceName
                constexpr std::ptrdiff_t m_n_sequence_index = 0xE0; // int32
                constexpr std::ptrdiff_t m_fl_cycle = 0xE4; // float32
                constexpr std::ptrdiff_t m_kv_model_state_choices = 0xE8; // KeyValues3
                constexpr std::ptrdiff_t m_b_enable_child_model = 0xF8; // bool
                constexpr std::ptrdiff_t m_child_model_name = 0x100; // CResourceName
                constexpr std::ptrdiff_t m_vec_composite_material_assembly_procedures = 0x1E0; // CUtlVector< CompositeMaterialAssemblyProcedure_t >
                constexpr std::ptrdiff_t m_vec_composite_materials = 0x1F8; // CUtlVector< CompositeMaterial_t >
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_composite_material_editor_doc {
                constexpr std::ptrdiff_t m_n_version = 0x8; // int32
                constexpr std::ptrdiff_t m_points = 0x10; // CUtlVector< CompositeMaterialEditorPoint_t >
                constexpr std::ptrdiff_t m_k_vthumbnail = 0x28; // KeyValues3
            }
            // Parent: None
            // Fields count: 43
            namespace c_global_light_base {
                constexpr std::ptrdiff_t m_b_spot_light = 0x10; // bool
                constexpr std::ptrdiff_t m_spot_light_origin = 0x14; // Vector
                constexpr std::ptrdiff_t m_spot_light_angles = 0x20; // QAngle
                constexpr std::ptrdiff_t m_shadow_direction = 0x2C; // Vector
                constexpr std::ptrdiff_t m_ambient_direction = 0x38; // Vector
                constexpr std::ptrdiff_t m_specular_direction = 0x44; // Vector
                constexpr std::ptrdiff_t m_inspector_specular_direction = 0x50; // Vector
                constexpr std::ptrdiff_t m_fl_specular_power = 0x5C; // float32
                constexpr std::ptrdiff_t m_fl_specular_independence = 0x60; // float32
                constexpr std::ptrdiff_t m_specular_color = 0x64; // Color
                constexpr std::ptrdiff_t m_b_start_disabled = 0x68; // bool
                constexpr std::ptrdiff_t m_b_enabled = 0x69; // bool
                constexpr std::ptrdiff_t m_light_color = 0x6A; // Color
                constexpr std::ptrdiff_t m_ambient_color1 = 0x6E; // Color
                constexpr std::ptrdiff_t m_ambient_color2 = 0x72; // Color
                constexpr std::ptrdiff_t m_ambient_color3 = 0x76; // Color
                constexpr std::ptrdiff_t m_fl_sun_distance = 0x7C; // float32
                constexpr std::ptrdiff_t m_fl_fov = 0x80; // float32
                constexpr std::ptrdiff_t m_fl_near_z = 0x84; // float32
                constexpr std::ptrdiff_t m_fl_far_z = 0x88; // float32
                constexpr std::ptrdiff_t m_b_enable_shadows = 0x8C; // bool
                constexpr std::ptrdiff_t m_b_old_enable_shadows = 0x8D; // bool
                constexpr std::ptrdiff_t m_b_background_clear_not_required = 0x8E; // bool
                constexpr std::ptrdiff_t m_fl_cloud_scale = 0x90; // float32
                constexpr std::ptrdiff_t m_fl_cloud1_speed = 0x94; // float32
                constexpr std::ptrdiff_t m_fl_cloud1_direction = 0x98; // float32
                constexpr std::ptrdiff_t m_fl_cloud2_speed = 0x9C; // float32
                constexpr std::ptrdiff_t m_fl_cloud2_direction = 0xA0; // float32
                constexpr std::ptrdiff_t m_fl_ambient_scale1 = 0xB0; // float32
                constexpr std::ptrdiff_t m_fl_ambient_scale2 = 0xB4; // float32
                constexpr std::ptrdiff_t m_fl_ground_scale = 0xB8; // float32
                constexpr std::ptrdiff_t m_fl_light_scale = 0xBC; // float32
                constexpr std::ptrdiff_t m_fl_fo_w_darkness = 0xC0; // float32
                constexpr std::ptrdiff_t m_b_enable_separate_skybox_fog = 0xC4; // bool
                constexpr std::ptrdiff_t m_v_fow_color = 0xC8; // Vector
                constexpr std::ptrdiff_t m_view_origin = 0xD4; // Vector
                constexpr std::ptrdiff_t m_view_angles = 0xE0; // QAngle
                constexpr std::ptrdiff_t m_fl_view_fo_v = 0xEC; // float32
                constexpr std::ptrdiff_t m_world_points = 0xF0; // Vector[8]
                constexpr std::ptrdiff_t m_v_fog_offset_layer0 = 0x4A8; // Vector2D
                constexpr std::ptrdiff_t m_v_fog_offset_layer1 = 0x4B0; // Vector2D
                constexpr std::ptrdiff_t m_h_env_wind = 0x4B8; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_h_env_sky = 0x4BC; // CHandle< C_BaseEntity >
            }
            // Parent: c_base_entity
            // Fields count: 1
            namespace c_global_light {
                constexpr std::ptrdiff_t m_wind_cloth_force_handle = 0xB90; // uint16
            }
            // Parent: c_anim_graph_controller_base
            // Fields count: 4
            namespace c_csgo_preview_model_graph_controller {
                constexpr std::ptrdiff_t m_psz_character_mode = 0x18; // CAnimGraphParamOptionalRef< char* >
                constexpr std::ptrdiff_t m_psz_weapon_state = 0x38; // CAnimGraphParamOptionalRef< char* >
                constexpr std::ptrdiff_t m_psz_weapon_type = 0x58; // CAnimGraphParamOptionalRef< char* >
                constexpr std::ptrdiff_t m_psz_end_of_match_celebration = 0x78; // CAnimGraphParamOptionalRef< char* >
            }
            // Parent: c_anim_graph_controller_base
            // Fields count: 8
            namespace c_csgo_preview_player_graph_controller {
                constexpr std::ptrdiff_t m_psz_character_mode = 0x18; // CAnimGraphParamOptionalRef< char* >
                constexpr std::ptrdiff_t m_psz_team_preview_variant = 0x38; // CAnimGraphParamOptionalRef< char* >
                constexpr std::ptrdiff_t m_psz_team_preview_position = 0x58; // CAnimGraphParamOptionalRef< char* >
                constexpr std::ptrdiff_t m_psz_end_of_match_celebration = 0x78; // CAnimGraphParamOptionalRef< char* >
                constexpr std::ptrdiff_t m_n_team_preview_random = 0x98; // CAnimGraphParamOptionalRef< int32 >
                constexpr std::ptrdiff_t m_psz_weapon_state = 0xB0; // CAnimGraphParamOptionalRef< char* >
                constexpr std::ptrdiff_t m_psz_weapon_type = 0xD0; // CAnimGraphParamOptionalRef< char* >
                constexpr std::ptrdiff_t m_b_ct = 0xF0; // CAnimGraphParamOptionalRef< bool >
            }
            // Parent: c_base_entity
            // Fields count: 10
            namespace c_csgo_map_preview_camera_path_node {
                constexpr std::ptrdiff_t m_sz_parent_path_unique_id = 0x6D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_n_path_index = 0x6D8; // int32
                constexpr std::ptrdiff_t m_v_in_tangent_local = 0x6DC; // Vector
                constexpr std::ptrdiff_t m_v_out_tangent_local = 0x6E8; // Vector
                constexpr std::ptrdiff_t m_fl_fov = 0x6F4; // float32
                constexpr std::ptrdiff_t m_fl_speed = 0x6F8; // float32
                constexpr std::ptrdiff_t m_fl_ease_in = 0x6FC; // float32
                constexpr std::ptrdiff_t m_fl_ease_out = 0x700; // float32
                constexpr std::ptrdiff_t m_v_in_tangent_world = 0x704; // Vector
                constexpr std::ptrdiff_t m_v_out_tangent_world = 0x710; // Vector
            }
            // Parent: c_base_entity
            // Fields count: 8
            namespace c_csgo_map_preview_camera_path {
                constexpr std::ptrdiff_t m_fl_z_far = 0x6D0; // float32
                constexpr std::ptrdiff_t m_fl_z_near = 0x6D4; // float32
                constexpr std::ptrdiff_t m_b_loop = 0x6D8; // bool
                constexpr std::ptrdiff_t m_b_vertical_fov = 0x6D9; // bool
                constexpr std::ptrdiff_t m_b_constant_speed = 0x6DA; // bool
                constexpr std::ptrdiff_t m_fl_duration = 0x6DC; // float32
                constexpr std::ptrdiff_t m_fl_path_length = 0x720; // float32
                constexpr std::ptrdiff_t m_fl_path_duration = 0x724; // float32
            }
            // Parent: c_player_pawn_component
            // Fields count: 0
            namespace ccs_player_glow_services {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace c_cs_observer_pawn_api {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace c_cs_player_pawn_api {
            }
            // Parent: c_base_entity
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_iActiveIssueIndex (int)
            // NetworkVarNames: m_iOnlyTeamToVote (int)
            // NetworkVarNames: m_nVoteOptionCount (int)
            // NetworkVarNames: m_nPotentialVotes (int)
            // NetworkVarNames: m_bIsYesNoVote (bool)
            namespace c_vote_controller {
                constexpr std::ptrdiff_t m_i_active_issue_index = 0x6DC; // int32
                constexpr std::ptrdiff_t m_i_only_team_to_vote = 0x6E0; // int32
                constexpr std::ptrdiff_t m_n_vote_option_count = 0x6E4; // int32[5]
                constexpr std::ptrdiff_t m_n_potential_votes = 0x6F8; // int32
                constexpr std::ptrdiff_t m_b_votes_dirty = 0x6FC; // bool
                constexpr std::ptrdiff_t m_b_type_dirty = 0x6FD; // bool
                constexpr std::ptrdiff_t m_b_is_yes_no_vote = 0x6FE; // bool
            }
            // Parent: c_base_entity
            // Fields count: 17
            //
            // Metadata:
            // NetworkVarNames: m_nDraftType (int)
            // NetworkVarNames: m_nTeamWinningCoinToss (int)
            // NetworkVarNames: m_nTeamWithFirstChoice (int)
            // NetworkVarNames: m_nVoteMapIdsList (int)
            // NetworkVarNames: m_nAccountIDs (int)
            // NetworkVarNames: m_nMapId0 (int)
            // NetworkVarNames: m_nMapId1 (int)
            // NetworkVarNames: m_nMapId2 (int)
            // NetworkVarNames: m_nMapId3 (int)
            // NetworkVarNames: m_nMapId4 (int)
            // NetworkVarNames: m_nMapId5 (int)
            // NetworkVarNames: m_nStartingSide0 (int)
            // NetworkVarNames: m_nCurrentPhase (int)
            // NetworkVarNames: m_nPhaseStartTick (int)
            // NetworkVarNames: m_nPhaseDurationTicks (int)
            namespace c_map_veto_pick_controller {
                constexpr std::ptrdiff_t m_n_draft_type = 0x6DC; // int32
                constexpr std::ptrdiff_t m_n_team_winning_coin_toss = 0x6E0; // int32
                constexpr std::ptrdiff_t m_n_team_with_first_choice = 0x6E4; // int32[64]
                constexpr std::ptrdiff_t m_n_vote_map_ids_list = 0x7E4; // int32[7]
                constexpr std::ptrdiff_t m_n_account_i_ds = 0x800; // int32[64]
                constexpr std::ptrdiff_t m_n_map_id0 = 0x900; // int32[64]
                constexpr std::ptrdiff_t m_n_map_id1 = 0xA00; // int32[64]
                constexpr std::ptrdiff_t m_n_map_id2 = 0xB00; // int32[64]
                constexpr std::ptrdiff_t m_n_map_id3 = 0xC00; // int32[64]
                constexpr std::ptrdiff_t m_n_map_id4 = 0xD00; // int32[64]
                constexpr std::ptrdiff_t m_n_map_id5 = 0xE00; // int32[64]
                constexpr std::ptrdiff_t m_n_starting_side0 = 0xF00; // int32[64]
                constexpr std::ptrdiff_t m_n_current_phase = 0x1000; // int32
                constexpr std::ptrdiff_t m_n_phase_start_tick = 0x1004; // int32
                constexpr std::ptrdiff_t m_n_phase_duration_ticks = 0x1008; // int32
                constexpr std::ptrdiff_t m_n_post_data_update_tick = 0x100C; // int32
                constexpr std::ptrdiff_t m_b_disabled_hud = 0x1010; // bool
            }
            // Parent: None
            // Fields count: 0
            namespace c_player_spray_decal_render_helper {
            }
            // Parent: c_csgo_map_preview_camera_path
            // Fields count: 7
            namespace c_csgo_team_preview_camera {
                constexpr std::ptrdiff_t m_n_variant = 0x730; // int32
                constexpr std::ptrdiff_t m_b_dof_enabled = 0x734; // bool
                constexpr std::ptrdiff_t m_fl_dof_near_blurry = 0x738; // float32
                constexpr std::ptrdiff_t m_fl_dof_near_crisp = 0x73C; // float32
                constexpr std::ptrdiff_t m_fl_dof_far_crisp = 0x740; // float32
                constexpr std::ptrdiff_t m_fl_dof_far_blurry = 0x744; // float32
                constexpr std::ptrdiff_t m_fl_dof_tilt_to_ground = 0x748; // float32
            }
            // Parent: c_csgo_team_preview_camera
            // Fields count: 0
            namespace c_csgo_team_select_camera {
            }
            // Parent: c_csgo_team_preview_camera
            // Fields count: 0
            namespace c_csgo_terrorist_team_intro_camera {
            }
            // Parent: c_csgo_team_preview_camera
            // Fields count: 0
            namespace c_csgo_terrorist_wingman_intro_camera {
            }
            // Parent: c_csgo_team_preview_camera
            // Fields count: 0
            namespace c_csgo_counter_terrorist_team_intro_camera {
            }
            // Parent: c_csgo_team_preview_camera
            // Fields count: 0
            namespace c_csgo_counter_terrorist_wingman_intro_camera {
            }
            // Parent: c_csgo_team_preview_camera
            // Fields count: 0
            namespace c_csgo_end_of_match_camera {
            }
            // Parent: c_csgo_team_preview_character_position
            // Fields count: 0
            namespace c_csgo_end_of_match_character_position {
            }
            // Parent: c_base_entity
            // Fields count: 0
            namespace c_csgo_end_of_match_lineup_endpoint {
            }
            // Parent: c_csgo_end_of_match_lineup_endpoint
            // Fields count: 0
            namespace c_csgo_end_of_match_lineup_start {
            }
            // Parent: c_csgo_end_of_match_lineup_endpoint
            // Fields count: 0
            namespace c_csgo_end_of_match_lineup_end {
            }
            // Parent: c_base_entity
            // Fields count: 2
            namespace c_csm_fov_override {
                constexpr std::ptrdiff_t m_camera_name = 0x6D0; // CUtlString
                constexpr std::ptrdiff_t m_fl_csm_fov_override_value = 0x6D8; // float32
            }
            // Parent: c_base_entity
            // Fields count: 0
            namespace c_point_entity {
            }
            // Parent: c_base_entity
            // Fields count: 24
            //
            // Metadata:
            // NetworkVarNames: m_Color (Color)
            // NetworkVarNames: m_flBrightness (float)
            // NetworkVarNames: m_hCubemapTexture (HRenderTextureStrong)
            // NetworkVarNames: m_bCustomCubemapTexture (bool)
            // NetworkVarNames: m_hLightProbeTexture (HRenderTextureStrong)
            // NetworkVarNames: m_hLightProbeDirectLightIndicesTexture (HRenderTextureStrong)
            // NetworkVarNames: m_hLightProbeDirectLightScalarsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_hLightProbeDirectLightShadowsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bMoveable (bool)
            // NetworkVarNames: m_nHandshake (int)
            // NetworkVarNames: m_nEnvCubeMapArrayIndex (int)
            // NetworkVarNames: m_nPriority (int)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_flEdgeFadeDist (float)
            // NetworkVarNames: m_vEdgeFadeDists (Vector)
            // NetworkVarNames: m_nLightProbeSizeX (int)
            // NetworkVarNames: m_nLightProbeSizeY (int)
            // NetworkVarNames: m_nLightProbeSizeZ (int)
            // NetworkVarNames: m_nLightProbeAtlasX (int)
            // NetworkVarNames: m_nLightProbeAtlasY (int)
            // NetworkVarNames: m_nLightProbeAtlasZ (int)
            // NetworkVarNames: m_bEnabled (bool)
            namespace c_env_combined_light_probe_volume {
                constexpr std::ptrdiff_t m_color = 0x1728; // Color
                constexpr std::ptrdiff_t m_fl_brightness = 0x172C; // float32
                constexpr std::ptrdiff_t m_h_cubemap_texture = 0x1730; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_b_custom_cubemap_texture = 0x1738; // bool
                constexpr std::ptrdiff_t m_h_light_probe_texture = 0x1740; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_h_light_probe_direct_light_indices_texture = 0x1748; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_h_light_probe_direct_light_scalars_texture = 0x1750; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_h_light_probe_direct_light_shadows_texture = 0x1758; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_v_box_mins = 0x1760; // Vector
                constexpr std::ptrdiff_t m_v_box_maxs = 0x176C; // Vector
                constexpr std::ptrdiff_t m_b_moveable = 0x1778; // bool
                constexpr std::ptrdiff_t m_n_handshake = 0x177C; // int32
                constexpr std::ptrdiff_t m_n_env_cube_map_array_index = 0x1780; // int32
                constexpr std::ptrdiff_t m_n_priority = 0x1784; // int32
                constexpr std::ptrdiff_t m_b_start_disabled = 0x1788; // bool
                constexpr std::ptrdiff_t m_fl_edge_fade_dist = 0x178C; // float32
                constexpr std::ptrdiff_t m_v_edge_fade_dists = 0x1790; // Vector
                constexpr std::ptrdiff_t m_n_light_probe_size_x = 0x179C; // int32
                constexpr std::ptrdiff_t m_n_light_probe_size_y = 0x17A0; // int32
                constexpr std::ptrdiff_t m_n_light_probe_size_z = 0x17A4; // int32
                constexpr std::ptrdiff_t m_n_light_probe_atlas_x = 0x17A8; // int32
                constexpr std::ptrdiff_t m_n_light_probe_atlas_y = 0x17AC; // int32
                constexpr std::ptrdiff_t m_n_light_probe_atlas_z = 0x17B0; // int32
                constexpr std::ptrdiff_t m_b_enabled = 0x17C9; // bool
            }
            // Parent: c_base_entity
            // Fields count: 18
            //
            // Metadata:
            // NetworkVarNames: m_hCubemapTexture (HRenderTextureStrong)
            // NetworkVarNames: m_bCustomCubemapTexture (bool)
            // NetworkVarNames: m_flInfluenceRadius (float)
            // NetworkVarNames: m_vBoxProjectMins (Vector)
            // NetworkVarNames: m_vBoxProjectMaxs (Vector)
            // NetworkVarNames: m_bMoveable (bool)
            // NetworkVarNames: m_nHandshake (int)
            // NetworkVarNames: m_nEnvCubeMapArrayIndex (int)
            // NetworkVarNames: m_nPriority (int)
            // NetworkVarNames: m_flEdgeFadeDist (float)
            // NetworkVarNames: m_vEdgeFadeDists (Vector)
            // NetworkVarNames: m_flDiffuseScale (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bDefaultEnvMap (bool)
            // NetworkVarNames: m_bDefaultSpecEnvMap (bool)
            // NetworkVarNames: m_bIndoorCubeMap (bool)
            // NetworkVarNames: m_bCopyDiffuseFromDefaultCubemap (bool)
            // NetworkVarNames: m_bEnabled (bool)
            namespace c_env_cubemap {
                constexpr std::ptrdiff_t m_h_cubemap_texture = 0x750; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_b_custom_cubemap_texture = 0x758; // bool
                constexpr std::ptrdiff_t m_fl_influence_radius = 0x75C; // float32
                constexpr std::ptrdiff_t m_v_box_project_mins = 0x760; // Vector
                constexpr std::ptrdiff_t m_v_box_project_maxs = 0x76C; // Vector
                constexpr std::ptrdiff_t m_b_moveable = 0x778; // bool
                constexpr std::ptrdiff_t m_n_handshake = 0x77C; // int32
                constexpr std::ptrdiff_t m_n_env_cube_map_array_index = 0x780; // int32
                constexpr std::ptrdiff_t m_n_priority = 0x784; // int32
                constexpr std::ptrdiff_t m_fl_edge_fade_dist = 0x788; // float32
                constexpr std::ptrdiff_t m_v_edge_fade_dists = 0x78C; // Vector
                constexpr std::ptrdiff_t m_fl_diffuse_scale = 0x798; // float32
                constexpr std::ptrdiff_t m_b_start_disabled = 0x79C; // bool
                constexpr std::ptrdiff_t m_b_default_env_map = 0x79D; // bool
                constexpr std::ptrdiff_t m_b_default_spec_env_map = 0x79E; // bool
                constexpr std::ptrdiff_t m_b_indoor_cube_map = 0x79F; // bool
                constexpr std::ptrdiff_t m_b_copy_diffuse_from_default_cubemap = 0x7A0; // bool
                constexpr std::ptrdiff_t m_b_enabled = 0x7B0; // bool
            }
            // Parent: c_env_cubemap
            // Fields count: 0
            namespace c_env_cubemap_box {
            }
            // Parent: c_base_entity
            // Fields count: 18
            //
            // Metadata:
            // NetworkVarNames: m_flEndDistance (float)
            // NetworkVarNames: m_flStartDistance (float)
            // NetworkVarNames: m_flFogFalloffExponent (float)
            // NetworkVarNames: m_bHeightFogEnabled (bool)
            // NetworkVarNames: m_flFogHeightWidth (float)
            // NetworkVarNames: m_flFogHeightEnd (float)
            // NetworkVarNames: m_flFogHeightStart (float)
            // NetworkVarNames: m_flFogHeightExponent (float)
            // NetworkVarNames: m_flLODBias (float)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_flFogMaxOpacity (float)
            // NetworkVarNames: m_nCubemapSourceType (int)
            // NetworkVarNames: m_hSkyMaterial (HMaterialStrong)
            // NetworkVarNames: m_iszSkyEntity (string_t)
            // NetworkVarNames: m_hFogCubemapTexture (HRenderTextureStrong)
            // NetworkVarNames: m_bHasHeightFogEnd (bool)
            namespace c_env_cubemap_fog {
                constexpr std::ptrdiff_t m_fl_end_distance = 0x6D0; // float32
                constexpr std::ptrdiff_t m_fl_start_distance = 0x6D4; // float32
                constexpr std::ptrdiff_t m_fl_fog_falloff_exponent = 0x6D8; // float32
                constexpr std::ptrdiff_t m_b_height_fog_enabled = 0x6DC; // bool
                constexpr std::ptrdiff_t m_fl_fog_height_width = 0x6E0; // float32
                constexpr std::ptrdiff_t m_fl_fog_height_end = 0x6E4; // float32
                constexpr std::ptrdiff_t m_fl_fog_height_start = 0x6E8; // float32
                constexpr std::ptrdiff_t m_fl_fog_height_exponent = 0x6EC; // float32
                constexpr std::ptrdiff_t m_fl_lod_bias = 0x6F0; // float32
                constexpr std::ptrdiff_t m_b_active = 0x6F4; // bool
                constexpr std::ptrdiff_t m_b_start_disabled = 0x6F5; // bool
                constexpr std::ptrdiff_t m_fl_fog_max_opacity = 0x6F8; // float32
                constexpr std::ptrdiff_t m_n_cubemap_source_type = 0x6FC; // int32
                constexpr std::ptrdiff_t m_h_sky_material = 0x700; // CStrongHandle< InfoForResourceTypeIMaterial2 >
                constexpr std::ptrdiff_t m_isz_sky_entity = 0x708; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_h_fog_cubemap_texture = 0x710; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_b_has_height_fog_end = 0x718; // bool
                constexpr std::ptrdiff_t m_b_first_time = 0x719; // bool
            }
            // Parent: c_base_entity
            // Fields count: 16
            //
            // Metadata:
            // NetworkVarNames: m_hGradientFogTexture (HRenderTextureStrong)
            // NetworkVarNames: m_flFogStartDistance (float)
            // NetworkVarNames: m_flFogEndDistance (float)
            // NetworkVarNames: m_bHeightFogEnabled (bool)
            // NetworkVarNames: m_flFogStartHeight (float)
            // NetworkVarNames: m_flFogEndHeight (float)
            // NetworkVarNames: m_flFarZ (float)
            // NetworkVarNames: m_flFogMaxOpacity (float)
            // NetworkVarNames: m_flFogFalloffExponent (float)
            // NetworkVarNames: m_flFogVerticalExponent (float)
            // NetworkVarNames: m_fogColor (Color)
            // NetworkVarNames: m_flFogStrength (float)
            // NetworkVarNames: m_flFadeTime (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bIsEnabled (bool)
            namespace c_gradient_fog {
                constexpr std::ptrdiff_t m_h_gradient_fog_texture = 0x6D0; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_fl_fog_start_distance = 0x6D8; // float32
                constexpr std::ptrdiff_t m_fl_fog_end_distance = 0x6DC; // float32
                constexpr std::ptrdiff_t m_b_height_fog_enabled = 0x6E0; // bool
                constexpr std::ptrdiff_t m_fl_fog_start_height = 0x6E4; // float32
                constexpr std::ptrdiff_t m_fl_fog_end_height = 0x6E8; // float32
                constexpr std::ptrdiff_t m_fl_far_z = 0x6EC; // float32
                constexpr std::ptrdiff_t m_fl_fog_max_opacity = 0x6F0; // float32
                constexpr std::ptrdiff_t m_fl_fog_falloff_exponent = 0x6F4; // float32
                constexpr std::ptrdiff_t m_fl_fog_vertical_exponent = 0x6F8; // float32
                constexpr std::ptrdiff_t m_fog_color = 0x6FC; // Color
                constexpr std::ptrdiff_t m_fl_fog_strength = 0x700; // float32
                constexpr std::ptrdiff_t m_fl_fade_time = 0x704; // float32
                constexpr std::ptrdiff_t m_b_start_disabled = 0x708; // bool
                constexpr std::ptrdiff_t m_b_is_enabled = 0x709; // bool
                constexpr std::ptrdiff_t m_b_gradient_fog_needs_textures = 0x70A; // bool
            }
            // Parent: c_base_entity
            // Fields count: 17
            //
            // Metadata:
            // NetworkVarNames: m_hLightProbeTexture (HRenderTextureStrong)
            // NetworkVarNames: m_hLightProbeDirectLightIndicesTexture (HRenderTextureStrong)
            // NetworkVarNames: m_hLightProbeDirectLightScalarsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_hLightProbeDirectLightShadowsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bMoveable (bool)
            // NetworkVarNames: m_nHandshake (int)
            // NetworkVarNames: m_nPriority (int)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_nLightProbeSizeX (int)
            // NetworkVarNames: m_nLightProbeSizeY (int)
            // NetworkVarNames: m_nLightProbeSizeZ (int)
            // NetworkVarNames: m_nLightProbeAtlasX (int)
            // NetworkVarNames: m_nLightProbeAtlasY (int)
            // NetworkVarNames: m_nLightProbeAtlasZ (int)
            // NetworkVarNames: m_bEnabled (bool)
            namespace c_env_light_probe_volume {
                constexpr std::ptrdiff_t m_h_light_probe_texture = 0x16A8; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_h_light_probe_direct_light_indices_texture = 0x16B0; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_h_light_probe_direct_light_scalars_texture = 0x16B8; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_h_light_probe_direct_light_shadows_texture = 0x16C0; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_v_box_mins = 0x16C8; // Vector
                constexpr std::ptrdiff_t m_v_box_maxs = 0x16D4; // Vector
                constexpr std::ptrdiff_t m_b_moveable = 0x16E0; // bool
                constexpr std::ptrdiff_t m_n_handshake = 0x16E4; // int32
                constexpr std::ptrdiff_t m_n_priority = 0x16E8; // int32
                constexpr std::ptrdiff_t m_b_start_disabled = 0x16EC; // bool
                constexpr std::ptrdiff_t m_n_light_probe_size_x = 0x16F0; // int32
                constexpr std::ptrdiff_t m_n_light_probe_size_y = 0x16F4; // int32
                constexpr std::ptrdiff_t m_n_light_probe_size_z = 0x16F8; // int32
                constexpr std::ptrdiff_t m_n_light_probe_atlas_x = 0x16FC; // int32
                constexpr std::ptrdiff_t m_n_light_probe_atlas_y = 0x1700; // int32
                constexpr std::ptrdiff_t m_n_light_probe_atlas_z = 0x1704; // int32
                constexpr std::ptrdiff_t m_b_enabled = 0x1711; // bool
            }
            // Parent: c_base_entity
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_flVisibilityStrength (float)
            // NetworkVarNames: m_flFogDistanceMultiplier (float)
            // NetworkVarNames: m_flFogMaxDensityMultiplier (float)
            // NetworkVarNames: m_flFadeTime (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bIsEnabled (bool)
            namespace c_player_visibility {
                constexpr std::ptrdiff_t m_fl_visibility_strength = 0x6D0; // float32
                constexpr std::ptrdiff_t m_fl_fog_distance_multiplier = 0x6D4; // float32
                constexpr std::ptrdiff_t m_fl_fog_max_density_multiplier = 0x6D8; // float32
                constexpr std::ptrdiff_t m_fl_fade_time = 0x6DC; // float32
                constexpr std::ptrdiff_t m_b_start_disabled = 0x6E0; // bool
                constexpr std::ptrdiff_t m_b_is_enabled = 0x6E1; // bool
            }
            // Parent: c_base_entity
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_flAutoExposureMin (float)
            // NetworkVarNames: m_flAutoExposureMax (float)
            // NetworkVarNames: m_flTonemapPercentTarget (float)
            // NetworkVarNames: m_flTonemapPercentBrightPixels (float)
            // NetworkVarNames: m_flTonemapMinAvgLum (float)
            // NetworkVarNames: m_flExposureAdaptationSpeedUp (float)
            // NetworkVarNames: m_flExposureAdaptationSpeedDown (float)
            // NetworkVarNames: m_flTonemapEVSmoothingRange (float)
            namespace c_tonemap_controller2 {
                constexpr std::ptrdiff_t m_fl_auto_exposure_min = 0x6D0; // float32
                constexpr std::ptrdiff_t m_fl_auto_exposure_max = 0x6D4; // float32
                constexpr std::ptrdiff_t m_fl_tonemap_percent_target = 0x6D8; // float32
                constexpr std::ptrdiff_t m_fl_tonemap_percent_bright_pixels = 0x6DC; // float32
                constexpr std::ptrdiff_t m_fl_tonemap_min_avg_lum = 0x6E0; // float32
                constexpr std::ptrdiff_t m_fl_exposure_adaptation_speed_up = 0x6E4; // float32
                constexpr std::ptrdiff_t m_fl_exposure_adaptation_speed_down = 0x6E8; // float32
                constexpr std::ptrdiff_t m_fl_tonemap_ev_smoothing_range = 0x6EC; // float32
            }
            // Parent: c_base_entity
            // Fields count: 28
            //
            // Metadata:
            // NetworkVarNames: m_flScattering (float)
            // NetworkVarNames: m_flAnisotropy (float)
            // NetworkVarNames: m_flFadeSpeed (float)
            // NetworkVarNames: m_flDrawDistance (float)
            // NetworkVarNames: m_flFadeInStart (float)
            // NetworkVarNames: m_flFadeInEnd (float)
            // NetworkVarNames: m_flIndirectStrength (float)
            // NetworkVarNames: m_nIndirectTextureDimX (int)
            // NetworkVarNames: m_nIndirectTextureDimY (int)
            // NetworkVarNames: m_nIndirectTextureDimZ (int)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_flStartAnisoTime (GameTime_t)
            // NetworkVarNames: m_flStartScatterTime (GameTime_t)
            // NetworkVarNames: m_flStartDrawDistanceTime (GameTime_t)
            // NetworkVarNames: m_flStartAnisotropy (float)
            // NetworkVarNames: m_flStartScattering (float)
            // NetworkVarNames: m_flStartDrawDistance (float)
            // NetworkVarNames: m_flDefaultAnisotropy (float)
            // NetworkVarNames: m_flDefaultScattering (float)
            // NetworkVarNames: m_flDefaultDrawDistance (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bEnableIndirect (bool)
            // NetworkVarNames: m_bIsMaster (bool)
            // NetworkVarNames: m_hFogIndirectTexture (HRenderTextureStrong)
            // NetworkVarNames: m_nForceRefreshCount (int)
            namespace c_env_volumetric_fog_controller {
                constexpr std::ptrdiff_t m_fl_scattering = 0x6D0; // float32
                constexpr std::ptrdiff_t m_fl_anisotropy = 0x6D4; // float32
                constexpr std::ptrdiff_t m_fl_fade_speed = 0x6D8; // float32
                constexpr std::ptrdiff_t m_fl_draw_distance = 0x6DC; // float32
                constexpr std::ptrdiff_t m_fl_fade_in_start = 0x6E0; // float32
                constexpr std::ptrdiff_t m_fl_fade_in_end = 0x6E4; // float32
                constexpr std::ptrdiff_t m_fl_indirect_strength = 0x6E8; // float32
                constexpr std::ptrdiff_t m_n_indirect_texture_dim_x = 0x6EC; // int32
                constexpr std::ptrdiff_t m_n_indirect_texture_dim_y = 0x6F0; // int32
                constexpr std::ptrdiff_t m_n_indirect_texture_dim_z = 0x6F4; // int32
                constexpr std::ptrdiff_t m_v_box_mins = 0x6F8; // Vector
                constexpr std::ptrdiff_t m_v_box_maxs = 0x704; // Vector
                constexpr std::ptrdiff_t m_b_active = 0x710; // bool
                constexpr std::ptrdiff_t m_fl_start_aniso_time = 0x714; // GameTime_t
                constexpr std::ptrdiff_t m_fl_start_scatter_time = 0x718; // GameTime_t
                constexpr std::ptrdiff_t m_fl_start_draw_distance_time = 0x71C; // GameTime_t
                constexpr std::ptrdiff_t m_fl_start_anisotropy = 0x720; // float32
                constexpr std::ptrdiff_t m_fl_start_scattering = 0x724; // float32
                constexpr std::ptrdiff_t m_fl_start_draw_distance = 0x728; // float32
                constexpr std::ptrdiff_t m_fl_default_anisotropy = 0x72C; // float32
                constexpr std::ptrdiff_t m_fl_default_scattering = 0x730; // float32
                constexpr std::ptrdiff_t m_fl_default_draw_distance = 0x734; // float32
                constexpr std::ptrdiff_t m_b_start_disabled = 0x738; // bool
                constexpr std::ptrdiff_t m_b_enable_indirect = 0x739; // bool
                constexpr std::ptrdiff_t m_b_is_master = 0x73A; // bool
                constexpr std::ptrdiff_t m_h_fog_indirect_texture = 0x740; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_n_force_refresh_count = 0x748; // int32
                constexpr std::ptrdiff_t m_b_first_time = 0x74C; // bool
            }
            // Parent: c_base_entity
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_flStrength (float)
            // NetworkVarNames: m_nFalloffShape (int)
            // NetworkVarNames: m_flFalloffExponent (float)
            namespace c_env_volumetric_fog_volume {
                constexpr std::ptrdiff_t m_b_active = 0x6D0; // bool
                constexpr std::ptrdiff_t m_v_box_mins = 0x6D4; // Vector
                constexpr std::ptrdiff_t m_v_box_maxs = 0x6E0; // Vector
                constexpr std::ptrdiff_t m_b_start_disabled = 0x6EC; // bool
                constexpr std::ptrdiff_t m_fl_strength = 0x6F0; // float32
                constexpr std::ptrdiff_t m_n_falloff_shape = 0x6F4; // int32
                constexpr std::ptrdiff_t m_fl_falloff_exponent = 0x6F8; // float32
            }
            // Parent: c_base_entity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_fog (fogparams_t)
            namespace c_fog_controller {
                constexpr std::ptrdiff_t m_fog = 0x6D0; // fogparams_t
                constexpr std::ptrdiff_t m_b_use_angles = 0x738; // bool
                constexpr std::ptrdiff_t m_i_changed_variables = 0x73C; // int32
            }
            // Parent: c_point_entity
            // Fields count: 0
            namespace c_info_target {
            }
            // Parent: c_point_entity
            // Fields count: 0
            namespace c_info_particle_target {
            }
            // Parent: c_base_entity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_nMode (int)
            // NetworkVarNames: m_vBoxSize (Vector)
            // NetworkVarNames: m_bEnabled (bool)
            namespace c_info_visibility_box {
                constexpr std::ptrdiff_t m_n_mode = 0x6D4; // int32
                constexpr std::ptrdiff_t m_v_box_size = 0x6D8; // Vector
                constexpr std::ptrdiff_t m_b_enabled = 0x6E4; // bool
            }
            // Parent: c_base_entity
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_worldName (string_t)
            // NetworkVarNames: m_layerName (string_t)
            // NetworkVarNames: m_bWorldLayerVisible (bool)
            // NetworkVarNames: m_bEntitiesSpawned (bool)
            namespace c_info_world_layer {
                constexpr std::ptrdiff_t m_p_output_on_entities_spawned = 0x6D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_world_name = 0x6F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_layer_name = 0x700; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_b_world_layer_visible = 0x708; // bool
                constexpr std::ptrdiff_t m_b_entities_spawned = 0x709; // bool
                constexpr std::ptrdiff_t m_b_create_as_child_spawn_group = 0x70A; // bool
                constexpr std::ptrdiff_t m_h_layer_spawn_group = 0x70C; // uint32
                constexpr std::ptrdiff_t m_b_world_layer_actually_visible = 0x710; // bool
            }
            // Parent: c_base_entity
            // Fields count: 25
            //
            // Metadata:
            // NetworkVarNames: m_FOV (float)
            // NetworkVarNames: m_Resolution (float)
            // NetworkVarNames: m_bFogEnable (bool)
            // NetworkVarNames: m_FogColor (Color)
            // NetworkVarNames: m_flFogStart (float)
            // NetworkVarNames: m_flFogEnd (float)
            // NetworkVarNames: m_flFogMaxDensity (float)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_bUseScreenAspectRatio (bool)
            // NetworkVarNames: m_flAspectRatio (float)
            // NetworkVarNames: m_bNoSky (bool)
            // NetworkVarNames: m_fBrightness (float)
            // NetworkVarNames: m_flZFar (float)
            // NetworkVarNames: m_flZNear (float)
            // NetworkVarNames: m_bCanHLTVUse (bool)
            // NetworkVarNames: m_bDofEnabled (bool)
            // NetworkVarNames: m_flDofNearBlurry (float)
            // NetworkVarNames: m_flDofNearCrisp (float)
            // NetworkVarNames: m_flDofFarCrisp (float)
            // NetworkVarNames: m_flDofFarBlurry (float)
            // NetworkVarNames: m_flDofTiltToGround (float)
            namespace c_point_camera {
                constexpr std::ptrdiff_t m_fov = 0x6D0; // float32
                constexpr std::ptrdiff_t m_resolution = 0x6D4; // float32
                constexpr std::ptrdiff_t m_b_fog_enable = 0x6D8; // bool
                constexpr std::ptrdiff_t m_fog_color = 0x6D9; // Color
                constexpr std::ptrdiff_t m_fl_fog_start = 0x6E0; // float32
                constexpr std::ptrdiff_t m_fl_fog_end = 0x6E4; // float32
                constexpr std::ptrdiff_t m_fl_fog_max_density = 0x6E8; // float32
                constexpr std::ptrdiff_t m_b_active = 0x6EC; // bool
                constexpr std::ptrdiff_t m_b_use_screen_aspect_ratio = 0x6ED; // bool
                constexpr std::ptrdiff_t m_fl_aspect_ratio = 0x6F0; // float32
                constexpr std::ptrdiff_t m_b_no_sky = 0x6F4; // bool
                constexpr std::ptrdiff_t m_f_brightness = 0x6F8; // float32
                constexpr std::ptrdiff_t m_fl_z_far = 0x6FC; // float32
                constexpr std::ptrdiff_t m_fl_z_near = 0x700; // float32
                constexpr std::ptrdiff_t m_b_can_hltv_use = 0x704; // bool
                constexpr std::ptrdiff_t m_b_dof_enabled = 0x705; // bool
                constexpr std::ptrdiff_t m_fl_dof_near_blurry = 0x708; // float32
                constexpr std::ptrdiff_t m_fl_dof_near_crisp = 0x70C; // float32
                constexpr std::ptrdiff_t m_fl_dof_far_crisp = 0x710; // float32
                constexpr std::ptrdiff_t m_fl_dof_far_blurry = 0x714; // float32
                constexpr std::ptrdiff_t m_fl_dof_tilt_to_ground = 0x718; // float32
                constexpr std::ptrdiff_t m_target_fov = 0x71C; // float32
                constexpr std::ptrdiff_t m_degrees_per_second = 0x720; // float32
                constexpr std::ptrdiff_t m_b_is_on = 0x724; // bool
                constexpr std::ptrdiff_t m_p_next = 0x728; // C_PointCamera*
            }
            // Parent: c_point_camera
            // Fields count: 1
            namespace c_point_camera_vfov {
                constexpr std::ptrdiff_t m_fl_vertical_fov = 0x730; // float32
            }
            // Parent: c_logical_entity
            // Fields count: 12
            namespace c_point_template {
                constexpr std::ptrdiff_t m_isz_world_name = 0x6D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_isz_source2_entity_lump_name = 0x6D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_isz_entity_filter_name = 0x6E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_fl_timeout_interval = 0x6E8; // float32
                constexpr std::ptrdiff_t m_b_asynchronously_spawn_entities = 0x6EC; // bool
                constexpr std::ptrdiff_t m_p_output_on_spawned = 0x6F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_client_only_entity_behavior = 0x718; // PointTemplateClientOnlyEntityBehavior_t
                constexpr std::ptrdiff_t m_owner_spawn_group_type = 0x71C; // PointTemplateOwnerSpawnGroupType_t
                constexpr std::ptrdiff_t m_created_spawn_group_handles = 0x720; // CUtlVector< uint32 >
                constexpr std::ptrdiff_t m_spawned_entity_handles = 0x738; // CUtlVector< CEntityHandle >
                constexpr std::ptrdiff_t m_script_spawn_callback = 0x750; // HSCRIPT
                constexpr std::ptrdiff_t m_script_callback_scope = 0x758; // HSCRIPT
            }
            // Parent: c_base_entity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_iszSoundAreaType (string_t)
            // NetworkVarNames: m_vPos (Vector)
            namespace c_sound_area_entity_base {
                constexpr std::ptrdiff_t m_b_disabled = 0x6D0; // bool
                constexpr std::ptrdiff_t m_b_was_enabled = 0x6D8; // bool
                constexpr std::ptrdiff_t m_isz_sound_area_type = 0x6E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_v_pos = 0x6E8; // Vector
            }
            // Parent: c_sound_area_entity_base
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            namespace c_sound_area_entity_sphere {
                constexpr std::ptrdiff_t m_fl_radius = 0x6F4; // float32
            }
            // Parent: c_sound_area_entity_base
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMin (Vector)
            // NetworkVarNames: m_vMax (Vector)
            namespace c_sound_area_entity_oriented_box {
                constexpr std::ptrdiff_t m_v_min = 0x6F4; // Vector
                constexpr std::ptrdiff_t m_v_max = 0x700; // Vector
            }
            // Parent: c_base_entity
            // Fields count: 4
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_aPlayerControllers (CHandle< CBasePlayerController >)
            // NetworkVarNames: m_aPlayers (CHandle< C_BasePlayerPawn >)
            // NetworkVarNames: m_iScore (int32)
            // NetworkVarNames: m_szTeamname (char)
            namespace c_team {
                constexpr std::ptrdiff_t m_a_player_controllers = 0x6D0; // C_NetworkUtlVectorBase< CHandle< CBasePlayerController > >
                constexpr std::ptrdiff_t m_a_players = 0x6E8; // C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > >
                constexpr std::ptrdiff_t m_i_score = 0x700; // int32
                constexpr std::ptrdiff_t m_sz_teamname = 0x704; // char[129]
            }
            // Parent: c_base_entity
            // Fields count: 15
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkUserGroupProxy
            // MNetworkUserGroupProxy
            // MNetworkIncludeByUserGroup
            // NetworkVarNames: m_nTickBase (uint32)
            // NetworkVarNames: m_hPawn (CHandle< CBasePlayerPawn>)
            // NetworkVarNames: m_iConnected (PlayerConnectedState)
            // NetworkVarNames: m_iszPlayerName (char)
            // NetworkVarNames: m_steamID (uint64)
            // NetworkVarNames: m_iDesiredFOV (uint32)
            // MNetworkReplayCompatField
            namespace c_base_player_controller {
                constexpr std::ptrdiff_t m_n_final_predicted_tick = 0x6D8; // int32
                constexpr std::ptrdiff_t m_command_context = 0x6E0; // C_CommandContext
                constexpr std::ptrdiff_t m_n_in_buttons_which_are_toggles = 0x778; // uint64
                constexpr std::ptrdiff_t m_n_tick_base = 0x780; // uint32
                constexpr std::ptrdiff_t m_h_pawn = 0x784; // CHandle< C_BasePlayerPawn >
                constexpr std::ptrdiff_t m_h_predicted_pawn = 0x788; // CHandle< C_BasePlayerPawn >
                constexpr std::ptrdiff_t m_n_split_screen_slot = 0x78C; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_h_split_owner = 0x790; // CHandle< CBasePlayerController >
                constexpr std::ptrdiff_t m_h_split_screen_players = 0x798; // CUtlVector< CHandle< CBasePlayerController > >
                constexpr std::ptrdiff_t m_b_is_hltv = 0x7B0; // bool
                constexpr std::ptrdiff_t m_i_connected = 0x7B4; // PlayerConnectedState
                constexpr std::ptrdiff_t m_isz_player_name = 0x7B8; // char[128]
                constexpr std::ptrdiff_t m_steam_id = 0x840; // uint64
                constexpr std::ptrdiff_t m_b_is_local_player_controller = 0x848; // bool
                constexpr std::ptrdiff_t m_i_desired_fov = 0x84C; // uint32
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_base_player_v_data {
                constexpr std::ptrdiff_t m_s_model_name = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
                constexpr std::ptrdiff_t m_fl_head_damage_multiplier = 0x108; // CSkillFloat
                constexpr std::ptrdiff_t m_fl_chest_damage_multiplier = 0x118; // CSkillFloat
                constexpr std::ptrdiff_t m_fl_stomach_damage_multiplier = 0x128; // CSkillFloat
                constexpr std::ptrdiff_t m_fl_arm_damage_multiplier = 0x138; // CSkillFloat
                constexpr std::ptrdiff_t m_fl_leg_damage_multiplier = 0x148; // CSkillFloat
                constexpr std::ptrdiff_t m_fl_hold_breath_time = 0x158; // float32
                constexpr std::ptrdiff_t m_fl_drowning_damage_interval = 0x15C; // float32
                constexpr std::ptrdiff_t m_n_drowning_damage_initial = 0x160; // int32
                constexpr std::ptrdiff_t m_n_drowning_damage_max = 0x164; // int32
                constexpr std::ptrdiff_t m_n_water_speed = 0x168; // int32
                constexpr std::ptrdiff_t m_fl_use_range = 0x16C; // float32
                constexpr std::ptrdiff_t m_fl_use_angle_tolerance = 0x170; // float32
                constexpr std::ptrdiff_t m_fl_crouch_time = 0x174; // float32
            }
            // Parent: None
            // Fields count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_base_player_weapon_v_data {
                constexpr std::ptrdiff_t m_sz_world_model = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
                constexpr std::ptrdiff_t m_b_built_right_handed = 0x108; // bool
                constexpr std::ptrdiff_t m_b_allow_flipping = 0x109; // bool
                constexpr std::ptrdiff_t m_s_muzzle_attachment = 0x110; // CUtlString
                constexpr std::ptrdiff_t m_sz_muzzle_flash_particle = 0x118; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
                constexpr std::ptrdiff_t m_i_flags = 0x1F8; // ItemFlagTypes_t
                constexpr std::ptrdiff_t m_n_primary_ammo_type = 0x1F9; // AmmoIndex_t
                constexpr std::ptrdiff_t m_n_secondary_ammo_type = 0x1FA; // AmmoIndex_t
                constexpr std::ptrdiff_t m_i_max_clip1 = 0x1FC; // int32
                constexpr std::ptrdiff_t m_i_max_clip2 = 0x200; // int32
                constexpr std::ptrdiff_t m_i_default_clip1 = 0x204; // int32
                constexpr std::ptrdiff_t m_i_default_clip2 = 0x208; // int32
                constexpr std::ptrdiff_t m_i_weight = 0x20C; // int32
                constexpr std::ptrdiff_t m_b_auto_switch_to = 0x210; // bool
                constexpr std::ptrdiff_t m_b_auto_switch_from = 0x211; // bool
                constexpr std::ptrdiff_t m_i_rumble_effect = 0x214; // RumbleEffect_t
                constexpr std::ptrdiff_t m_b_linked_cooldowns = 0x218; // bool
                constexpr std::ptrdiff_t m_a_shoot_sounds = 0x220; // CUtlMap< WeaponSound_t, CSoundEventName >
                constexpr std::ptrdiff_t m_i_slot = 0x240; // int32
                constexpr std::ptrdiff_t m_i_position = 0x244; // int32
            }
            // Parent: c_skeleton_animation_controller
            // Fields count: 13
            //
            // Metadata:
            // NetworkVarNames: m_animGraphNetworkedVars (CAnimGraphNetworkedVariables)
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flSeqStartTime (GameTime_t)
            // NetworkVarNames: m_flSeqFixedCycle (float)
            // NetworkVarNames: m_nAnimLoopMode (AnimLoopMode_t)
            namespace c_base_anim_graph_controller {
                constexpr std::ptrdiff_t m_anim_graph_networked_vars = 0x18; // CAnimGraphNetworkedVariables
                constexpr std::ptrdiff_t m_b_sequence_finished = 0x14A8; // bool
                constexpr std::ptrdiff_t m_fl_sound_sync_time = 0x14AC; // float32
                constexpr std::ptrdiff_t m_h_sequence = 0x14B0; // HSequence
                constexpr std::ptrdiff_t m_fl_seq_start_time = 0x14B4; // GameTime_t
                constexpr std::ptrdiff_t m_fl_seq_fixed_cycle = 0x14B8; // float32
                constexpr std::ptrdiff_t m_n_anim_loop_mode = 0x14BC; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_fl_playback_rate = 0x14C0; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_n_notify_state = 0x14CC; // SequenceFinishNotifyState_t
                constexpr std::ptrdiff_t m_b_networked_animation_inputs_changed = 0x14CE; // bool
                constexpr std::ptrdiff_t m_b_networked_sequence_changed = 0x14CF; // bool
                constexpr std::ptrdiff_t m_b_last_update_skipped = 0x14D0; // bool
                constexpr std::ptrdiff_t m_fl_prev_anim_update_time = 0x14D4; // GameTime_t
            }
            // Parent: c_base_entity
            // Fields count: 31
            //
            // Metadata:
            // NetworkVarNames: m_CRenderComponent (CRenderComponent::Storage_t)
            // NetworkVarNames: m_CHitboxComponent (CHitboxComponent::Storage_t)
            // NetworkVarNames: m_nRenderMode (RenderMode_t)
            // NetworkVarNames: m_nRenderFX (RenderFx_t)
            // NetworkVarNames: m_clrRender (Color)
            // NetworkVarNames: m_vecRenderAttributes (EntityRenderAttribute_t)
            // NetworkVarNames: m_bRenderToCubemaps (bool)
            // NetworkVarNames: m_Collision (CCollisionProperty)
            // NetworkVarNames: m_Glow (CGlowProperty)
            // NetworkVarNames: m_flGlowBackfaceMult (float)
            // NetworkVarNames: m_fadeMinDist (float32)
            // NetworkVarNames: m_fadeMaxDist (float32)
            // NetworkVarNames: m_flFadeScale (float32)
            // NetworkVarNames: m_flShadowStrength (float32)
            // NetworkVarNames: m_nObjectCulling (uint8)
            // NetworkVarNames: m_nAddDecal (int)
            // NetworkVarNames: m_vDecalPosition (Vector)
            // NetworkVarNames: m_vDecalForwardAxis (Vector)
            // NetworkVarNames: m_flDecalHealBloodRate (float)
            // NetworkVarNames: m_flDecalHealHeightRate (float)
            // NetworkVarNames: m_ConfigEntitiesToPropagateMaterialDecalsTo (CHandle< C_BaseModelEntity >)
            namespace c_base_model_entity {
                constexpr std::ptrdiff_t m_c_render_component = 0x9A0; // CRenderComponent*
                constexpr std::ptrdiff_t m_c_hitbox_component = 0x9A8; // CHitboxComponent
                constexpr std::ptrdiff_t m_b_init_model_effects = 0x9F0; // bool
                constexpr std::ptrdiff_t m_b_is_static_prop = 0x9F1; // bool
                constexpr std::ptrdiff_t m_n_last_add_decal = 0x9F4; // int32
                constexpr std::ptrdiff_t m_n_decals_added = 0x9F8; // int32
                constexpr std::ptrdiff_t m_i_old_health = 0x9FC; // int32
                constexpr std::ptrdiff_t m_n_render_mode = 0xA00; // RenderMode_t
                constexpr std::ptrdiff_t m_n_render_fx = 0xA01; // RenderFx_t
                constexpr std::ptrdiff_t m_b_allow_fade_in_view = 0xA02; // bool
                constexpr std::ptrdiff_t m_clr_render = 0xA03; // Color
                constexpr std::ptrdiff_t m_vec_render_attributes = 0xA08; // C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t >
                constexpr std::ptrdiff_t m_b_render_to_cubemaps = 0xA70; // bool
                constexpr std::ptrdiff_t m_collision = 0xA78; // CCollisionProperty
                constexpr std::ptrdiff_t m_glow = 0xB28; // CGlowProperty
                constexpr std::ptrdiff_t m_fl_glow_backface_mult = 0xB80; // float32
                constexpr std::ptrdiff_t m_fade_min_dist = 0xB84; // float32
                constexpr std::ptrdiff_t m_fade_max_dist = 0xB88; // float32
                constexpr std::ptrdiff_t m_fl_fade_scale = 0xB8C; // float32
                constexpr std::ptrdiff_t m_fl_shadow_strength = 0xB90; // float32
                constexpr std::ptrdiff_t m_n_object_culling = 0xB94; // uint8
                constexpr std::ptrdiff_t m_n_add_decal = 0xB98; // int32
                constexpr std::ptrdiff_t m_v_decal_position = 0xB9C; // Vector
                constexpr std::ptrdiff_t m_v_decal_forward_axis = 0xBA8; // Vector
                constexpr std::ptrdiff_t m_fl_decal_heal_blood_rate = 0xBB4; // float32
                constexpr std::ptrdiff_t m_fl_decal_heal_height_rate = 0xBB8; // float32
                constexpr std::ptrdiff_t m_config_entities_to_propagate_material_decals_to = 0xBC0; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
                constexpr std::ptrdiff_t m_vec_view_offset = 0xBD8; // CNetworkViewOffsetVector
                constexpr std::ptrdiff_t m_p_client_alpha_property = 0xC08; // CClientAlphaProperty*
                constexpr std::ptrdiff_t m_client_override_tint = 0xC10; // Color
                constexpr std::ptrdiff_t m_b_use_client_override_tint = 0xC14; // bool
            }
            // Parent: c_base_model_entity
            // Fields count: 0
            namespace c_server_only_model_entity {
            }
            // Parent: c_base_model_entity
            // Fields count: 0
            namespace c_model_point_entity {
            }
            // Parent: c_logical_entity
            // Fields count: 7
            namespace c_logic_relay {
                constexpr std::ptrdiff_t m_on_trigger = 0x6D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_on_spawn = 0x6F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_b_disabled = 0x720; // bool
                constexpr std::ptrdiff_t m_b_wait_for_refire = 0x721; // bool
                constexpr std::ptrdiff_t m_b_trigger_once = 0x722; // bool
                constexpr std::ptrdiff_t m_b_fast_retrigger = 0x723; // bool
                constexpr std::ptrdiff_t m_b_passthough_caller = 0x724; // bool
            }
            // Parent: c_base_model_entity
            // Fields count: 24
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_szSnapshotFileName (char)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_bFrozen (bool)
            // NetworkVarNames: m_flFreezeTransitionDuration (float)
            // NetworkVarNames: m_nStopType (int)
            // NetworkVarNames: m_bAnimateDuringGameplayPause (bool)
            // NetworkVarNames: m_iEffectIndex (HParticleSystemDefinitionStrong)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_flPreSimTime (float32)
            // NetworkVarNames: m_vServerControlPoints (Vector)
            // NetworkVarNames: m_iServerControlPointAssignments (uint8)
            // NetworkVarNames: m_hControlPointEnts (CHandle< CBaseEntity >)
            // NetworkVarNames: m_bNoSave (bool)
            // NetworkVarNames: m_bNoFreeze (bool)
            // NetworkVarNames: m_bNoRamp (bool)
            namespace c_particle_system {
                constexpr std::ptrdiff_t m_sz_snapshot_file_name = 0xC50; // char[512]
                constexpr std::ptrdiff_t m_b_active = 0xE50; // bool
                constexpr std::ptrdiff_t m_b_frozen = 0xE51; // bool
                constexpr std::ptrdiff_t m_fl_freeze_transition_duration = 0xE54; // float32
                constexpr std::ptrdiff_t m_n_stop_type = 0xE58; // int32
                constexpr std::ptrdiff_t m_b_animate_during_gameplay_pause = 0xE5C; // bool
                constexpr std::ptrdiff_t m_i_effect_index = 0xE60; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
                constexpr std::ptrdiff_t m_fl_start_time = 0xE68; // GameTime_t
                constexpr std::ptrdiff_t m_fl_pre_sim_time = 0xE6C; // float32
                constexpr std::ptrdiff_t m_v_server_control_points = 0xE70; // Vector[4]
                constexpr std::ptrdiff_t m_i_server_control_point_assignments = 0xEA0; // uint8[4]
                constexpr std::ptrdiff_t m_h_control_point_ents = 0xEA4; // CHandle< C_BaseEntity >[64]
                constexpr std::ptrdiff_t m_b_no_save = 0xFA4; // bool
                constexpr std::ptrdiff_t m_b_no_freeze = 0xFA5; // bool
                constexpr std::ptrdiff_t m_b_no_ramp = 0xFA6; // bool
                constexpr std::ptrdiff_t m_b_start_active = 0xFA7; // bool
                constexpr std::ptrdiff_t m_isz_effect_name = 0xFA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_isz_control_point_names = 0xFB0; // CUtlSymbolLarge[64]
                constexpr std::ptrdiff_t m_n_data_cp = 0x11B0; // int32
                constexpr std::ptrdiff_t m_vec_data_cp_value = 0x11B4; // Vector
                constexpr std::ptrdiff_t m_n_tint_cp = 0x11C0; // int32
                constexpr std::ptrdiff_t m_clr_tint = 0x11C4; // Color
                constexpr std::ptrdiff_t m_b_old_active = 0x11E8; // bool
                constexpr std::ptrdiff_t m_b_old_frozen = 0x11E9; // bool
            }
            // Parent: c_base_entity
            // Fields count: 16
            //
            // Metadata:
            // NetworkVarNames: m_flParticleSpacing (float)
            // NetworkVarNames: m_flSlack (float)
            // NetworkVarNames: m_flRadius (float)
            // NetworkVarNames: m_ColorTint (Color)
            // NetworkVarNames: m_nEffectState (int)
            // NetworkVarNames: m_iEffectIndex (HParticleSystemDefinitionStrong)
            // NetworkVarNames: m_PathNodes_Position (Vector)
            // NetworkVarNames: m_PathNodes_TangentIn (Vector)
            // NetworkVarNames: m_PathNodes_TangentOut (Vector)
            // NetworkVarNames: m_PathNodes_Color (Vector)
            // NetworkVarNames: m_PathNodes_PinEnabled (bool)
            // NetworkVarNames: m_PathNodes_RadiusScale (float)
            namespace c_path_particle_rope {
                constexpr std::ptrdiff_t m_b_start_active = 0x6D0; // bool
                constexpr std::ptrdiff_t m_fl_max_simulation_time = 0x6D4; // float32
                constexpr std::ptrdiff_t m_isz_effect_name = 0x6D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_path_nodes_name = 0x6E0; // CUtlVector< CUtlSymbolLarge >
                constexpr std::ptrdiff_t m_fl_particle_spacing = 0x6F8; // float32
                constexpr std::ptrdiff_t m_fl_slack = 0x6FC; // float32
                constexpr std::ptrdiff_t m_fl_radius = 0x700; // float32
                constexpr std::ptrdiff_t m_color_tint = 0x704; // Color
                constexpr std::ptrdiff_t m_n_effect_state = 0x708; // int32
                constexpr std::ptrdiff_t m_i_effect_index = 0x710; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
                constexpr std::ptrdiff_t m_path_nodes_position = 0x718; // C_NetworkUtlVectorBase< Vector >
                constexpr std::ptrdiff_t m_path_nodes_tangent_in = 0x730; // C_NetworkUtlVectorBase< Vector >
                constexpr std::ptrdiff_t m_path_nodes_tangent_out = 0x748; // C_NetworkUtlVectorBase< Vector >
                constexpr std::ptrdiff_t m_path_nodes_color = 0x760; // C_NetworkUtlVectorBase< Vector >
                constexpr std::ptrdiff_t m_path_nodes_pin_enabled = 0x778; // C_NetworkUtlVectorBase< bool >
                constexpr std::ptrdiff_t m_path_nodes_radius_scale = 0x790; // C_NetworkUtlVectorBase< float32 >
            }
            // Parent: c_path_particle_rope
            // Fields count: 0
            namespace c_path_particle_rope_alias_path_particle_rope_clientside {
            }
            // Parent: c_base_model_entity
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_Flags (uint8)
            // NetworkVarNames: m_LightStyle (uint8)
            // NetworkVarNames: m_Radius (float32)
            // NetworkVarNames: m_Exponent (int32)
            // NetworkVarNames: m_InnerAngle (float32)
            // NetworkVarNames: m_OuterAngle (float32)
            // NetworkVarNames: m_SpotRadius (float32)
            namespace c_dynamic_light {
                constexpr std::ptrdiff_t m_flags = 0xC50; // uint8
                constexpr std::ptrdiff_t m_light_style = 0xC51; // uint8
                constexpr std::ptrdiff_t m_radius = 0xC54; // float32
                constexpr std::ptrdiff_t m_exponent = 0xC58; // int32
                constexpr std::ptrdiff_t m_inner_angle = 0xC5C; // float32
                constexpr std::ptrdiff_t m_outer_angle = 0xC60; // float32
                constexpr std::ptrdiff_t m_spot_radius = 0xC64; // float32
            }
            // Parent: c_point_entity
            // Fields count: 9
            //
            // Metadata:
            // NetworkVarNames: m_iszOverlayNames (string_t)
            // NetworkVarNames: m_flOverlayTimes (float32)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_iDesiredOverlay (int32)
            // NetworkVarNames: m_bIsActive (bool)
            namespace c_env_screen_overlay {
                constexpr std::ptrdiff_t m_isz_overlay_names = 0x6D0; // CUtlSymbolLarge[10]
                constexpr std::ptrdiff_t m_fl_overlay_times = 0x720; // float32[10]
                constexpr std::ptrdiff_t m_fl_start_time = 0x748; // GameTime_t
                constexpr std::ptrdiff_t m_i_desired_overlay = 0x74C; // int32
                constexpr std::ptrdiff_t m_b_is_active = 0x750; // bool
                constexpr std::ptrdiff_t m_b_was_active = 0x751; // bool
                constexpr std::ptrdiff_t m_i_cached_desired_overlay = 0x754; // int32
                constexpr std::ptrdiff_t m_i_current_overlay = 0x758; // int32
                constexpr std::ptrdiff_t m_fl_current_overlay_time = 0x75C; // GameTime_t
            }
            // Parent: c_base_model_entity
            // Fields count: 3
            namespace c_func_track_train {
                constexpr std::ptrdiff_t m_n_long_axis = 0xC50; // int32
                constexpr std::ptrdiff_t m_fl_radius = 0xC54; // float32
                constexpr std::ptrdiff_t m_fl_line_length = 0xC58; // float32
            }
            // Parent: c_glow_overlay
            // Fields count: 7
            namespace c_light_glow_overlay {
                constexpr std::ptrdiff_t m_vec_origin = 0xCC; // Vector
                constexpr std::ptrdiff_t m_vec_direction = 0xD8; // Vector
                constexpr std::ptrdiff_t m_n_min_dist = 0xE4; // int32
                constexpr std::ptrdiff_t m_n_max_dist = 0xE8; // int32
                constexpr std::ptrdiff_t m_n_outer_max_dist = 0xEC; // int32
                constexpr std::ptrdiff_t m_b_one_sided = 0xF0; // bool
                constexpr std::ptrdiff_t m_b_modulate_by_dot = 0xF1; // bool
            }
            // Parent: c_base_model_entity
            // Fields count: 8
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_nHorizontalSize (uint32)
            // NetworkVarNames: m_nVerticalSize (uint32)
            // NetworkVarNames: m_nMinDist (uint32)
            // NetworkVarNames: m_nMaxDist (uint32)
            // NetworkVarNames: m_nOuterMaxDist (uint32)
            // NetworkVarNames: m_flGlowProxySize (float32)
            // NetworkVarNames: m_flHDRColorScale (float32)
            namespace c_light_glow {
                constexpr std::ptrdiff_t m_n_horizontal_size = 0xC50; // uint32
                constexpr std::ptrdiff_t m_n_vertical_size = 0xC54; // uint32
                constexpr std::ptrdiff_t m_n_min_dist = 0xC58; // uint32
                constexpr std::ptrdiff_t m_n_max_dist = 0xC5C; // uint32
                constexpr std::ptrdiff_t m_n_outer_max_dist = 0xC60; // uint32
                constexpr std::ptrdiff_t m_fl_glow_proxy_size = 0xC64; // float32
                constexpr std::ptrdiff_t m_fl_hdr_color_scale = 0xC68; // float32
                constexpr std::ptrdiff_t m_glow = 0xC70; // C_LightGlowOverlay
            }
            // Parent: c_base_entity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
            namespace c_ragdoll_manager {
                constexpr std::ptrdiff_t m_i_current_max_ragdoll_count = 0x6D0; // int8
            }
            // Parent: c_base_model_entity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flLightScale (float32)
            // NetworkVarNames: m_Radius (float32)
            namespace c_spotlight_end {
                constexpr std::ptrdiff_t m_fl_light_scale = 0xC50; // float32
                constexpr std::ptrdiff_t m_radius = 0xC54; // float32
            }
            // Parent: c_base_entity
            // Fields count: 25
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_bUpdateOnClient (bool)
            // NetworkVarNames: m_nInputType (ValueRemapperInputType_t)
            // NetworkVarNames: m_hRemapLineStart (CHandle< CBaseEntity>)
            // NetworkVarNames: m_hRemapLineEnd (CHandle< CBaseEntity>)
            // NetworkVarNames: m_flMaximumChangePerSecond (float)
            // NetworkVarNames: m_flDisengageDistance (float)
            // NetworkVarNames: m_flEngageDistance (float)
            // NetworkVarNames: m_bRequiresUseKey (bool)
            // NetworkVarNames: m_nOutputType (ValueRemapperOutputType_t)
            // NetworkVarNames: m_hOutputEntities (CHandle< C_BaseEntity >)
            // NetworkVarNames: m_nHapticsType (ValueRemapperHapticsType_t)
            // NetworkVarNames: m_nMomentumType (ValueRemapperMomentumType_t)
            // NetworkVarNames: m_flMomentumModifier (float)
            // NetworkVarNames: m_flSnapValue (float)
            // NetworkVarNames: m_nRatchetType (ValueRemapperRatchetType_t)
            // NetworkVarNames: m_flInputOffset (float)
            namespace c_point_value_remapper {
                constexpr std::ptrdiff_t m_b_disabled = 0x6D0; // bool
                constexpr std::ptrdiff_t m_b_disabled_old = 0x6D1; // bool
                constexpr std::ptrdiff_t m_b_update_on_client = 0x6D2; // bool
                constexpr std::ptrdiff_t m_n_input_type = 0x6D4; // ValueRemapperInputType_t
                constexpr std::ptrdiff_t m_h_remap_line_start = 0x6D8; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_h_remap_line_end = 0x6DC; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_fl_maximum_change_per_second = 0x6E0; // float32
                constexpr std::ptrdiff_t m_fl_disengage_distance = 0x6E4; // float32
                constexpr std::ptrdiff_t m_fl_engage_distance = 0x6E8; // float32
                constexpr std::ptrdiff_t m_b_requires_use_key = 0x6EC; // bool
                constexpr std::ptrdiff_t m_n_output_type = 0x6F0; // ValueRemapperOutputType_t
                constexpr std::ptrdiff_t m_h_output_entities = 0x6F8; // C_NetworkUtlVectorBase< CHandle< C_BaseEntity > >
                constexpr std::ptrdiff_t m_n_haptics_type = 0x710; // ValueRemapperHapticsType_t
                constexpr std::ptrdiff_t m_n_momentum_type = 0x714; // ValueRemapperMomentumType_t
                constexpr std::ptrdiff_t m_fl_momentum_modifier = 0x718; // float32
                constexpr std::ptrdiff_t m_fl_snap_value = 0x71C; // float32
                constexpr std::ptrdiff_t m_fl_current_momentum = 0x720; // float32
                constexpr std::ptrdiff_t m_n_ratchet_type = 0x724; // ValueRemapperRatchetType_t
                constexpr std::ptrdiff_t m_fl_ratchet_offset = 0x728; // float32
                constexpr std::ptrdiff_t m_fl_input_offset = 0x72C; // float32
                constexpr std::ptrdiff_t m_b_engaged = 0x730; // bool
                constexpr std::ptrdiff_t m_b_first_update = 0x731; // bool
                constexpr std::ptrdiff_t m_fl_previous_value = 0x734; // float32
                constexpr std::ptrdiff_t m_fl_previous_update_tick_time = 0x738; // GameTime_t
                constexpr std::ptrdiff_t m_vec_previous_test_point = 0x73C; // Vector
            }
            // Parent: c_model_point_entity
            // Fields count: 12
            //
            // Metadata:
            // NetworkVarNames: m_messageText (char)
            // NetworkVarNames: m_FontName (char)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bFullbright (bool)
            // NetworkVarNames: m_flWorldUnitsPerPx (float)
            // NetworkVarNames: m_flFontSize (float)
            // NetworkVarNames: m_flDepthOffset (float)
            // NetworkVarNames: m_Color (Color)
            // NetworkVarNames: m_nJustifyHorizontal (PointWorldTextJustifyHorizontal_t)
            // NetworkVarNames: m_nJustifyVertical (PointWorldTextJustifyVertical_t)
            // NetworkVarNames: m_nReorientMode (PointWorldTextReorientMode_t)
            namespace c_point_world_text {
                constexpr std::ptrdiff_t m_b_force_recreate_next_update = 0xC58; // bool
                constexpr std::ptrdiff_t m_message_text = 0xC68; // char[512]
                constexpr std::ptrdiff_t m_font_name = 0xE68; // char[64]
                constexpr std::ptrdiff_t m_b_enabled = 0xEA8; // bool
                constexpr std::ptrdiff_t m_b_fullbright = 0xEA9; // bool
                constexpr std::ptrdiff_t m_fl_world_units_per_px = 0xEAC; // float32
                constexpr std::ptrdiff_t m_fl_font_size = 0xEB0; // float32
                constexpr std::ptrdiff_t m_fl_depth_offset = 0xEB4; // float32
                constexpr std::ptrdiff_t m_color = 0xEB8; // Color
                constexpr std::ptrdiff_t m_n_justify_horizontal = 0xEBC; // PointWorldTextJustifyHorizontal_t
                constexpr std::ptrdiff_t m_n_justify_vertical = 0xEC0; // PointWorldTextJustifyVertical_t
                constexpr std::ptrdiff_t m_n_reorient_mode = 0xEC4; // PointWorldTextReorientMode_t
            }
            // Parent: c_base_entity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Handle (CHandle< CBaseEntity>)
            // NetworkVarNames: m_bSendHandle (bool)
            namespace c_handle_test {
                constexpr std::ptrdiff_t m_handle = 0x6D0; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_b_send_handle = 0x6D4; // bool
            }
            // Parent: c_base_entity
            // Fields count: 0
            namespace c_client_script_entity {
            }
            // Parent: c_base_entity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            namespace c_env_wind {
                constexpr std::ptrdiff_t m_env_wind_shared = 0x6D0; // C_EnvWindShared
            }
            // Parent: c_base_model_entity
            // Fields count: 0
            namespace c_base_toggle {
            }
            // Parent: c_base_toggle
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle< C_BaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            namespace c_base_button {
                constexpr std::ptrdiff_t m_glow_entity = 0xC50; // CHandle< C_BaseModelEntity >
                constexpr std::ptrdiff_t m_usable = 0xC54; // bool
                constexpr std::ptrdiff_t m_sz_display_text = 0xC58; // CUtlSymbolLarge
            }
            // Parent: c_base_model_entity
            // Fields count: 0
            namespace c_precipitation_blocker {
            }
            // Parent: c_base_model_entity
            // Fields count: 13
            //
            // Metadata:
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_flFadeInStart (float32)
            // NetworkVarNames: m_flFadeInLength (float32)
            // NetworkVarNames: m_flFadeOutModelStart (float32)
            // NetworkVarNames: m_flFadeOutModelLength (float32)
            // NetworkVarNames: m_flFadeOutStart (float32)
            // NetworkVarNames: m_flFadeOutLength (float32)
            // NetworkVarNames: m_nDissolveType (EntityDisolveType_t)
            // NetworkVarNames: m_vDissolverOrigin (Vector)
            // NetworkVarNames: m_nMagnitude (uint32)
            namespace c_entity_dissolve {
                constexpr std::ptrdiff_t m_fl_start_time = 0xC58; // GameTime_t
                constexpr std::ptrdiff_t m_fl_fade_in_start = 0xC5C; // float32
                constexpr std::ptrdiff_t m_fl_fade_in_length = 0xC60; // float32
                constexpr std::ptrdiff_t m_fl_fade_out_model_start = 0xC64; // float32
                constexpr std::ptrdiff_t m_fl_fade_out_model_length = 0xC68; // float32
                constexpr std::ptrdiff_t m_fl_fade_out_start = 0xC6C; // float32
                constexpr std::ptrdiff_t m_fl_fade_out_length = 0xC70; // float32
                constexpr std::ptrdiff_t m_fl_next_spark_time = 0xC74; // GameTime_t
                constexpr std::ptrdiff_t m_n_dissolve_type = 0xC78; // EntityDisolveType_t
                constexpr std::ptrdiff_t m_v_dissolver_origin = 0xC7C; // Vector
                constexpr std::ptrdiff_t m_n_magnitude = 0xC88; // uint32
                constexpr std::ptrdiff_t m_b_core_explode = 0xC8C; // bool
                constexpr std::ptrdiff_t m_b_linked_to_server_ent = 0xC8D; // bool
            }
            // Parent: c_model_point_entity
            // Fields count: 0
            namespace c_env_projected_texture {
            }
            // Parent: c_base_model_entity
            // Fields count: 9
            //
            // Metadata:
            // NetworkVarNames: m_hDecalMaterial (HMaterialStrong)
            // NetworkVarNames: m_flWidth (float)
            // NetworkVarNames: m_flHeight (float)
            // NetworkVarNames: m_flDepth (float)
            // NetworkVarNames: m_nRenderOrder (uint32)
            // NetworkVarNames: m_bProjectOnWorld (bool)
            // NetworkVarNames: m_bProjectOnCharacters (bool)
            // NetworkVarNames: m_bProjectOnWater (bool)
            // NetworkVarNames: m_flDepthSortBias (float)
            namespace c_env_decal {
                constexpr std::ptrdiff_t m_h_decal_material = 0xC50; // CStrongHandle< InfoForResourceTypeIMaterial2 >
                constexpr std::ptrdiff_t m_fl_width = 0xC58; // float32
                constexpr std::ptrdiff_t m_fl_height = 0xC5C; // float32
                constexpr std::ptrdiff_t m_fl_depth = 0xC60; // float32
                constexpr std::ptrdiff_t m_n_render_order = 0xC64; // uint32
                constexpr std::ptrdiff_t m_b_project_on_world = 0xC68; // bool
                constexpr std::ptrdiff_t m_b_project_on_characters = 0xC69; // bool
                constexpr std::ptrdiff_t m_b_project_on_water = 0xC6A; // bool
                constexpr std::ptrdiff_t m_fl_depth_sort_bias = 0xC6C; // float32
            }
            // Parent: c_glow_overlay
            // Fields count: 4
            namespace c_fire_overlay {
                constexpr std::ptrdiff_t m_p_owner = 0xD0; // C_FireSmoke*
                constexpr std::ptrdiff_t m_v_base_colors = 0xD8; // Vector[4]
                constexpr std::ptrdiff_t m_fl_scale = 0x108; // float32
                constexpr std::ptrdiff_t m_n_guid = 0x10C; // int32
            }
            // Parent: c_base_model_entity
            // Fields count: 0
            namespace c_func_brush {
            }
            // Parent: c_func_brush
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_EffectName (string_t)
            // NetworkVarNames: m_bState (bool)
            namespace c_func_electrified_volume {
                constexpr std::ptrdiff_t m_n_ambient_effect = 0xC50; // ParticleIndex_t
                constexpr std::ptrdiff_t m_effect_name = 0xC58; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_b_state = 0xC60; // bool
            }
            // Parent: c_base_model_entity
            // Fields count: 0
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            namespace c_func_rotating {
            }
            // Parent: c_base_model_entity
            // Fields count: 0
            namespace c_breakable {
            }
            // Parent: c_breakable
            // Fields count: 0
            namespace c_phys_box {
            }
            // Parent: c_base_model_entity
            // Fields count: 41
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_flScrollSpeed (float32)
            // NetworkVarNames: m_RopeFlags (uint16)
            // NetworkVarNames: m_iRopeMaterialModelIndex (HMaterialStrong)
            // NetworkVarNames: m_nSegments (uint8)
            // NetworkVarNames: m_hStartPoint (CHandle< C_BaseEntity>)
            // NetworkVarNames: m_hEndPoint (CHandle< C_BaseEntity>)
            // NetworkVarNames: m_iStartAttachment (AttachmentHandle_t)
            // NetworkVarNames: m_iEndAttachment (AttachmentHandle_t)
            // NetworkVarNames: m_Subdiv (uint8)
            // NetworkVarNames: m_RopeLength (int16)
            // NetworkVarNames: m_Slack (int16)
            // NetworkVarNames: m_TextureScale (float32)
            // NetworkVarNames: m_fLockedPoints (uint8)
            // NetworkVarNames: m_nChangeCount (uint8)
            // NetworkVarNames: m_Width (float32)
            // NetworkVarNames: m_bConstrainBetweenEndpoints (bool)
            namespace c_rope_keyframe {
                constexpr std::ptrdiff_t m_links_touching_something = 0xC58; // CBitVec< 10 >
                constexpr std::ptrdiff_t m_n_links_touching_something = 0xC5C; // int32
                constexpr std::ptrdiff_t m_b_apply_wind = 0xC60; // bool
                constexpr std::ptrdiff_t m_f_prev_locked_points = 0xC64; // int32
                constexpr std::ptrdiff_t m_i_force_point_move_counter = 0xC68; // int32
                constexpr std::ptrdiff_t m_b_prev_end_point_pos = 0xC6C; // bool[2]
                constexpr std::ptrdiff_t m_v_prev_end_point_pos = 0xC70; // Vector[2]
                constexpr std::ptrdiff_t m_fl_cur_scroll = 0xC88; // float32
                constexpr std::ptrdiff_t m_fl_scroll_speed = 0xC8C; // float32
                constexpr std::ptrdiff_t m_rope_flags = 0xC90; // uint16
                constexpr std::ptrdiff_t m_i_rope_material_model_index = 0xC98; // CStrongHandle< InfoForResourceTypeIMaterial2 >
                constexpr std::ptrdiff_t m_light_values = 0xF10; // Vector[10]
                constexpr std::ptrdiff_t m_n_segments = 0xF88; // uint8
                constexpr std::ptrdiff_t m_h_start_point = 0xF8C; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_h_end_point = 0xF90; // CHandle< C_BaseEntity >
                constexpr std::ptrdiff_t m_i_start_attachment = 0xF94; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_i_end_attachment = 0xF95; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_subdiv = 0xF96; // uint8
                constexpr std::ptrdiff_t m_rope_length = 0xF98; // int16
                constexpr std::ptrdiff_t m_slack = 0xF9A; // int16
                constexpr std::ptrdiff_t m_texture_scale = 0xF9C; // float32
                constexpr std::ptrdiff_t m_f_locked_points = 0xFA0; // uint8
                constexpr std::ptrdiff_t m_n_change_count = 0xFA1; // uint8
                constexpr std::ptrdiff_t m_width = 0xFA4; // float32
                constexpr std::ptrdiff_t m_physics_delegate = 0xFA8; // C_RopeKeyframe::CPhysicsDelegate
                constexpr std::ptrdiff_t m_h_material = 0xFB8; // CStrongHandle< InfoForResourceTypeIMaterial2 >
                constexpr std::ptrdiff_t m_texture_height = 0xFC0; // int32
                constexpr std::ptrdiff_t m_vec_impulse = 0xFC4; // Vector
                constexpr std::ptrdiff_t m_vec_previous_impulse = 0xFD0; // Vector
                constexpr std::ptrdiff_t m_fl_current_gust_timer = 0xFDC; // float32
                constexpr std::ptrdiff_t m_fl_current_gust_lifetime = 0xFE0; // float32
                constexpr std::ptrdiff_t m_fl_time_to_next_gust = 0xFE4; // float32
                constexpr std::ptrdiff_t m_v_wind_dir = 0xFE8; // Vector
                constexpr std::ptrdiff_t m_v_color_mod = 0xFF4; // Vector
                constexpr std::ptrdiff_t m_v_cached_end_point_attachment_pos = 0x1000; // Vector[2]
                constexpr std::ptrdiff_t m_v_cached_end_point_attachment_angle = 0x1018; // QAngle[2]
                constexpr std::ptrdiff_t m_b_constrain_between_endpoints = 0x1030; // bool
                constexpr std::ptrdiff_t m_b_end_point_attachment_positions_dirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_end_point_attachment_angles_dirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_new_data_this_frame = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_physics_initted = 0x0; // bitfield:1
            }
            // Parent: c_point_entity
            // Fields count: 12
            //
            // Metadata:
            // NetworkVarNames: m_bIsPlayingBack (bool)
            // NetworkVarNames: m_bPaused (bool)
            // NetworkVarNames: m_bMultiplayer (bool)
            // NetworkVarNames: m_bAutogenerated (bool)
            // NetworkVarNames: m_flForceClientTime (float32)
            // NetworkVarNames: m_nSceneStringIndex (uint16)
            // NetworkVarNames: m_hActorList (CHandle< C_BaseFlex >)
            namespace c_scene_entity {
                constexpr std::ptrdiff_t m_b_is_playing_back = 0x6D8; // bool
                constexpr std::ptrdiff_t m_b_paused = 0x6D9; // bool
                constexpr std::ptrdiff_t m_b_multiplayer = 0x6DA; // bool
                constexpr std::ptrdiff_t m_b_autogenerated = 0x6DB; // bool
                constexpr std::ptrdiff_t m_fl_force_client_time = 0x6DC; // float32
                constexpr std::ptrdiff_t m_n_scene_string_index = 0x6E0; // uint16
                constexpr std::ptrdiff_t m_b_client_only = 0x6E2; // bool
                constexpr std::ptrdiff_t m_h_owner = 0x6E4; // CHandle< C_BaseFlex >
                constexpr std::ptrdiff_t m_h_actor_list = 0x6E8; // C_NetworkUtlVectorBase< CHandle< C_BaseFlex > >
                constexpr std::ptrdiff_t m_b_was_playing = 0x700; // bool
                constexpr std::ptrdiff_t m_queued_events = 0x710; // CUtlVector< C_SceneEntity::QueuedEvents_t >
                constexpr std::ptrdiff_t m_fl_current_time = 0x728; // float32
            }
            // Parent: c_glow_overlay
            // Fields count: 1
            namespace c_sun_glow_overlay {
                constexpr std::ptrdiff_t m_b_modulate_by_dot = 0xCC; // bool
            }
            // Parent: c_base_model_entity
            // Fields count: 18
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkExcludeByName
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_vDirection (Vector)
            // NetworkVarNames: m_iszEffectName (string_t)
            // NetworkVarNames: m_iszSSEffectName (string_t)
            // NetworkVarNames: m_clrOverlay (Color)
            // NetworkVarNames: m_bOn (bool)
            // NetworkVarNames: m_bmaxColor (bool)
            // NetworkVarNames: m_flSize (float32)
            // NetworkVarNames: m_flHazeScale (float32)
            // NetworkVarNames: m_flRotation (float32)
            // NetworkVarNames: m_flHDRColorScale (float32)
            // NetworkVarNames: m_flAlphaHaze (float32)
            // NetworkVarNames: m_flAlphaScale (float32)
            // NetworkVarNames: m_flAlphaHdr (float32)
            // NetworkVarNames: m_flFarZScale (float32)
            namespace c_sun {
                constexpr std::ptrdiff_t m_fx_ss_sun_flare_effect_index = 0xC50; // ParticleIndex_t
                constexpr std::ptrdiff_t m_fx_sun_flare_effect_index = 0xC54; // ParticleIndex_t
                constexpr std::ptrdiff_t m_fdist_normalize = 0xC58; // float32
                constexpr std::ptrdiff_t m_v_sun_pos = 0xC5C; // Vector
                constexpr std::ptrdiff_t m_v_direction = 0xC68; // Vector
                constexpr std::ptrdiff_t m_isz_effect_name = 0xC78; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_isz_ss_effect_name = 0xC80; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_clr_overlay = 0xC88; // Color
                constexpr std::ptrdiff_t m_b_on = 0xC8C; // bool
                constexpr std::ptrdiff_t m_bmax_color = 0xC8D; // bool
                constexpr std::ptrdiff_t m_fl_size = 0xC90; // float32
                constexpr std::ptrdiff_t m_fl_haze_scale = 0xC94; // float32
                constexpr std::ptrdiff_t m_fl_rotation = 0xC98; // float32
                constexpr std::ptrdiff_t m_fl_hdr_color_scale = 0xC9C; // float32
                constexpr std::ptrdiff_t m_fl_alpha_haze = 0xCA0; // float32
                constexpr std::ptrdiff_t m_fl_alpha_scale = 0xCA4; // float32
                constexpr std::ptrdiff_t m_fl_alpha_hdr = 0xCA8; // float32
                constexpr std::ptrdiff_t m_fl_far_z_scale = 0xCAC; // float32
            }
            // Parent: c_base_toggle
            // Fields count: 2
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_bClientSidePredicted (bool)
            namespace c_base_trigger {
                constexpr std::ptrdiff_t m_b_disabled = 0xC50; // bool
                constexpr std::ptrdiff_t m_b_client_side_predicted = 0xC51; // bool
            }
            // Parent: c_base_model_entity
            // Fields count: 0
            namespace c_trigger_volume {
            }
        }
        // Module: libengine2.so
        // Classes count: 48
        // Enums count: 0
        namespace libengine2 {
            // Parent: None
            // Fields count: 1
            namespace c_network_var_chainer {
                constexpr std::ptrdiff_t m_path_index = 0x20; // ChangeAccessorFieldPathIndex_t
            }
            // Parent: None
            // Fields count: 0
            namespace c_variant_default_allocator {
            }
            // Parent: None
            // Fields count: 0
            namespace ent_output_t {
            }
            // Parent: None
            // Fields count: 7
            namespace ent_component_info_t {
                constexpr std::ptrdiff_t m_p_name = 0x0; // char*
                constexpr std::ptrdiff_t m_p_cpp_classname = 0x8; // char*
                constexpr std::ptrdiff_t m_p_network_data_referenced_description = 0x10; // char*
                constexpr std::ptrdiff_t m_p_network_data_referenced_ptr_prop_description = 0x18; // char*
                constexpr std::ptrdiff_t m_n_runtime_index = 0x20; // int32
                constexpr std::ptrdiff_t m_n_flags = 0x24; // uint32
                constexpr std::ptrdiff_t m_p_base_class_component_helper = 0x60; // CEntityComponentHelper*
            }
            // Parent: None
            // Fields count: 0
            namespace c_entity_component {
            }
            // Parent: None
            // Fields count: 0
            namespace ent_input_t {
            }
            // Parent: None
            // Fields count: 4
            namespace c_entity_component_helper {
                constexpr std::ptrdiff_t m_flags = 0x8; // uint32
                constexpr std::ptrdiff_t m_p_info = 0x10; // EntComponentInfo_t*
                constexpr std::ptrdiff_t m_n_priority = 0x18; // int32
                constexpr std::ptrdiff_t m_p_next = 0x20; // CEntityComponentHelper*
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // NetworkVarNames: m_nameStringableIndex (int32)
            namespace c_entity_identity {
                constexpr std::ptrdiff_t m_name_stringable_index = 0x14; // int32
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_designer_name = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flags = 0x30; // uint32
                constexpr std::ptrdiff_t m_world_group_id = 0x38; // WorldGroupId_t
                constexpr std::ptrdiff_t m_f_data_object_types = 0x3C; // uint32
                constexpr std::ptrdiff_t m_path_index = 0x40; // ChangeAccessorFieldPathIndex_t
                constexpr std::ptrdiff_t m_p_prev = 0x58; // CEntityIdentity*
                constexpr std::ptrdiff_t m_p_next = 0x60; // CEntityIdentity*
                constexpr std::ptrdiff_t m_p_prev_by_class = 0x68; // CEntityIdentity*
                constexpr std::ptrdiff_t m_p_next_by_class = 0x70; // CEntityIdentity*
            }
            // Parent: None
            // Fields count: 0
            namespace c_empty_entity_instance {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity *)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            namespace c_entity_instance {
                constexpr std::ptrdiff_t m_isz_private_v_scripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_p_entity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_c_script_component = 0x28; // CScriptComponent*
                constexpr std::ptrdiff_t m_b_visiblein_pvs = 0x30; // bool
            }
            // Parent: None
            // Fields count: 1
            namespace c_entity_io_output {
                constexpr std::ptrdiff_t m_value = 0x18; // CVariantBase< CVariantDefaultAllocator >
            }
            // Parent: c_entity_component
            // Fields count: 1
            namespace c_script_component {
                constexpr std::ptrdiff_t m_script_class_name = 0x30; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 4
            namespace engine_loop_state_t {
                constexpr std::ptrdiff_t m_n_plat_window_width = 0x18; // int32
                constexpr std::ptrdiff_t m_n_plat_window_height = 0x1C; // int32
                constexpr std::ptrdiff_t m_n_render_width = 0x20; // int32
                constexpr std::ptrdiff_t m_n_render_height = 0x24; // int32
            }
            // Parent: None
            // Fields count: 0
            namespace event_mod_initialized_t {
            }
            // Parent: None
            // Fields count: 1
            namespace event_frame_boundary_t {
                constexpr std::ptrdiff_t m_fl_frame_time = 0x0; // float32
            }
            // Parent: None
            // Fields count: 1
            namespace event_profile_storage_available_t {
                constexpr std::ptrdiff_t m_n_split_screen_slot = 0x0; // CSplitScreenSlot
            }
            // Parent: None
            // Fields count: 0
            namespace event_split_screen_state_changed_t {
            }
            // Parent: None
            // Fields count: 8
            namespace event_set_time_t {
                constexpr std::ptrdiff_t m_loop_state = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_n_client_output_frames = 0x28; // int32
                constexpr std::ptrdiff_t m_fl_real_time = 0x30; // float64
                constexpr std::ptrdiff_t m_fl_render_time = 0x38; // float64
                constexpr std::ptrdiff_t m_fl_render_frame_time = 0x40; // float64
                constexpr std::ptrdiff_t m_fl_render_frame_time_unbounded = 0x48; // float64
                constexpr std::ptrdiff_t m_fl_render_frame_time_unscaled = 0x50; // float64
                constexpr std::ptrdiff_t m_fl_tick_remainder = 0x58; // float64
            }
            // Parent: None
            // Fields count: 2
            namespace event_client_poll_input_t {
                constexpr std::ptrdiff_t m_loop_state = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_fl_real_time = 0x28; // float32
            }
            // Parent: None
            // Fields count: 4
            namespace event_client_process_input_t {
                constexpr std::ptrdiff_t m_loop_state = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_fl_real_time = 0x28; // float32
                constexpr std::ptrdiff_t m_fl_tick_interval = 0x2C; // float32
                constexpr std::ptrdiff_t m_fl_tick_start_time = 0x30; // float64
            }
            // Parent: None
            // Fields count: 3
            namespace event_client_process_game_input_t {
                constexpr std::ptrdiff_t m_loop_state = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_fl_real_time = 0x28; // float32
                constexpr std::ptrdiff_t m_fl_frame_time = 0x2C; // float32
            }
            // Parent: None
            // Fields count: 6
            namespace event_client_pre_output_t {
                constexpr std::ptrdiff_t m_loop_state = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_fl_render_time = 0x28; // float64
                constexpr std::ptrdiff_t m_fl_render_frame_time = 0x30; // float64
                constexpr std::ptrdiff_t m_fl_render_frame_time_unbounded = 0x38; // float64
                constexpr std::ptrdiff_t m_fl_real_time = 0x40; // float32
                constexpr std::ptrdiff_t m_b_render_only = 0x44; // bool
            }
            // Parent: None
            // Fields count: 1
            namespace event_client_scene_system_thread_state_change_t {
                constexpr std::ptrdiff_t m_b_threads_active = 0x0; // bool
            }
            // Parent: None
            // Fields count: 5
            namespace event_client_output_t {
                constexpr std::ptrdiff_t m_loop_state = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_fl_render_time = 0x28; // float32
                constexpr std::ptrdiff_t m_fl_real_time = 0x2C; // float32
                constexpr std::ptrdiff_t m_fl_render_frame_time_unbounded = 0x30; // float32
                constexpr std::ptrdiff_t m_b_render_only = 0x34; // bool
            }
            // Parent: None
            // Fields count: 5
            namespace event_client_post_output_t {
                constexpr std::ptrdiff_t m_loop_state = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_fl_render_time = 0x28; // float64
                constexpr std::ptrdiff_t m_fl_render_frame_time = 0x30; // float32
                constexpr std::ptrdiff_t m_fl_render_frame_time_unbounded = 0x34; // float32
                constexpr std::ptrdiff_t m_b_render_only = 0x38; // bool
            }
            // Parent: None
            // Fields count: 4
            namespace event_client_frame_simulate_t {
                constexpr std::ptrdiff_t m_loop_state = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_fl_real_time = 0x28; // float32
                constexpr std::ptrdiff_t m_fl_frame_time = 0x2C; // float32
                constexpr std::ptrdiff_t m_fl_when_schedule_send_tick_packet = 0x30; // float64
            }
            // Parent: None
            // Fields count: 3
            namespace event_simple_loop_frame_update_t {
                constexpr std::ptrdiff_t m_loop_state = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_fl_real_time = 0x28; // float32
                constexpr std::ptrdiff_t m_fl_frame_time = 0x2C; // float32
            }
            // Parent: None
            // Fields count: 3
            namespace event_simulate_t {
                constexpr std::ptrdiff_t m_loop_state = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_b_first_tick = 0x28; // bool
                constexpr std::ptrdiff_t m_b_last_tick = 0x29; // bool
            }
            // Parent: event_simulate_t
            // Fields count: 4
            namespace event_advance_tick_t {
                constexpr std::ptrdiff_t m_n_current_tick = 0x2C; // int32
                constexpr std::ptrdiff_t m_n_current_tick_this_frame = 0x30; // int32
                constexpr std::ptrdiff_t m_n_total_ticks_this_frame = 0x34; // int32
                constexpr std::ptrdiff_t m_n_total_ticks = 0x38; // int32
            }
            // Parent: event_simulate_t
            // Fields count: 4
            namespace event_post_advance_tick_t {
                constexpr std::ptrdiff_t m_n_current_tick = 0x2C; // int32
                constexpr std::ptrdiff_t m_n_current_tick_this_frame = 0x30; // int32
                constexpr std::ptrdiff_t m_n_total_ticks_this_frame = 0x34; // int32
                constexpr std::ptrdiff_t m_n_total_ticks = 0x38; // int32
            }
            // Parent: event_advance_tick_t
            // Fields count: 0
            namespace event_server_advance_tick_t {
            }
            // Parent: event_post_advance_tick_t
            // Fields count: 0
            namespace event_server_post_advance_tick_t {
            }
            // Parent: event_advance_tick_t
            // Fields count: 0
            namespace event_client_advance_tick_t {
            }
            // Parent: event_post_advance_tick_t
            // Fields count: 0
            namespace event_client_post_advance_tick_t {
            }
            // Parent: None
            // Fields count: 0
            namespace event_client_prediction_post_netupdate_t {
            }
            // Parent: None
            // Fields count: 1
            namespace event_client_poll_networking_t {
                constexpr std::ptrdiff_t m_n_tick_count = 0x0; // int32
            }
            // Parent: None
            // Fields count: 0
            namespace event_client_process_networking_t {
            }
            // Parent: event_simulate_t
            // Fields count: 0
            namespace event_client_pre_simulate_t {
            }
            // Parent: event_simulate_t
            // Fields count: 0
            namespace event_client_simulate_t {
            }
            // Parent: event_simulate_t
            // Fields count: 0
            namespace event_server_poll_networking_t {
            }
            // Parent: event_simulate_t
            // Fields count: 0
            namespace event_server_process_networking_t {
            }
            // Parent: event_simulate_t
            // Fields count: 0
            namespace event_server_simulate_t {
            }
            // Parent: event_simulate_t
            // Fields count: 0
            namespace event_server_post_simulate_t {
            }
            // Parent: event_simulate_t
            // Fields count: 0
            namespace event_client_post_simulate_t {
            }
            // Parent: event_simulate_t
            // Fields count: 0
            namespace event_client_pause_simulate_t {
            }
            // Parent: None
            // Fields count: 1
            namespace event_post_data_update_t {
                constexpr std::ptrdiff_t m_n_count = 0x0; // int32
            }
            // Parent: None
            // Fields count: 1
            namespace event_pre_data_update_t {
                constexpr std::ptrdiff_t m_n_count = 0x0; // int32
            }
            // Parent: None
            // Fields count: 1
            namespace event_app_shutdown_t {
                constexpr std::ptrdiff_t m_n_dummy0 = 0x0; // int32
            }
        }
        // Module: libhost.so
        // Classes count: 2
        // Enums count: 0
        namespace libhost {
            // Parent: None
            // Fields count: 1
            namespace c_anim_script_base {
                constexpr std::ptrdiff_t m_b_is_valid = 0x8; // bool
            }
            // Parent: c_anim_script_base
            // Fields count: 1
            namespace empty_test_script {
                constexpr std::ptrdiff_t m_h_test = 0x10; // CAnimScriptParam< float32 >
            }
        }
        // Module: libmaterialsystem2.so
        // Classes count: 13
        // Enums count: 0
        namespace libmaterialsystem2 {
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace material_param_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
            }
            // Parent: material_param_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace material_param_int_t {
                constexpr std::ptrdiff_t m_n_value = 0x8; // int32
            }
            // Parent: material_param_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace material_param_float_t {
                constexpr std::ptrdiff_t m_fl_value = 0x8; // float32
            }
            // Parent: material_param_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace material_param_vector_t {
                constexpr std::ptrdiff_t m_value = 0x8; // Vector4D
            }
            // Parent: material_param_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace material_param_texture_t {
                constexpr std::ptrdiff_t m_p_value = 0x8; // CStrongHandle< InfoForResourceTypeCTextureBase >
            }
            // Parent: material_param_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace material_param_string_t {
                constexpr std::ptrdiff_t m_value = 0x8; // CUtlString
            }
            // Parent: material_param_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace material_param_buffer_t {
                constexpr std::ptrdiff_t m_value = 0x8; // CUtlBinaryBlock
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace material_resource_data_t {
                constexpr std::ptrdiff_t m_material_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_shader_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_int_params = 0x10; // CUtlVector< MaterialParamInt_t >
                constexpr std::ptrdiff_t m_float_params = 0x28; // CUtlVector< MaterialParamFloat_t >
                constexpr std::ptrdiff_t m_vector_params = 0x40; // CUtlVector< MaterialParamVector_t >
                constexpr std::ptrdiff_t m_texture_params = 0x58; // CUtlVector< MaterialParamTexture_t >
                constexpr std::ptrdiff_t m_dynamic_params = 0x70; // CUtlVector< MaterialParamBuffer_t >
                constexpr std::ptrdiff_t m_dynamic_texture_params = 0x88; // CUtlVector< MaterialParamBuffer_t >
                constexpr std::ptrdiff_t m_int_attributes = 0xA0; // CUtlVector< MaterialParamInt_t >
                constexpr std::ptrdiff_t m_float_attributes = 0xB8; // CUtlVector< MaterialParamFloat_t >
                constexpr std::ptrdiff_t m_vector_attributes = 0xD0; // CUtlVector< MaterialParamVector_t >
                constexpr std::ptrdiff_t m_texture_attributes = 0xE8; // CUtlVector< MaterialParamTexture_t >
                constexpr std::ptrdiff_t m_string_attributes = 0x100; // CUtlVector< MaterialParamString_t >
                constexpr std::ptrdiff_t m_render_attributes_used = 0x118; // CUtlVector< CUtlString >
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace post_processing_tonemap_parameters_t {
                constexpr std::ptrdiff_t m_fl_exposure_bias = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_shoulder_strength = 0x4; // float32
                constexpr std::ptrdiff_t m_fl_linear_strength = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_linear_angle = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_toe_strength = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_toe_num = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_toe_denom = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_white_point = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_luminance_source = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_exposure_bias_shadows = 0x24; // float32
                constexpr std::ptrdiff_t m_fl_exposure_bias_highlights = 0x28; // float32
                constexpr std::ptrdiff_t m_fl_min_shadow_lum = 0x2C; // float32
                constexpr std::ptrdiff_t m_fl_max_shadow_lum = 0x30; // float32
                constexpr std::ptrdiff_t m_fl_min_highlight_lum = 0x34; // float32
                constexpr std::ptrdiff_t m_fl_max_highlight_lum = 0x38; // float32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace post_processing_bloom_parameters_t {
                constexpr std::ptrdiff_t m_blend_mode = 0x0; // BloomBlendMode_t
                constexpr std::ptrdiff_t m_fl_bloom_strength = 0x4; // float32
                constexpr std::ptrdiff_t m_fl_screen_bloom_strength = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_blur_bloom_strength = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_bloom_threshold = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_bloom_threshold_width = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_skybox_bloom_strength = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_bloom_start_value = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_blur_weight = 0x20; // float32[5]
                constexpr std::ptrdiff_t m_v_blur_tint = 0x34; // Vector[5]
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace post_processing_vignette_parameters_t {
                constexpr std::ptrdiff_t m_fl_vignette_strength = 0x0; // float32
                constexpr std::ptrdiff_t m_v_center = 0x4; // Vector2D
                constexpr std::ptrdiff_t m_fl_radius = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_roundness = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_feather = 0x14; // float32
                constexpr std::ptrdiff_t m_v_color_tint = 0x18; // Vector
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace post_processing_local_contrast_parameters_t {
                constexpr std::ptrdiff_t m_fl_local_contrast_strength = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_local_contrast_edge_strength = 0x4; // float32
                constexpr std::ptrdiff_t m_fl_local_contrast_vignette_start = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_local_contrast_vignette_end = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_local_contrast_vignette_blur = 0x10; // float32
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace post_processing_resource_t {
                constexpr std::ptrdiff_t m_b_has_tonemap_params = 0x0; // bool
                constexpr std::ptrdiff_t m_tone_map_params = 0x4; // PostProcessingTonemapParameters_t
                constexpr std::ptrdiff_t m_b_has_bloom_params = 0x40; // bool
                constexpr std::ptrdiff_t m_bloom_params = 0x44; // PostProcessingBloomParameters_t
                constexpr std::ptrdiff_t m_b_has_vignette_params = 0xB4; // bool
                constexpr std::ptrdiff_t m_vignette_params = 0xB8; // PostProcessingVignetteParameters_t
                constexpr std::ptrdiff_t m_b_has_local_contrast_params = 0xDC; // bool
                constexpr std::ptrdiff_t m_local_constrast_params = 0xE0; // PostProcessingLocalContrastParameters_t
                constexpr std::ptrdiff_t m_n_color_correction_volume_dim = 0xF4; // int32
                constexpr std::ptrdiff_t m_color_correction_volume_data = 0xF8; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_b_has_color_correction = 0x110; // bool
            }
        }
        // Module: libmeshsystem.so
        // Classes count: 0
        // Enums count: 0
        namespace libmeshsystem {
        }
        // Module: libnetworksystem.so
        // Classes count: 1
        // Enums count: 0
        namespace libnetworksystem {
            // Parent: None
            // Fields count: 1
            namespace change_accessor_field_path_index_t {
                constexpr std::ptrdiff_t m_value = 0x0; // int16
            }
        }
        // Module: libpanorama.so
        // Classes count: 0
        // Enums count: 0
        namespace libpanorama {
        }
        // Module: libparticles.so
        // Classes count: 250
        // Enums count: 0
        namespace libparticles {
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_particle_input {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace c_per_particle_float_input {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace c_particle_collection_float_input {
            }
            // Parent: c_particle_collection_float_input
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace c_particle_collection_renderer_float_input {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace c_particle_remap_float_input {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace c_per_particle_vec_input {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace c_particle_collection_vec_input {
            }
            // Parent: c_particle_collection_vec_input
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace c_particle_collection_renderer_vec_input {
            }
            // Parent: None
            // Fields count: 1
            namespace particle_ehandle {
                constexpr std::ptrdiff_t unused = 0x0; // int32
            }
            // Parent: None
            // Fields count: 1
            namespace particle_world_handle {
                constexpr std::ptrdiff_t unused = 0x0; // int32
            }
            // Parent: None
            // Fields count: 0
            namespace i_particle_effect {
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace particle_named_value_configuration_t {
                constexpr std::ptrdiff_t m_config_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_config_value = 0x8; // KeyValues3
                constexpr std::ptrdiff_t m_i_attach_type = 0x18; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_bound_entity_path = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_str_entity_scope = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_str_attachment_name = 0x30; // CUtlString
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace particle_named_value_source_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_is_public = 0x8; // bool
                constexpr std::ptrdiff_t m_value_type = 0xC; // PulseValueType_t
                constexpr std::ptrdiff_t m_default_config = 0x10; // ParticleNamedValueConfiguration_t
                constexpr std::ptrdiff_t m_named_configs = 0x48; // CUtlVector< ParticleNamedValueConfiguration_t >
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace c_particle_variable_ref {
                constexpr std::ptrdiff_t m_variable_name = 0x0; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_variable_type = 0x38; // PulseValueType_t
            }
            // Parent: None
            // Fields count: 0
            namespace c_particle_property {
            }
            // Parent: i_particle_effect
            // Fields count: 32
            namespace c_new_particle_effect {
                constexpr std::ptrdiff_t m_p_next = 0x10; // CNewParticleEffect*
                constexpr std::ptrdiff_t m_p_prev = 0x18; // CNewParticleEffect*
                constexpr std::ptrdiff_t m_p_particles = 0x20; // IParticleCollection*
                constexpr std::ptrdiff_t m_p_debug_name = 0x28; // char*
                constexpr std::ptrdiff_t m_b_dont_remove = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_remove = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_needs_b_box_update = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_is_first_frame = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_auto_update_b_box = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_allocated = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_simulate = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_should_perform_cull_check = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_force_no_draw = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_should_save = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_disable_aggregation = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_should_simulate_during_game_paused = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_should_check_fo_w = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_v_sort_origin = 0x40; // Vector
                constexpr std::ptrdiff_t m_fl_scale = 0x4C; // float32
                constexpr std::ptrdiff_t m_h_owner = 0x50; // PARTICLE_EHANDLE__*
                constexpr std::ptrdiff_t m_p_owning_particle_property = 0x58; // CParticleProperty*
                constexpr std::ptrdiff_t m_fl_freeze_transition_start = 0x70; // float32
                constexpr std::ptrdiff_t m_fl_freeze_transition_duration = 0x74; // float32
                constexpr std::ptrdiff_t m_fl_freeze_transition_override = 0x78; // float32
                constexpr std::ptrdiff_t m_b_freeze_transition_active = 0x7C; // bool
                constexpr std::ptrdiff_t m_b_freeze_target_state = 0x7D; // bool
                constexpr std::ptrdiff_t m_b_can_freeze = 0x7E; // bool
                constexpr std::ptrdiff_t m_last_min = 0x80; // Vector
                constexpr std::ptrdiff_t m_last_max = 0x8C; // Vector
                constexpr std::ptrdiff_t m_n_split_screen_user = 0x98; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_vec_aggregation_center = 0x9C; // Vector
                constexpr std::ptrdiff_t m_ref_count = 0xC0; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_random_number_generator_parameters {
                constexpr std::ptrdiff_t m_b_distribute_evenly = 0x0; // bool
                constexpr std::ptrdiff_t m_n_seed = 0x4; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace material_variable_t {
                constexpr std::ptrdiff_t m_str_variable = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_n_variable_field = 0x8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_scale = 0xC; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace render_projected_material_t {
                constexpr std::ptrdiff_t m_h_material = 0x0; // CStrongHandle< InfoForResourceTypeIMaterial2 >
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace particle_preview_body_group_t {
                constexpr std::ptrdiff_t m_body_group_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_n_value = 0x8; // int32
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace particle_preview_state_t {
                constexpr std::ptrdiff_t m_preview_model = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_n_mod_specific_data = 0x8; // uint32
                constexpr std::ptrdiff_t m_ground_type = 0xC; // PetGroundType_t
                constexpr std::ptrdiff_t m_sequence_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_n_fire_particle_on_sequence_frame = 0x18; // int32
                constexpr std::ptrdiff_t m_hitbox_set_name = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_material_group_name = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_vec_body_groups = 0x30; // CUtlVector< ParticlePreviewBodyGroup_t >
                constexpr std::ptrdiff_t m_fl_playback_speed = 0x48; // float32
                constexpr std::ptrdiff_t m_fl_particle_simulation_rate = 0x4C; // float32
                constexpr std::ptrdiff_t m_b_should_draw_hitboxes = 0x50; // bool
                constexpr std::ptrdiff_t m_b_should_draw_attachments = 0x51; // bool
                constexpr std::ptrdiff_t m_b_should_draw_attachment_names = 0x52; // bool
                constexpr std::ptrdiff_t m_b_should_draw_control_point_axes = 0x53; // bool
                constexpr std::ptrdiff_t m_b_animation_non_looping = 0x54; // bool
                constexpr std::ptrdiff_t m_vec_preview_gravity = 0x58; // Vector
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace particle_control_point_driver_t {
                constexpr std::ptrdiff_t m_i_control_point = 0x0; // int32
                constexpr std::ptrdiff_t m_i_attach_type = 0x4; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_attachment_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_vec_offset = 0x10; // Vector
                constexpr std::ptrdiff_t m_ang_offset = 0x1C; // QAngle
                constexpr std::ptrdiff_t m_entity_name = 0x28; // CUtlString
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace particle_control_point_configuration_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_drivers = 0x8; // CUtlVector< ParticleControlPointDriver_t >
                constexpr std::ptrdiff_t m_preview_state = 0x20; // ParticlePreviewState_t
            }
            // Parent: None
            // Fields count: 0
            namespace i_particle_collection {
            }
            // Parent: None
            // Fields count: 0
            namespace i_control_point_editor_data {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace i_particle_system_definition {
            }
            // Parent: None
            // Fields count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_particle_visibility_inputs {
                constexpr std::ptrdiff_t m_fl_camera_bias = 0x0; // float32
                constexpr std::ptrdiff_t m_n_c_pin = 0x4; // int32
                constexpr std::ptrdiff_t m_fl_proxy_radius = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_input_min = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_input_max = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_no_pixel_visibility_fallback = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_distance_input_min = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_distance_input_max = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_dot_input_min = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_dot_input_max = 0x24; // float32
                constexpr std::ptrdiff_t m_b_dot_cp_angles = 0x28; // bool
                constexpr std::ptrdiff_t m_b_dot_camera_angles = 0x29; // bool
                constexpr std::ptrdiff_t m_fl_alpha_scale_min = 0x2C; // float32
                constexpr std::ptrdiff_t m_fl_alpha_scale_max = 0x30; // float32
                constexpr std::ptrdiff_t m_fl_radius_scale_min = 0x34; // float32
                constexpr std::ptrdiff_t m_fl_radius_scale_max = 0x38; // float32
                constexpr std::ptrdiff_t m_fl_radius_scale_fov_base = 0x3C; // float32
                constexpr std::ptrdiff_t m_b_right_eye = 0x40; // bool
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_path_parameters {
                constexpr std::ptrdiff_t m_n_start_control_point_number = 0x0; // int32
                constexpr std::ptrdiff_t m_n_end_control_point_number = 0x4; // int32
                constexpr std::ptrdiff_t m_n_bulge_control = 0x8; // int32
                constexpr std::ptrdiff_t m_fl_bulge = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_mid_point = 0x10; // float32
                constexpr std::ptrdiff_t m_v_start_point_offset = 0x14; // Vector
                constexpr std::ptrdiff_t m_v_mid_point_offset = 0x20; // Vector
                constexpr std::ptrdiff_t m_v_end_offset = 0x2C; // Vector
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace particle_children_info_t {
                constexpr std::ptrdiff_t m_child_ref = 0x0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
                constexpr std::ptrdiff_t m_fl_delay = 0x8; // float32
                constexpr std::ptrdiff_t m_b_end_cap = 0xC; // bool
                constexpr std::ptrdiff_t m_b_disable_child = 0xD; // bool
                constexpr std::ptrdiff_t m_n_detail_level = 0x10; // ParticleDetailLevel_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace control_point_reference_t {
                constexpr std::ptrdiff_t m_control_point_name_string = 0x0; // int32
                constexpr std::ptrdiff_t m_v_offset_from_control_point = 0x4; // Vector
                constexpr std::ptrdiff_t m_b_offset_in_local_space = 0x10; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace model_reference_t {
                constexpr std::ptrdiff_t m_model = 0x0; // CStrongHandle< InfoForResourceTypeCModel >
                constexpr std::ptrdiff_t m_fl_relative_probability_of_spawn = 0x8; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace sequence_weighted_list_t {
                constexpr std::ptrdiff_t m_n_sequence = 0x0; // int32
                constexpr std::ptrdiff_t m_fl_relative_weight = 0x4; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace collision_group_context_t {
                constexpr std::ptrdiff_t m_n_collision_group_number = 0x0; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace point_definition_t {
                constexpr std::ptrdiff_t m_n_control_point = 0x0; // int32
                constexpr std::ptrdiff_t m_b_local_coords = 0x4; // bool
                constexpr std::ptrdiff_t m_v_offset = 0x8; // Vector
            }
            // Parent: point_definition_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace point_definition_with_time_values_t {
                constexpr std::ptrdiff_t m_fl_time_duration = 0x14; // float32
            }
            // Parent: i_particle_system_definition
            // Fields count: 64
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_particle_system_definition {
                constexpr std::ptrdiff_t m_n_behavior_version = 0x8; // int32
                constexpr std::ptrdiff_t m_pre_emission_operators = 0x10; // CUtlVector< CParticleFunctionPreEmission* >
                constexpr std::ptrdiff_t m_emitters = 0x28; // CUtlVector< CParticleFunctionEmitter* >
                constexpr std::ptrdiff_t m_initializers = 0x40; // CUtlVector< CParticleFunctionInitializer* >
                constexpr std::ptrdiff_t m_operators = 0x58; // CUtlVector< CParticleFunctionOperator* >
                constexpr std::ptrdiff_t m_force_generators = 0x70; // CUtlVector< CParticleFunctionForce* >
                constexpr std::ptrdiff_t m_constraints = 0x88; // CUtlVector< CParticleFunctionConstraint* >
                constexpr std::ptrdiff_t m_renderers = 0xA0; // CUtlVector< CParticleFunctionRenderer* >
                constexpr std::ptrdiff_t m_children = 0xB8; // CUtlVector< ParticleChildrenInfo_t >
                constexpr std::ptrdiff_t m_n_first_multiple_override_backward_compat = 0x178; // int32
                constexpr std::ptrdiff_t m_n_initial_particles = 0x210; // int32
                constexpr std::ptrdiff_t m_n_max_particles = 0x214; // int32
                constexpr std::ptrdiff_t m_n_group_id = 0x218; // int32
                constexpr std::ptrdiff_t m_bounding_box_min = 0x21C; // Vector
                constexpr std::ptrdiff_t m_bounding_box_max = 0x228; // Vector
                constexpr std::ptrdiff_t m_fl_depth_sort_bias = 0x234; // float32
                constexpr std::ptrdiff_t m_n_sort_override_position_cp = 0x238; // int32
                constexpr std::ptrdiff_t m_b_infinite_bounds = 0x23C; // bool
                constexpr std::ptrdiff_t m_b_enable_named_values = 0x23D; // bool
                constexpr std::ptrdiff_t m_named_value_domain = 0x240; // CUtlString
                constexpr std::ptrdiff_t m_named_value_locals = 0x248; // CUtlVector< ParticleNamedValueSource_t* >
                constexpr std::ptrdiff_t m_constant_color = 0x260; // Color
                constexpr std::ptrdiff_t m_constant_normal = 0x264; // Vector
                constexpr std::ptrdiff_t m_fl_constant_radius = 0x270; // float32
                constexpr std::ptrdiff_t m_fl_constant_rotation = 0x274; // float32
                constexpr std::ptrdiff_t m_fl_constant_rotation_speed = 0x278; // float32
                constexpr std::ptrdiff_t m_fl_constant_lifespan = 0x27C; // float32
                constexpr std::ptrdiff_t m_n_constant_sequence_number = 0x280; // int32
                constexpr std::ptrdiff_t m_n_constant_sequence_number1 = 0x284; // int32
                constexpr std::ptrdiff_t m_n_snapshot_control_point = 0x288; // int32
                constexpr std::ptrdiff_t m_h_snapshot = 0x290; // CStrongHandle< InfoForResourceTypeIParticleSnapshot >
                constexpr std::ptrdiff_t m_psz_cull_replacement_name = 0x298; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
                constexpr std::ptrdiff_t m_fl_cull_radius = 0x2A0; // float32
                constexpr std::ptrdiff_t m_fl_cull_fill_cost = 0x2A4; // float32
                constexpr std::ptrdiff_t m_n_cull_control_point = 0x2A8; // int32
                constexpr std::ptrdiff_t m_h_fallback = 0x2B0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
                constexpr std::ptrdiff_t m_n_fallback_max_count = 0x2B8; // int32
                constexpr std::ptrdiff_t m_h_low_violence_def = 0x2C0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
                constexpr std::ptrdiff_t m_h_reference_replacement = 0x2C8; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
                constexpr std::ptrdiff_t m_fl_pre_simulation_time = 0x2D0; // float32
                constexpr std::ptrdiff_t m_fl_stop_simulation_after_time = 0x2D4; // float32
                constexpr std::ptrdiff_t m_fl_maximum_time_step = 0x2D8; // float32
                constexpr std::ptrdiff_t m_fl_maximum_sim_time = 0x2DC; // float32
                constexpr std::ptrdiff_t m_fl_minimum_sim_time = 0x2E0; // float32
                constexpr std::ptrdiff_t m_fl_minimum_time_step = 0x2E4; // float32
                constexpr std::ptrdiff_t m_n_minimum_frames = 0x2E8; // int32
                constexpr std::ptrdiff_t m_n_min_cpu_level = 0x2EC; // int32
                constexpr std::ptrdiff_t m_n_min_gpu_level = 0x2F0; // int32
                constexpr std::ptrdiff_t m_fl_no_draw_time_to_go_to_sleep = 0x2F4; // float32
                constexpr std::ptrdiff_t m_fl_max_draw_distance = 0x2F8; // float32
                constexpr std::ptrdiff_t m_fl_start_fade_distance = 0x2FC; // float32
                constexpr std::ptrdiff_t m_fl_max_creation_distance = 0x300; // float32
                constexpr std::ptrdiff_t m_n_aggregation_min_available_particles = 0x304; // int32
                constexpr std::ptrdiff_t m_fl_aggregate_radius = 0x308; // float32
                constexpr std::ptrdiff_t m_b_should_batch = 0x30C; // bool
                constexpr std::ptrdiff_t m_b_should_hitboxes_fallback_to_render_bounds = 0x30D; // bool
                constexpr std::ptrdiff_t m_b_should_hitboxes_fallback_to_snapshot = 0x30E; // bool
                constexpr std::ptrdiff_t m_n_view_model_effect = 0x310; // InheritableBoolType_t
                constexpr std::ptrdiff_t m_b_screen_space_effect = 0x314; // bool
                constexpr std::ptrdiff_t m_psz_target_layer_id = 0x318; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_n_skip_render_control_point = 0x320; // int32
                constexpr std::ptrdiff_t m_n_allow_render_control_point = 0x324; // int32
                constexpr std::ptrdiff_t m_b_should_sort = 0x328; // bool
                constexpr std::ptrdiff_t m_control_point_configurations = 0x370; // CUtlVector< ParticleControlPointConfiguration_t >
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_particle_function {
                constexpr std::ptrdiff_t m_fl_op_strength = 0x8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_n_op_end_cap_state = 0x158; // ParticleEndcapMode_t
                constexpr std::ptrdiff_t m_fl_op_start_fade_in_time = 0x15C; // float32
                constexpr std::ptrdiff_t m_fl_op_end_fade_in_time = 0x160; // float32
                constexpr std::ptrdiff_t m_fl_op_start_fade_out_time = 0x164; // float32
                constexpr std::ptrdiff_t m_fl_op_end_fade_out_time = 0x168; // float32
                constexpr std::ptrdiff_t m_fl_op_fade_oscillate_period = 0x16C; // float32
                constexpr std::ptrdiff_t m_b_normalize_to_stop_time = 0x170; // bool
                constexpr std::ptrdiff_t m_fl_op_time_offset_min = 0x174; // float32
                constexpr std::ptrdiff_t m_fl_op_time_offset_max = 0x178; // float32
                constexpr std::ptrdiff_t m_n_op_time_offset_seed = 0x17C; // int32
                constexpr std::ptrdiff_t m_n_op_time_scale_seed = 0x180; // int32
                constexpr std::ptrdiff_t m_fl_op_time_scale_min = 0x184; // float32
                constexpr std::ptrdiff_t m_fl_op_time_scale_max = 0x188; // float32
                constexpr std::ptrdiff_t m_b_disable_operator = 0x18E; // bool
                constexpr std::ptrdiff_t m_notes = 0x190; // CUtlString
            }
            // Parent: c_particle_function
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_particle_function_initializer {
                constexpr std::ptrdiff_t m_n_associated_emitter_index = 0x1B0; // int32
            }
            // Parent: c_particle_function
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_particle_function_emitter {
                constexpr std::ptrdiff_t m_n_emitter_index = 0x1B0; // int32
            }
            // Parent: c_particle_function
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_particle_function_constraint {
            }
            // Parent: c_particle_function
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_particle_function_operator {
            }
            // Parent: c_particle_function
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_particle_function_force {
            }
            // Parent: c_particle_function_operator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_particle_function_pre_emission {
                constexpr std::ptrdiff_t m_b_run_once = 0x1B0; // bool
            }
            // Parent: c_particle_function
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_particle_function_renderer {
                constexpr std::ptrdiff_t visibility_inputs = 0x1B0; // CParticleVisibilityInputs
                constexpr std::ptrdiff_t m_b_cannot_be_refracted = 0x1F4; // bool
                constexpr std::ptrdiff_t m_b_skip_rendering_on_mobile = 0x1F5; // bool
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace texture_controls_t {
                constexpr std::ptrdiff_t m_fl_final_texture_scale_u = 0x0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_final_texture_scale_v = 0x150; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_final_texture_offset_u = 0x2A0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_final_texture_offset_v = 0x3F0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_final_texture_uv_rotation = 0x540; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_zoom_scale = 0x690; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_distortion = 0x7E0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_b_randomize_offsets = 0x930; // bool
                constexpr std::ptrdiff_t m_b_clamp_u_vs = 0x931; // bool
                constexpr std::ptrdiff_t m_n_per_particle_blend = 0x934; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_n_per_particle_scale = 0x938; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_n_per_particle_offset_u = 0x93C; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_n_per_particle_offset_v = 0x940; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_n_per_particle_rotation = 0x944; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_n_per_particle_zoom = 0x948; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_n_per_particle_distortion = 0x94C; // SpriteCardPerParticleScale_t
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace texture_group_t {
                constexpr std::ptrdiff_t m_b_enabled = 0x0; // bool
                constexpr std::ptrdiff_t m_b_replace_texture_with_gradient = 0x1; // bool
                constexpr std::ptrdiff_t m_h_texture = 0x8; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_gradient = 0x10; // CColorGradient
                constexpr std::ptrdiff_t m_n_texture_type = 0x28; // SpriteCardTextureType_t
                constexpr std::ptrdiff_t m_n_texture_channels = 0x2C; // SpriteCardTextureChannel_t
                constexpr std::ptrdiff_t m_n_texture_blend_mode = 0x30; // ParticleTextureLayerBlendType_t
                constexpr std::ptrdiff_t m_fl_texture_blend = 0x38; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_texture_controls = 0x188; // TextureControls_t
            }
            // Parent: c_particle_function_renderer
            // Fields count: 62
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_base_renderer_source2 {
                constexpr std::ptrdiff_t m_fl_radius_scale = 0x1F8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_alpha_scale = 0x348; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_roll_scale = 0x498; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_n_alpha2_field = 0x5E8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vec_color_scale = 0x5F0; // CParticleCollectionRendererVecInput
                constexpr std::ptrdiff_t m_n_color_blend_type = 0xC20; // ParticleColorBlendType_t
                constexpr std::ptrdiff_t m_n_shader_type = 0xC24; // SpriteCardShaderType_t
                constexpr std::ptrdiff_t m_str_shader_override = 0xC28; // CUtlString
                constexpr std::ptrdiff_t m_fl_center_x_offset = 0xC30; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_center_y_offset = 0xD80; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_bump_strength = 0xED0; // float32
                constexpr std::ptrdiff_t m_n_crop_texture_override = 0xED4; // ParticleSequenceCropOverride_t
                constexpr std::ptrdiff_t m_vec_textures_input = 0xED8; // CUtlVector< TextureGroup_t >
                constexpr std::ptrdiff_t m_fl_animation_rate = 0xEF0; // float32
                constexpr std::ptrdiff_t m_n_animation_type = 0xEF4; // AnimationType_t
                constexpr std::ptrdiff_t m_b_animate_in_fps = 0xEF8; // bool
                constexpr std::ptrdiff_t m_fl_self_illum_amount = 0xF00; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_diffuse_amount = 0x1050; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_diffuse_clamp = 0x11A0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_n_lighting_control_point = 0x12F0; // int32
                constexpr std::ptrdiff_t m_n_self_illum_per_particle = 0x12F4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_output_blend_mode = 0x12F8; // ParticleOutputBlendMode_t
                constexpr std::ptrdiff_t m_b_gamma_correct_vertex_colors = 0x12FC; // bool
                constexpr std::ptrdiff_t m_b_saturate_color_pre_alpha_blend = 0x12FD; // bool
                constexpr std::ptrdiff_t m_fl_add_self_amount = 0x1300; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_desaturation = 0x1450; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_overbright_factor = 0x15A0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_n_hsv_shift_control_point = 0x16F0; // int32
                constexpr std::ptrdiff_t m_n_fog_type = 0x16F4; // ParticleFogType_t
                constexpr std::ptrdiff_t m_fl_fog_amount = 0x16F8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_b_tint_by_fow = 0x1848; // bool
                constexpr std::ptrdiff_t m_b_tint_by_global_light = 0x1849; // bool
                constexpr std::ptrdiff_t m_n_per_particle_alpha_reference = 0x184C; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_n_per_particle_alpha_ref_window = 0x1850; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_n_alpha_reference_type = 0x1854; // ParticleAlphaReferenceType_t
                constexpr std::ptrdiff_t m_fl_alpha_reference_softness = 0x1858; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_source_alpha_value_to_map_to_zero = 0x19A8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_source_alpha_value_to_map_to_one = 0x1AF8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_b_refract = 0x1C48; // bool
                constexpr std::ptrdiff_t m_b_refract_solid = 0x1C49; // bool
                constexpr std::ptrdiff_t m_fl_refract_amount = 0x1C50; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_n_refract_blur_radius = 0x1DA0; // int32
                constexpr std::ptrdiff_t m_n_refract_blur_type = 0x1DA4; // BlurFilterType_t
                constexpr std::ptrdiff_t m_b_only_render_in_effects_bloom_pass = 0x1DA8; // bool
                constexpr std::ptrdiff_t m_b_only_render_in_effects_water_pass = 0x1DA9; // bool
                constexpr std::ptrdiff_t m_b_use_mixed_resolution_rendering = 0x1DAA; // bool
                constexpr std::ptrdiff_t m_b_only_render_in_effecs_game_overlay = 0x1DAB; // bool
                constexpr std::ptrdiff_t m_stencil_test_id = 0x1DAC; // char[128]
                constexpr std::ptrdiff_t m_b_stencil_test_exclude = 0x1E2C; // bool
                constexpr std::ptrdiff_t m_stencil_write_id = 0x1E2D; // char[128]
                constexpr std::ptrdiff_t m_b_write_stencil_on_depth_pass = 0x1EAD; // bool
                constexpr std::ptrdiff_t m_b_write_stencil_on_depth_fail = 0x1EAE; // bool
                constexpr std::ptrdiff_t m_b_reverse_z_buffering = 0x1EAF; // bool
                constexpr std::ptrdiff_t m_b_disable_z_buffering = 0x1EB0; // bool
                constexpr std::ptrdiff_t m_n_feathering_mode = 0x1EB4; // ParticleDepthFeatheringMode_t
                constexpr std::ptrdiff_t m_fl_feathering_min_dist = 0x1EB8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_feathering_max_dist = 0x2008; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_feathering_filter = 0x2158; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_depth_bias = 0x22A8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_n_sort_method = 0x23F8; // ParticleSortingChoiceList_t
                constexpr std::ptrdiff_t m_b_blend_frames_seq0 = 0x23FC; // bool
                constexpr std::ptrdiff_t m_b_max_luminance_blending_sequence0 = 0x23FD; // bool
            }
            // Parent: c_base_renderer_source2
            // Fields count: 27
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_render_sprites {
                constexpr std::ptrdiff_t m_n_sequence_override = 0x2638; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_n_orientation_type = 0x2788; // ParticleOrientationChoiceList_t
                constexpr std::ptrdiff_t m_n_orientation_control_point = 0x278C; // int32
                constexpr std::ptrdiff_t m_b_use_yaw_with_normal_aligned = 0x2790; // bool
                constexpr std::ptrdiff_t m_fl_min_size = 0x2798; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_max_size = 0x28E8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_alpha_adjust_with_size_adjust = 0x2A38; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_start_fade_size = 0x2B88; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_end_fade_size = 0x2CD8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_start_fade_dot = 0x2E28; // float32
                constexpr std::ptrdiff_t m_fl_end_fade_dot = 0x2E2C; // float32
                constexpr std::ptrdiff_t m_b_distance_alpha = 0x2E30; // bool
                constexpr std::ptrdiff_t m_b_soft_edges = 0x2E31; // bool
                constexpr std::ptrdiff_t m_fl_edge_softness_start = 0x2E34; // float32
                constexpr std::ptrdiff_t m_fl_edge_softness_end = 0x2E38; // float32
                constexpr std::ptrdiff_t m_b_outline = 0x2E3C; // bool
                constexpr std::ptrdiff_t m_outline_color = 0x2E3D; // Color
                constexpr std::ptrdiff_t m_n_outline_alpha = 0x2E44; // int32
                constexpr std::ptrdiff_t m_fl_outline_start0 = 0x2E48; // float32
                constexpr std::ptrdiff_t m_fl_outline_start1 = 0x2E4C; // float32
                constexpr std::ptrdiff_t m_fl_outline_end0 = 0x2E50; // float32
                constexpr std::ptrdiff_t m_fl_outline_end1 = 0x2E54; // float32
                constexpr std::ptrdiff_t m_n_lighting_mode = 0x2E58; // ParticleLightingQuality_t
                constexpr std::ptrdiff_t m_fl_lighting_tessellation = 0x2E60; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fl_lighting_directionality = 0x2FB0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_b_particle_shadows = 0x3100; // bool
                constexpr std::ptrdiff_t m_fl_shadow_density = 0x3104; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace float_input_material_variable_t {
                constexpr std::ptrdiff_t m_str_variable = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_fl_input = 0x8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace vec_input_material_variable_t {
                constexpr std::ptrdiff_t m_str_variable = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_vec_input = 0x8; // CParticleCollectionVecInput
            }
            // Parent: c_particle_function_renderer
            // Fields count: 22
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_render_cables {
                constexpr std::ptrdiff_t m_fl_radius_scale = 0x1F8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_alpha_scale = 0x348; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vec_color_scale = 0x498; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_n_color_blend_type = 0xAC8; // ParticleColorBlendType_t
                constexpr std::ptrdiff_t m_h_material = 0xAD0; // CStrongHandle< InfoForResourceTypeIMaterial2 >
                constexpr std::ptrdiff_t m_n_texture_repetition_mode = 0xAD8; // TextureRepetitionMode_t
                constexpr std::ptrdiff_t m_fl_texture_repeats_per_segment = 0xAE0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_texture_repeats_circumference = 0xC30; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_color_map_offset_v = 0xD80; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_color_map_offset_u = 0xED0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_normal_map_offset_v = 0x1020; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_normal_map_offset_u = 0x1170; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_b_draw_cable_caps = 0x12C0; // bool
                constexpr std::ptrdiff_t m_fl_cap_roundness = 0x12C4; // float32
                constexpr std::ptrdiff_t m_fl_cap_offset_amount = 0x12C8; // float32
                constexpr std::ptrdiff_t m_fl_tess_scale = 0x12CC; // float32
                constexpr std::ptrdiff_t m_n_min_tesselation = 0x12D0; // int32
                constexpr std::ptrdiff_t m_n_max_tesselation = 0x12D4; // int32
                constexpr std::ptrdiff_t m_n_roundness = 0x12D8; // int32
                constexpr std::ptrdiff_t m_lighting_transform = 0x12E0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_material_float_vars = 0x1340; // CUtlVector< FloatInputMaterialVariable_t >
                constexpr std::ptrdiff_t m_material_vec_vars = 0x1370; // CUtlVector< VecInputMaterialVariable_t >
            }
            // Parent: c_particle_function_constraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_constrain_distance {
                constexpr std::ptrdiff_t m_f_min_distance = 0x1B0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_f_max_distance = 0x300; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_n_control_point_number = 0x450; // int32
                constexpr std::ptrdiff_t m_center_offset = 0x454; // Vector
                constexpr std::ptrdiff_t m_b_global_center = 0x460; // bool
            }
            // Parent: c_particle_function_constraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_collide_with_self {
                constexpr std::ptrdiff_t m_fl_radius_scale = 0x1B0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_minimum_speed = 0x300; // CPerParticleFloatInput
            }
            // Parent: c_particle_function_constraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_collide_with_parent_particles {
                constexpr std::ptrdiff_t m_fl_parent_radius_scale = 0x1B0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_radius_scale = 0x300; // CPerParticleFloatInput
            }
            // Parent: c_particle_function_constraint
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_constrain_distance_to_path {
                constexpr std::ptrdiff_t m_f_min_distance = 0x1B0; // float32
                constexpr std::ptrdiff_t m_fl_max_distance0 = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_max_distance_mid = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_max_distance1 = 0x1BC; // float32
                constexpr std::ptrdiff_t m_path_parameters = 0x1C0; // CPathParameters
                constexpr std::ptrdiff_t m_fl_travel_time = 0x200; // float32
                constexpr std::ptrdiff_t m_n_field_scale = 0x204; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_manual_t_field = 0x208; // ParticleAttributeIndex_t
            }
            // Parent: c_particle_function_constraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_constrain_distance_to_user_specified_path {
                constexpr std::ptrdiff_t m_f_min_distance = 0x1B0; // float32
                constexpr std::ptrdiff_t m_fl_max_distance = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_time_scale = 0x1B8; // float32
                constexpr std::ptrdiff_t m_b_looped_path = 0x1BC; // bool
                constexpr std::ptrdiff_t m_point_list = 0x1C0; // CUtlVector< PointDefinitionWithTimeValues_t >
            }
            // Parent: c_particle_function_constraint
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_planar_constraint {
                constexpr std::ptrdiff_t m_point_on_plane = 0x1B0; // Vector
                constexpr std::ptrdiff_t m_plane_normal = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1C8; // int32
                constexpr std::ptrdiff_t m_b_global_origin = 0x1CC; // bool
                constexpr std::ptrdiff_t m_b_global_normal = 0x1CD; // bool
                constexpr std::ptrdiff_t m_fl_radius_scale = 0x1D0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_maximum_distance_to_cp = 0x320; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_b_use_old_code = 0x470; // bool
            }
            // Parent: c_particle_function_constraint
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_world_collide_constraint {
            }
            // Parent: c_particle_function_constraint
            // Fields count: 27
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_world_trace_constraint {
                constexpr std::ptrdiff_t m_n_cp = 0x1B0; // int32
                constexpr std::ptrdiff_t m_vec_cp_offset = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_n_collision_mode = 0x1C0; // ParticleCollisionMode_t
                constexpr std::ptrdiff_t m_n_collision_mode_min = 0x1C4; // ParticleCollisionMode_t
                constexpr std::ptrdiff_t m_n_trace_set = 0x1C8; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_collision_group_name = 0x1CC; // char[128]
                constexpr std::ptrdiff_t m_b_world_only = 0x24C; // bool
                constexpr std::ptrdiff_t m_b_brush_only = 0x24D; // bool
                constexpr std::ptrdiff_t m_b_include_water = 0x24E; // bool
                constexpr std::ptrdiff_t m_n_ignore_cp = 0x250; // int32
                constexpr std::ptrdiff_t m_fl_cp_movement_tolerance = 0x254; // float32
                constexpr std::ptrdiff_t m_fl_retest_rate = 0x258; // float32
                constexpr std::ptrdiff_t m_fl_trace_tolerance = 0x25C; // float32
                constexpr std::ptrdiff_t m_fl_collision_confirmation_speed = 0x260; // float32
                constexpr std::ptrdiff_t m_n_max_traces_per_frame = 0x264; // float32
                constexpr std::ptrdiff_t m_fl_radius_scale = 0x268; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_bounce_amount = 0x3B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_slide_amount = 0x508; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_random_dir_scale = 0x658; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_b_decay_bounce = 0x7A8; // bool
                constexpr std::ptrdiff_t m_b_killon_contact = 0x7A9; // bool
                constexpr std::ptrdiff_t m_fl_min_speed = 0x7AC; // float32
                constexpr std::ptrdiff_t m_b_set_normal = 0x7B0; // bool
                constexpr std::ptrdiff_t m_n_stick_on_collision_field = 0x7B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_stop_speed = 0x7B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_n_entity_stick_data_field = 0x908; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_entity_stick_normal_field = 0x90C; // ParticleAttributeIndex_t
            }
            // Parent: c_particle_function_constraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_box_constraint {
                constexpr std::ptrdiff_t m_vec_min = 0x1B0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vec_max = 0x7E0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_n_cp = 0xE10; // int32
                constexpr std::ptrdiff_t m_b_local_space = 0xE14; // bool
                constexpr std::ptrdiff_t m_b_account_for_radius = 0xE15; // bool
            }
            // Parent: c_particle_function_constraint
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_shape_matching_constraint {
                constexpr std::ptrdiff_t m_fl_shape_restoration_time = 0x1B0; // float32
            }
            // Parent: c_particle_function_constraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_rope_spring_constraint {
                constexpr std::ptrdiff_t m_fl_rest_length = 0x1B0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_min_distance = 0x300; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_max_distance = 0x450; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_adjustment_scale = 0x5A0; // float32
                constexpr std::ptrdiff_t m_fl_initial_resting_length = 0x5A8; // CParticleCollectionFloatInput
            }
            // Parent: c_particle_function_constraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_spring_to_vector_constraint {
                constexpr std::ptrdiff_t m_fl_rest_length = 0x1B0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_min_distance = 0x300; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_max_distance = 0x450; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_resting_length = 0x5A0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vec_anchor_vector = 0x6F0; // CPerParticleVecInput
            }
            // Parent: c_particle_function_constraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_constrain_line_length {
                constexpr std::ptrdiff_t m_fl_min_distance = 0x1B0; // float32
                constexpr std::ptrdiff_t m_fl_max_distance = 0x1B4; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_ring_wave {
                constexpr std::ptrdiff_t m_transform_input = 0x1B8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_fl_particles_per_orbit = 0x218; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_initial_radius = 0x368; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_thickness = 0x4B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_initial_speed_min = 0x608; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_initial_speed_max = 0x758; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_roll = 0x8A8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_pitch = 0x9F8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_yaw = 0xB48; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_b_even_distribution = 0xC98; // bool
                constexpr std::ptrdiff_t m_b_xy_velocity_only = 0xC99; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_create_spiral_sphere {
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1B4; // int32
                constexpr std::ptrdiff_t m_n_override_cp = 0x1B8; // int32
                constexpr std::ptrdiff_t m_n_density = 0x1BC; // int32
                constexpr std::ptrdiff_t m_fl_initial_radius = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_initial_speed_min = 0x1C4; // float32
                constexpr std::ptrdiff_t m_fl_initial_speed_max = 0x1C8; // float32
                constexpr std::ptrdiff_t m_b_use_particle_count = 0x1CC; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_create_in_epitrochoid {
                constexpr std::ptrdiff_t m_n_component1 = 0x1B4; // int32
                constexpr std::ptrdiff_t m_n_component2 = 0x1B8; // int32
                constexpr std::ptrdiff_t m_transform_input = 0x1C0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_fl_particle_density = 0x220; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_offset = 0x370; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_radius1 = 0x4C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_radius2 = 0x610; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_b_use_count = 0x760; // bool
                constexpr std::ptrdiff_t m_b_use_local_coords = 0x761; // bool
                constexpr std::ptrdiff_t m_b_offset_existing_pos = 0x762; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_create_phyllotaxis {
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1B4; // int32
                constexpr std::ptrdiff_t m_n_scale_cp = 0x1B8; // int32
                constexpr std::ptrdiff_t m_n_component = 0x1BC; // int32
                constexpr std::ptrdiff_t m_f_rad_cent_core = 0x1C0; // float32
                constexpr std::ptrdiff_t m_f_rad_per_point = 0x1C4; // float32
                constexpr std::ptrdiff_t m_f_rad_per_point_to = 0x1C8; // float32
                constexpr std::ptrdiff_t m_fpoint_angle = 0x1CC; // float32
                constexpr std::ptrdiff_t m_fsize_overall = 0x1D0; // float32
                constexpr std::ptrdiff_t m_f_rad_bias = 0x1D4; // float32
                constexpr std::ptrdiff_t m_f_min_rad = 0x1D8; // float32
                constexpr std::ptrdiff_t m_f_dist_bias = 0x1DC; // float32
                constexpr std::ptrdiff_t m_b_use_local_coords = 0x1E0; // bool
                constexpr std::ptrdiff_t m_b_use_with_cont_emit = 0x1E1; // bool
                constexpr std::ptrdiff_t m_b_use_orig_radius = 0x1E2; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_create_on_model {
                constexpr std::ptrdiff_t m_model_input = 0x1B8; // CParticleModelInput
                constexpr std::ptrdiff_t m_transform_input = 0x210; // CParticleTransformInput
                constexpr std::ptrdiff_t m_n_force_in_model = 0x270; // int32
                constexpr std::ptrdiff_t m_n_desired_hitbox = 0x274; // int32
                constexpr std::ptrdiff_t m_n_hitbox_value_from_control_point_index = 0x278; // int32
                constexpr std::ptrdiff_t m_vec_hit_box_scale = 0x280; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_fl_bone_velocity = 0x8B0; // float32
                constexpr std::ptrdiff_t m_fl_max_bone_velocity = 0x8B4; // float32
                constexpr std::ptrdiff_t m_vec_direction_bias = 0x8B8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_hitbox_set_name = 0xEE8; // char[128]
                constexpr std::ptrdiff_t m_b_local_coords = 0xF68; // bool
                constexpr std::ptrdiff_t m_b_use_bones = 0xF69; // bool
                constexpr std::ptrdiff_t m_b_use_mesh = 0xF6A; // bool
                constexpr std::ptrdiff_t m_fl_shell_size = 0xF70; // CParticleCollectionFloatInput
            }
            // Parent: c_particle_function_initializer
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_create_on_model_at_height {
                constexpr std::ptrdiff_t m_b_use_bones = 0x1B4; // bool
                constexpr std::ptrdiff_t m_b_force_z = 0x1B5; // bool
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1B8; // int32
                constexpr std::ptrdiff_t m_n_height_cp = 0x1BC; // int32
                constexpr std::ptrdiff_t m_b_use_water_height = 0x1C0; // bool
                constexpr std::ptrdiff_t m_fl_desired_height = 0x1C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vec_hit_box_scale = 0x318; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vec_direction_bias = 0x948; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_n_bias_type = 0xF78; // ParticleHitboxBiasType_t
                constexpr std::ptrdiff_t m_b_local_coords = 0xF7C; // bool
                constexpr std::ptrdiff_t m_b_prefer_moving_boxes = 0xF7D; // bool
                constexpr std::ptrdiff_t m_hitbox_set_name = 0xF7E; // char[128]
                constexpr std::ptrdiff_t m_fl_hitbox_velocity_scale = 0x1000; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_max_bone_velocity = 0x1150; // CParticleCollectionFloatInput
            }
            // Parent: c_particle_function_initializer
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_set_hitbox_to_closest {
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1B4; // int32
                constexpr std::ptrdiff_t m_n_desired_hitbox = 0x1B8; // int32
                constexpr std::ptrdiff_t m_vec_hit_box_scale = 0x1C0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_hitbox_set_name = 0x7F0; // char[128]
                constexpr std::ptrdiff_t m_b_use_bones = 0x870; // bool
                constexpr std::ptrdiff_t m_b_use_closest_point_on_hitbox = 0x871; // bool
                constexpr std::ptrdiff_t m_n_test_type = 0x874; // ClosestPointTestType_t
                constexpr std::ptrdiff_t m_fl_hybrid_ratio = 0x878; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_b_update_position = 0x9C8; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_set_hitbox_to_model {
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1B4; // int32
                constexpr std::ptrdiff_t m_n_force_in_model = 0x1B8; // int32
                constexpr std::ptrdiff_t m_n_desired_hitbox = 0x1BC; // int32
                constexpr std::ptrdiff_t m_vec_hit_box_scale = 0x1C0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vec_direction_bias = 0x7F0; // Vector
                constexpr std::ptrdiff_t m_b_maintain_hitbox = 0x7FC; // bool
                constexpr std::ptrdiff_t m_b_use_bones = 0x7FD; // bool
                constexpr std::ptrdiff_t m_hitbox_set_name = 0x7FE; // char[128]
                constexpr std::ptrdiff_t m_fl_shell_size = 0x880; // CParticleCollectionFloatInput
            }
            // Parent: c_particle_function_initializer
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_create_within_sphere_transform {
                constexpr std::ptrdiff_t m_f_radius_min = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_f_radius_max = 0x308; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vec_distance_bias = 0x458; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vec_distance_bias_abs = 0xA88; // Vector
                constexpr std::ptrdiff_t m_transform_input = 0xA98; // CParticleTransformInput
                constexpr std::ptrdiff_t m_f_speed_min = 0xAF8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_f_speed_max = 0xC48; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_f_speed_rand_exp = 0xD98; // float32
                constexpr std::ptrdiff_t m_b_local_coords = 0xD9C; // bool
                constexpr std::ptrdiff_t m_fl_end_cp_growth_time = 0xDA0; // float32
                constexpr std::ptrdiff_t m_local_coordinate_system_speed_min = 0xDA8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_local_coordinate_system_speed_max = 0x13D8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_n_field_output = 0x1A08; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_field_velocity = 0x1A0C; // ParticleAttributeIndex_t
            }
            // Parent: c_particle_function_initializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_create_within_box {
                constexpr std::ptrdiff_t m_vec_min = 0x1B8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vec_max = 0x7E8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_n_control_point_number = 0xE18; // int32
                constexpr std::ptrdiff_t m_b_local_space = 0xE1C; // bool
                constexpr std::ptrdiff_t m_randomness_parameters = 0xE20; // CRandomNumberGeneratorParameters
            }
            // Parent: c_particle_function_initializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_create_on_grid {
                constexpr std::ptrdiff_t m_n_x_count = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_n_y_count = 0x308; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_n_z_count = 0x458; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_n_x_spacing = 0x5A8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_n_y_spacing = 0x6F8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_n_z_spacing = 0x848; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_n_control_point_number = 0x998; // int32
                constexpr std::ptrdiff_t m_b_local_space = 0x99C; // bool
                constexpr std::ptrdiff_t m_b_center = 0x99D; // bool
                constexpr std::ptrdiff_t m_b_hollow = 0x99E; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_position_offset {
                constexpr std::ptrdiff_t m_offset_min = 0x1B8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_offset_max = 0x7E8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_transform_input = 0xE18; // CParticleTransformInput
                constexpr std::ptrdiff_t m_b_local_coords = 0xE78; // bool
                constexpr std::ptrdiff_t m_b_proportional = 0xE79; // bool
                constexpr std::ptrdiff_t m_randomness_parameters = 0xE7C; // CRandomNumberGeneratorParameters
            }
            // Parent: c_particle_function_initializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_position_offset_to_cp {
                constexpr std::ptrdiff_t m_n_control_point_number_start = 0x1B4; // int32
                constexpr std::ptrdiff_t m_n_control_point_number_end = 0x1B8; // int32
                constexpr std::ptrdiff_t m_b_local_coords = 0x1BC; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_position_place_on_ground {
                constexpr std::ptrdiff_t m_fl_offset = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_max_trace_length = 0x308; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_collision_group_name = 0x458; // char[128]
                constexpr std::ptrdiff_t m_n_trace_set = 0x4D8; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_n_trace_miss_behavior = 0x4E8; // ParticleTraceMissBehavior_t
                constexpr std::ptrdiff_t m_b_include_water = 0x4EC; // bool
                constexpr std::ptrdiff_t m_b_set_normal = 0x4ED; // bool
                constexpr std::ptrdiff_t m_b_set_pxyz_only = 0x4EE; // bool
                constexpr std::ptrdiff_t m_b_trace_along_normal = 0x4EF; // bool
                constexpr std::ptrdiff_t m_b_offseton_col_only = 0x4F0; // bool
                constexpr std::ptrdiff_t m_fl_offset_by_radius_factor = 0x4F4; // float32
                constexpr std::ptrdiff_t m_n_preserve_offset_cp = 0x4F8; // int32
                constexpr std::ptrdiff_t m_n_ignore_cp = 0x4FC; // int32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_velocity_from_normal {
                constexpr std::ptrdiff_t m_f_speed_min = 0x1B4; // float32
                constexpr std::ptrdiff_t m_f_speed_max = 0x1B8; // float32
                constexpr std::ptrdiff_t m_b_ignore_dt = 0x1BC; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_velocity_random {
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1B4; // int32
                constexpr std::ptrdiff_t m_f_speed_min = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_f_speed_max = 0x308; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_local_coordinate_system_speed_min = 0x458; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_local_coordinate_system_speed_max = 0xA88; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_b_ignore_dt = 0x10B8; // bool
                constexpr std::ptrdiff_t m_randomness_parameters = 0x10BC; // CRandomNumberGeneratorParameters
            }
            // Parent: c_particle_function_initializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_initial_velocity_noise {
                constexpr std::ptrdiff_t m_vec_abs_val = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_vec_abs_val_inv = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_vec_offset_loc = 0x1D0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_fl_offset = 0x800; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vec_output_min = 0x950; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vec_output_max = 0xF80; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_fl_noise_scale = 0x15B0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_noise_scale_loc = 0x1700; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_transform_input = 0x1850; // CParticleTransformInput
                constexpr std::ptrdiff_t m_b_ignore_dt = 0x18B0; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_initial_velocity_from_hitbox {
                constexpr std::ptrdiff_t m_fl_velocity_min = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_velocity_max = 0x1B8; // float32
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1BC; // int32
                constexpr std::ptrdiff_t m_hitbox_set_name = 0x1C0; // char[128]
                constexpr std::ptrdiff_t m_b_use_bones = 0x240; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_velocity_radial_random {
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1B4; // int32
                constexpr std::ptrdiff_t m_f_speed_min = 0x1B8; // float32
                constexpr std::ptrdiff_t m_f_speed_max = 0x1BC; // float32
                constexpr std::ptrdiff_t m_vec_local_coordinate_system_speed_scale = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_b_ignore_delta = 0x1CD; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_life_time {
                constexpr std::ptrdiff_t m_f_lifetime_min = 0x1B4; // float32
                constexpr std::ptrdiff_t m_f_lifetime_max = 0x1B8; // float32
                constexpr std::ptrdiff_t m_f_lifetime_rand_exponent = 0x1BC; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_scalar {
                constexpr std::ptrdiff_t m_fl_min = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_max = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_exponent = 0x1BC; // float32
                constexpr std::ptrdiff_t m_n_field_output = 0x1C0; // ParticleAttributeIndex_t
            }
            // Parent: c_particle_function_initializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_vector {
                constexpr std::ptrdiff_t m_vec_min = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_vec_max = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_n_field_output = 0x1CC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_randomness_parameters = 0x1D0; // CRandomNumberGeneratorParameters
            }
            // Parent: c_particle_function_initializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_vector_component {
                constexpr std::ptrdiff_t m_fl_min = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_max = 0x1B8; // float32
                constexpr std::ptrdiff_t m_n_field_output = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_component = 0x1C0; // int32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_add_vector_to_vector {
                constexpr std::ptrdiff_t m_vec_scale = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_n_field_output = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_field_input = 0x1C4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_v_offset_min = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_v_offset_max = 0x1D4; // Vector
                constexpr std::ptrdiff_t m_randomness_parameters = 0x1E0; // CRandomNumberGeneratorParameters
            }
            // Parent: c_particle_function_initializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_alpha_window_threshold {
                constexpr std::ptrdiff_t m_fl_min = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_max = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_exponent = 0x1BC; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_radius {
                constexpr std::ptrdiff_t m_fl_radius_min = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_radius_max = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_radius_rand_exponent = 0x1BC; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_alpha {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_alpha_min = 0x1B8; // int32
                constexpr std::ptrdiff_t m_n_alpha_max = 0x1BC; // int32
                constexpr std::ptrdiff_t m_fl_alpha_rand_exponent = 0x1C8; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_general_random_rotation {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_degrees = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_degrees_min = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_degrees_max = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_rotation_rand_exponent = 0x1C4; // float32
                constexpr std::ptrdiff_t m_b_randomly_flip_direction = 0x1C8; // bool
            }
            // Parent: c_general_random_rotation
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_rotation {
            }
            // Parent: c_particle_function_initializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_orient2_d_rel_to_cp {
                constexpr std::ptrdiff_t m_n_cp = 0x1B4; // int32
                constexpr std::ptrdiff_t m_n_field_output = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_rot_offset = 0x1BC; // float32
            }
            // Parent: c_general_random_rotation
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_rotation_speed {
            }
            // Parent: c_general_random_rotation
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_yaw {
            }
            // Parent: c_particle_function_initializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_color {
                constexpr std::ptrdiff_t m_color_min = 0x1D0; // Color
                constexpr std::ptrdiff_t m_color_max = 0x1D4; // Color
                constexpr std::ptrdiff_t m_tint_min = 0x1D8; // Color
                constexpr std::ptrdiff_t m_tint_max = 0x1DC; // Color
                constexpr std::ptrdiff_t m_fl_tint_perc = 0x1E0; // float32
                constexpr std::ptrdiff_t m_fl_update_threshold = 0x1E4; // float32
                constexpr std::ptrdiff_t m_n_tint_cp = 0x1E8; // int32
                constexpr std::ptrdiff_t m_n_field_output = 0x1EC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_tint_blend_mode = 0x1F0; // ParticleColorBlendMode_t
                constexpr std::ptrdiff_t m_fl_light_amplification = 0x1F4; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_color_lit_per_particle {
                constexpr std::ptrdiff_t m_color_min = 0x1CC; // Color
                constexpr std::ptrdiff_t m_color_max = 0x1D0; // Color
                constexpr std::ptrdiff_t m_tint_min = 0x1D4; // Color
                constexpr std::ptrdiff_t m_tint_max = 0x1D8; // Color
                constexpr std::ptrdiff_t m_fl_tint_perc = 0x1DC; // float32
                constexpr std::ptrdiff_t m_n_tint_blend_mode = 0x1E0; // ParticleColorBlendMode_t
                constexpr std::ptrdiff_t m_fl_light_amplification = 0x1E4; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_trail_length {
                constexpr std::ptrdiff_t m_fl_min_length = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_max_length = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_length_rand_exponent = 0x1BC; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_sequence {
                constexpr std::ptrdiff_t m_n_sequence_min = 0x1B4; // int32
                constexpr std::ptrdiff_t m_n_sequence_max = 0x1B8; // int32
                constexpr std::ptrdiff_t m_b_shuffle = 0x1BC; // bool
                constexpr std::ptrdiff_t m_b_linear = 0x1BD; // bool
                constexpr std::ptrdiff_t m_weighted_list = 0x1C0; // CUtlVector< SequenceWeightedList_t >
            }
            // Parent: c_particle_function_initializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_sequence_from_cp {
                constexpr std::ptrdiff_t m_b_kill_unused = 0x1B4; // bool
                constexpr std::ptrdiff_t m_b_radius_scale = 0x1B5; // bool
                constexpr std::ptrdiff_t m_n_cp = 0x1B8; // int32
                constexpr std::ptrdiff_t m_vec_offset = 0x1BC; // Vector
            }
            // Parent: c_particle_function_initializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_model_sequence {
                constexpr std::ptrdiff_t m_activity_name = 0x1B4; // char[256]
                constexpr std::ptrdiff_t m_sequence_name = 0x2B4; // char[256]
                constexpr std::ptrdiff_t m_h_model = 0x3B8; // CStrongHandle< InfoForResourceTypeCModel >
            }
            // Parent: c_particle_function_initializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_scale_velocity {
                constexpr std::ptrdiff_t m_vec_scale = 0x1B8; // CParticleCollectionVecInput
            }
            // Parent: c_particle_function_initializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_position_warp {
                constexpr std::ptrdiff_t m_vec_warp_min = 0x1B8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vec_warp_max = 0x7E8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_n_scale_control_point_number = 0xE18; // int32
                constexpr std::ptrdiff_t m_n_control_point_number = 0xE1C; // int32
                constexpr std::ptrdiff_t m_n_radius_component = 0xE20; // int32
                constexpr std::ptrdiff_t m_fl_warp_time = 0xE24; // float32
                constexpr std::ptrdiff_t m_fl_warp_start_time = 0xE28; // float32
                constexpr std::ptrdiff_t m_fl_prev_pos_scale = 0xE2C; // float32
                constexpr std::ptrdiff_t m_b_invert_warp = 0xE30; // bool
                constexpr std::ptrdiff_t m_b_use_count = 0xE31; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_position_warp_scalar {
                constexpr std::ptrdiff_t m_vec_warp_min = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_vec_warp_max = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_input_value = 0x1D0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_prev_pos_scale = 0x320; // float32
                constexpr std::ptrdiff_t m_n_scale_control_point_number = 0x324; // int32
                constexpr std::ptrdiff_t m_n_control_point_number = 0x328; // int32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_creation_noise {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_b_abs_val = 0x1B8; // bool
                constexpr std::ptrdiff_t m_b_abs_val_inv = 0x1B9; // bool
                constexpr std::ptrdiff_t m_fl_offset = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_output_min = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_output_max = 0x1C4; // float32
                constexpr std::ptrdiff_t m_fl_noise_scale = 0x1C8; // float32
                constexpr std::ptrdiff_t m_fl_noise_scale_loc = 0x1CC; // float32
                constexpr std::ptrdiff_t m_vec_offset_loc = 0x1D0; // Vector
                constexpr std::ptrdiff_t m_fl_world_time_scale = 0x1DC; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_create_along_path {
                constexpr std::ptrdiff_t m_f_max_distance = 0x1B4; // float32
                constexpr std::ptrdiff_t m_path_params = 0x1C0; // CPathParameters
                constexpr std::ptrdiff_t m_b_use_random_c_ps = 0x200; // bool
                constexpr std::ptrdiff_t m_v_end_offset = 0x204; // Vector
                constexpr std::ptrdiff_t m_b_save_offset = 0x210; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_move_between_points {
                constexpr std::ptrdiff_t m_fl_speed_min = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_speed_max = 0x308; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_end_spread = 0x458; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_start_offset = 0x5A8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_end_offset = 0x6F8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_n_end_control_point_number = 0x848; // int32
                constexpr std::ptrdiff_t m_b_trail_bias = 0x84C; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_scalar {
                constexpr std::ptrdiff_t m_n_field_input = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_field_output = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_input_min = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_input_max = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_output_min = 0x1C4; // float32
                constexpr std::ptrdiff_t m_fl_output_max = 0x1C8; // float32
                constexpr std::ptrdiff_t m_fl_start_time = 0x1CC; // float32
                constexpr std::ptrdiff_t m_fl_end_time = 0x1D0; // float32
                constexpr std::ptrdiff_t m_n_set_method = 0x1D4; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_b_active_range = 0x1D8; // bool
                constexpr std::ptrdiff_t m_fl_remap_bias = 0x1DC; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_particle_count_to_scalar {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_input_min = 0x1B8; // int32
                constexpr std::ptrdiff_t m_n_input_max = 0x1BC; // int32
                constexpr std::ptrdiff_t m_n_scale_control_point = 0x1C0; // int32
                constexpr std::ptrdiff_t m_n_scale_control_point_field = 0x1C4; // int32
                constexpr std::ptrdiff_t m_fl_output_min = 0x1C8; // float32
                constexpr std::ptrdiff_t m_fl_output_max = 0x1CC; // float32
                constexpr std::ptrdiff_t m_n_set_method = 0x1D0; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_b_active_range = 0x1D4; // bool
                constexpr std::ptrdiff_t m_b_invert = 0x1D5; // bool
                constexpr std::ptrdiff_t m_b_wrap = 0x1D6; // bool
                constexpr std::ptrdiff_t m_fl_remap_bias = 0x1D8; // float32
            }
            // Parent: c_init_remap_particle_count_to_scalar
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_particle_count_to_named_model_element_scalar {
                constexpr std::ptrdiff_t m_h_model = 0x1E0; // CStrongHandle< InfoForResourceTypeCModel >
                constexpr std::ptrdiff_t m_output_min_name = 0x1E8; // CUtlString
                constexpr std::ptrdiff_t m_output_max_name = 0x1F0; // CUtlString
                constexpr std::ptrdiff_t m_b_model_from_renderer = 0x1F8; // bool
            }
            // Parent: c_init_remap_particle_count_to_named_model_element_scalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_particle_count_to_named_model_sequence_scalar {
            }
            // Parent: c_init_remap_particle_count_to_named_model_element_scalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_particle_count_to_named_model_body_part_scalar {
            }
            // Parent: c_init_remap_particle_count_to_named_model_element_scalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_particle_count_to_named_model_mesh_group_scalar {
            }
            // Parent: c_particle_function_initializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_inherit_velocity {
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1B4; // int32
                constexpr std::ptrdiff_t m_fl_velocity_scale = 0x1B8; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_velocity_from_cp {
                constexpr std::ptrdiff_t m_velocity_input = 0x1B8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_transform_input = 0x7E8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_fl_velocity_scale = 0x848; // float32
                constexpr std::ptrdiff_t m_b_direction_only = 0x84C; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_age_noise {
                constexpr std::ptrdiff_t m_b_abs_val = 0x1B4; // bool
                constexpr std::ptrdiff_t m_b_abs_val_inv = 0x1B5; // bool
                constexpr std::ptrdiff_t m_fl_offset = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_age_min = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_age_max = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_noise_scale = 0x1C4; // float32
                constexpr std::ptrdiff_t m_fl_noise_scale_loc = 0x1C8; // float32
                constexpr std::ptrdiff_t m_vec_offset_loc = 0x1CC; // Vector
            }
            // Parent: c_particle_function_initializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_sequence_life_time {
                constexpr std::ptrdiff_t m_fl_framerate = 0x1B4; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_scalar_to_vector {
                constexpr std::ptrdiff_t m_n_field_input = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_field_output = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_input_min = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_input_max = 0x1C0; // float32
                constexpr std::ptrdiff_t m_vec_output_min = 0x1C4; // Vector
                constexpr std::ptrdiff_t m_vec_output_max = 0x1D0; // Vector
                constexpr std::ptrdiff_t m_fl_start_time = 0x1DC; // float32
                constexpr std::ptrdiff_t m_fl_end_time = 0x1E0; // float32
                constexpr std::ptrdiff_t m_n_set_method = 0x1E4; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1E8; // int32
                constexpr std::ptrdiff_t m_b_local_coords = 0x1EC; // bool
                constexpr std::ptrdiff_t m_fl_remap_bias = 0x1F0; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_offset_vector_to_vector {
                constexpr std::ptrdiff_t m_n_field_input = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_field_output = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vec_output_min = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_vec_output_max = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_randomness_parameters = 0x1D4; // CRandomNumberGeneratorParameters
            }
            // Parent: c_particle_function_initializer
            // Fields count: 6
            //
            // Metadata:
            // MParticleMinVersion
            // MGetKV3ClassDefaults
            namespace c_init_create_sequential_path_v2 {
                constexpr std::ptrdiff_t m_f_max_distance = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_num_to_assign = 0x308; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_b_loop = 0x458; // bool
                constexpr std::ptrdiff_t m_b_cp_pairs = 0x459; // bool
                constexpr std::ptrdiff_t m_b_save_offset = 0x45A; // bool
                constexpr std::ptrdiff_t m_path_params = 0x460; // CPathParameters
            }
            // Parent: c_particle_function_initializer
            // Fields count: 6
            //
            // Metadata:
            // MParticleMaxVersion
            // MParticleReplacementOp
            // MGetKV3ClassDefaults
            namespace c_init_create_sequential_path {
                constexpr std::ptrdiff_t m_f_max_distance = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_num_to_assign = 0x1B8; // float32
                constexpr std::ptrdiff_t m_b_loop = 0x1BC; // bool
                constexpr std::ptrdiff_t m_b_cp_pairs = 0x1BD; // bool
                constexpr std::ptrdiff_t m_b_save_offset = 0x1BE; // bool
                constexpr std::ptrdiff_t m_path_params = 0x1C0; // CPathParameters
            }
            // Parent: c_particle_function_initializer
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_initial_repulsion_velocity {
                constexpr std::ptrdiff_t m_collision_group_name = 0x1B4; // char[128]
                constexpr std::ptrdiff_t m_n_trace_set = 0x234; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_vec_output_min = 0x238; // Vector
                constexpr std::ptrdiff_t m_vec_output_max = 0x244; // Vector
                constexpr std::ptrdiff_t m_n_control_point_number = 0x250; // int32
                constexpr std::ptrdiff_t m_b_per_particle = 0x254; // bool
                constexpr std::ptrdiff_t m_b_translate = 0x255; // bool
                constexpr std::ptrdiff_t m_b_proportional = 0x256; // bool
                constexpr std::ptrdiff_t m_fl_trace_length = 0x258; // float32
                constexpr std::ptrdiff_t m_b_per_particle_tr = 0x25C; // bool
                constexpr std::ptrdiff_t m_b_inherit = 0x25D; // bool
                constexpr std::ptrdiff_t m_n_child_cp = 0x260; // int32
                constexpr std::ptrdiff_t m_n_child_group_id = 0x264; // int32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_yaw_flip {
                constexpr std::ptrdiff_t m_fl_percent = 0x1B4; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_second_sequence {
                constexpr std::ptrdiff_t m_n_sequence_min = 0x1B4; // int32
                constexpr std::ptrdiff_t m_n_sequence_max = 0x1B8; // int32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_c_pto_scalar {
                constexpr std::ptrdiff_t m_n_cp_input = 0x1B4; // int32
                constexpr std::ptrdiff_t m_n_field_output = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_field = 0x1BC; // int32
                constexpr std::ptrdiff_t m_fl_input_min = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_input_max = 0x1C4; // float32
                constexpr std::ptrdiff_t m_fl_output_min = 0x1C8; // float32
                constexpr std::ptrdiff_t m_fl_output_max = 0x1CC; // float32
                constexpr std::ptrdiff_t m_fl_start_time = 0x1D0; // float32
                constexpr std::ptrdiff_t m_fl_end_time = 0x1D4; // float32
                constexpr std::ptrdiff_t m_n_set_method = 0x1D8; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_fl_remap_bias = 0x1DC; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_transform_to_vector {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_v_input_min = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_v_input_max = 0x1C4; // Vector
                constexpr std::ptrdiff_t m_v_output_min = 0x1D0; // Vector
                constexpr std::ptrdiff_t m_v_output_max = 0x1DC; // Vector
                constexpr std::ptrdiff_t m_transform_input = 0x1E8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_local_space_transform = 0x248; // CParticleTransformInput
                constexpr std::ptrdiff_t m_fl_start_time = 0x2A8; // float32
                constexpr std::ptrdiff_t m_fl_end_time = 0x2AC; // float32
                constexpr std::ptrdiff_t m_n_set_method = 0x2B0; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_b_offset = 0x2B4; // bool
                constexpr std::ptrdiff_t m_b_accelerate = 0x2B5; // bool
                constexpr std::ptrdiff_t m_fl_remap_bias = 0x2B8; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_chaotic_attractor {
                constexpr std::ptrdiff_t m_fl_a_parm = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_b_parm = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_c_parm = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_d_parm = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_scale = 0x1C4; // float32
                constexpr std::ptrdiff_t m_fl_speed_min = 0x1C8; // float32
                constexpr std::ptrdiff_t m_fl_speed_max = 0x1CC; // float32
                constexpr std::ptrdiff_t m_n_base_cp = 0x1D0; // int32
                constexpr std::ptrdiff_t m_b_uniform_speed = 0x1D4; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_create_from_parent_particles {
                constexpr std::ptrdiff_t m_fl_velocity_scale = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_increment = 0x1B8; // float32
                constexpr std::ptrdiff_t m_b_random_distribution = 0x1BC; // bool
                constexpr std::ptrdiff_t m_n_random_seed = 0x1C0; // int32
                constexpr std::ptrdiff_t m_b_sub_frame = 0x1C4; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_inherit_from_parent_particles {
                constexpr std::ptrdiff_t m_fl_scale = 0x1B4; // float32
                constexpr std::ptrdiff_t m_n_field_output = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_increment = 0x1BC; // int32
                constexpr std::ptrdiff_t m_b_random_distribution = 0x1C0; // bool
                constexpr std::ptrdiff_t m_n_random_seed = 0x1C4; // int32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_create_from_c_ps {
                constexpr std::ptrdiff_t m_n_increment = 0x1B4; // int32
                constexpr std::ptrdiff_t m_n_min_cp = 0x1B8; // int32
                constexpr std::ptrdiff_t m_n_max_cp = 0x1BC; // int32
                constexpr std::ptrdiff_t m_n_dynamic_cp_count = 0x1C0; // CParticleCollectionFloatInput
            }
            // Parent: c_particle_function_initializer
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_distance_to_cp_init {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_input_min = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_input_max = 0x308; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_output_min = 0x458; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_output_max = 0x5A8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_n_start_cp = 0x6F8; // int32
                constexpr std::ptrdiff_t m_b_los = 0x6FC; // bool
                constexpr std::ptrdiff_t m_collision_group_name = 0x6FD; // char[128]
                constexpr std::ptrdiff_t m_n_trace_set = 0x780; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_fl_max_trace_length = 0x788; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_los_scale = 0x8D8; // float32
                constexpr std::ptrdiff_t m_n_set_method = 0x8DC; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_b_active_range = 0x8E0; // bool
                constexpr std::ptrdiff_t m_vec_distance_scale = 0x8E4; // Vector
                constexpr std::ptrdiff_t m_fl_remap_bias = 0x8F0; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_lifespan_from_velocity {
                constexpr std::ptrdiff_t m_vec_component_scale = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_fl_trace_offset = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_max_trace_length = 0x1C4; // float32
                constexpr std::ptrdiff_t m_fl_trace_tolerance = 0x1C8; // float32
                constexpr std::ptrdiff_t m_n_max_planes = 0x1CC; // int32
                constexpr std::ptrdiff_t m_collision_group_name = 0x1D4; // char[128]
                constexpr std::ptrdiff_t m_n_trace_set = 0x254; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_b_include_water = 0x260; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_create_from_plane_cache {
                constexpr std::ptrdiff_t m_vec_offset_min = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_vec_offset_max = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_b_use_normal = 0x1CD; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_model_cull {
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1B4; // int32
                constexpr std::ptrdiff_t m_b_bound_box = 0x1B8; // bool
                constexpr std::ptrdiff_t m_b_cull_outside = 0x1B9; // bool
                constexpr std::ptrdiff_t m_b_use_bones = 0x1BA; // bool
                constexpr std::ptrdiff_t m_hitbox_set_name = 0x1BB; // char[128]
            }
            // Parent: c_particle_function_initializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_distance_cull {
                constexpr std::ptrdiff_t m_n_control_point = 0x1B4; // int32
                constexpr std::ptrdiff_t m_fl_distance = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_b_cull_inside = 0x308; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_plane_cull {
                constexpr std::ptrdiff_t m_n_control_point = 0x1B4; // int32
                constexpr std::ptrdiff_t m_fl_distance = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_b_cull_inside = 0x308; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_distance_to_neighbor_cull {
                constexpr std::ptrdiff_t m_fl_distance = 0x1B8; // CPerParticleFloatInput
            }
            // Parent: c_particle_function_initializer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_rt_env_cull {
                constexpr std::ptrdiff_t m_vec_test_dir = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_vec_test_normal = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_b_use_velocity = 0x1CC; // bool
                constexpr std::ptrdiff_t m_b_cull_on_miss = 0x1CD; // bool
                constexpr std::ptrdiff_t m_b_life_adjust = 0x1CE; // bool
                constexpr std::ptrdiff_t m_rt_env_name = 0x1CF; // char[128]
                constexpr std::ptrdiff_t m_n_rt_env_cp = 0x250; // int32
                constexpr std::ptrdiff_t m_n_component = 0x254; // int32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_normal_align_to_cp {
                constexpr std::ptrdiff_t m_transform_input = 0x1B8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_n_control_point_axis = 0x218; // ParticleControlPointAxis_t
            }
            // Parent: c_particle_function_initializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_normal_offset {
                constexpr std::ptrdiff_t m_offset_min = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_offset_max = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1CC; // int32
                constexpr std::ptrdiff_t m_b_local_coords = 0x1D0; // bool
                constexpr std::ptrdiff_t m_b_normalize = 0x1D1; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_speed_to_scalar {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1B8; // int32
                constexpr std::ptrdiff_t m_fl_start_time = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_end_time = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_input_min = 0x1C4; // float32
                constexpr std::ptrdiff_t m_fl_input_max = 0x1C8; // float32
                constexpr std::ptrdiff_t m_fl_output_min = 0x1CC; // float32
                constexpr std::ptrdiff_t m_fl_output_max = 0x1D0; // float32
                constexpr std::ptrdiff_t m_n_set_method = 0x1D4; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_b_per_particle = 0x1D8; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_init_from_cp_snapshot {
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1B4; // int32
                constexpr std::ptrdiff_t m_n_attribute_to_read = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_attribute_to_write = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_local_space_cp = 0x1C0; // int32
                constexpr std::ptrdiff_t m_b_random = 0x1C4; // bool
                constexpr std::ptrdiff_t m_b_reverse = 0x1C5; // bool
                constexpr std::ptrdiff_t m_n_snap_shot_increment = 0x1C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_n_manual_snapshot_index = 0x318; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_n_random_seed = 0x468; // int32
                constexpr std::ptrdiff_t m_b_local_space_angles = 0x46C; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_init_skinned_position_from_cp_snapshot {
                constexpr std::ptrdiff_t m_n_snapshot_control_point_number = 0x1B4; // int32
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1B8; // int32
                constexpr std::ptrdiff_t m_b_random = 0x1BC; // bool
                constexpr std::ptrdiff_t m_n_random_seed = 0x1C0; // int32
                constexpr std::ptrdiff_t m_b_rigid = 0x1C4; // bool
                constexpr std::ptrdiff_t m_b_set_normal = 0x1C5; // bool
                constexpr std::ptrdiff_t m_b_ignore_dt = 0x1C6; // bool
                constexpr std::ptrdiff_t m_fl_min_normal_velocity = 0x1C8; // float32
                constexpr std::ptrdiff_t m_fl_max_normal_velocity = 0x1CC; // float32
                constexpr std::ptrdiff_t m_n_index_type = 0x1D0; // SnapshotIndexType_t
                constexpr std::ptrdiff_t m_fl_read_index = 0x1D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_increment = 0x328; // float32
                constexpr std::ptrdiff_t m_n_full_loop_increment = 0x32C; // int32
                constexpr std::ptrdiff_t m_n_snap_shot_start_point = 0x330; // int32
                constexpr std::ptrdiff_t m_fl_bone_velocity = 0x334; // float32
                constexpr std::ptrdiff_t m_fl_bone_velocity_max = 0x338; // float32
                constexpr std::ptrdiff_t m_b_copy_color = 0x33C; // bool
                constexpr std::ptrdiff_t m_b_copy_alpha = 0x33D; // bool
                constexpr std::ptrdiff_t m_b_set_radius = 0x33E; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_init_from_parent_killed {
                constexpr std::ptrdiff_t m_n_attribute_to_copy = 0x1B4; // ParticleAttributeIndex_t
            }
            // Parent: c_particle_function_initializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_init_from_vector_field_snapshot {
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1B4; // int32
                constexpr std::ptrdiff_t m_n_local_space_cp = 0x1B8; // int32
                constexpr std::ptrdiff_t m_n_weight_update_cp = 0x1BC; // int32
                constexpr std::ptrdiff_t m_b_use_vertical_velocity = 0x1C0; // bool
                constexpr std::ptrdiff_t m_vec_scale = 0x1C8; // CPerParticleVecInput
            }
            // Parent: c_particle_function_initializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_initial_direction_to_transform_to_vector {
                constexpr std::ptrdiff_t m_transform_input = 0x1B8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_n_field_output = 0x218; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_scale = 0x21C; // float32
                constexpr std::ptrdiff_t m_fl_offset_rot = 0x220; // float32
                constexpr std::ptrdiff_t m_vec_offset_axis = 0x224; // Vector
                constexpr std::ptrdiff_t m_b_normalize = 0x230; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_initial_transform_direction_to_rotation {
                constexpr std::ptrdiff_t m_transform_input = 0x1B8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_n_field_output = 0x218; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_offset_rot = 0x21C; // float32
                constexpr std::ptrdiff_t m_n_component = 0x220; // int32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_q_angles_to_rotation {
                constexpr std::ptrdiff_t m_transform_input = 0x1B8; // CParticleTransformInput
            }
            // Parent: c_particle_function_initializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_transform_orientation_to_rotations {
                constexpr std::ptrdiff_t m_transform_input = 0x1B8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_vec_rotation = 0x218; // Vector
                constexpr std::ptrdiff_t m_b_use_quat = 0x224; // bool
                constexpr std::ptrdiff_t m_b_write_normal = 0x225; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_set_rigid_attachment {
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1B4; // int32
                constexpr std::ptrdiff_t m_n_field_input = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_field_output = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_b_local_space = 0x1C0; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_initial_visibility_scalar {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_input_min = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_input_max = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_output_min = 0x1C4; // float32
                constexpr std::ptrdiff_t m_fl_output_max = 0x1C8; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_radius_from_cp_object {
                constexpr std::ptrdiff_t m_n_control_point = 0x1B4; // int32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_initial_sequence_from_model {
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1B4; // int32
                constexpr std::ptrdiff_t m_n_field_output = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_field_output_anim = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_input_min = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_input_max = 0x1C4; // float32
                constexpr std::ptrdiff_t m_fl_output_min = 0x1C8; // float32
                constexpr std::ptrdiff_t m_fl_output_max = 0x1CC; // float32
                constexpr std::ptrdiff_t m_n_set_method = 0x1D0; // ParticleSetMethod_t
            }
            // Parent: c_particle_function_initializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_global_scale {
                constexpr std::ptrdiff_t m_fl_scale = 0x1B4; // float32
                constexpr std::ptrdiff_t m_n_scale_control_point_number = 0x1B8; // int32
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1BC; // int32
                constexpr std::ptrdiff_t m_b_scale_radius = 0x1C0; // bool
                constexpr std::ptrdiff_t m_b_scale_position = 0x1C1; // bool
                constexpr std::ptrdiff_t m_b_scale_velocity = 0x1C2; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_point_list {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_point_list = 0x1B8; // CUtlVector< PointDefinition_t >
                constexpr std::ptrdiff_t m_b_place_along_path = 0x1D0; // bool
                constexpr std::ptrdiff_t m_b_closed_loop = 0x1D1; // bool
                constexpr std::ptrdiff_t m_n_num_points_along_path = 0x1D4; // int32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_named_model_element {
                constexpr std::ptrdiff_t m_h_model = 0x1B8; // CStrongHandle< InfoForResourceTypeCModel >
                constexpr std::ptrdiff_t m_names = 0x1C0; // CUtlVector< CUtlString >
                constexpr std::ptrdiff_t m_b_shuffle = 0x1D8; // bool
                constexpr std::ptrdiff_t m_b_linear = 0x1D9; // bool
                constexpr std::ptrdiff_t m_b_model_from_renderer = 0x1DA; // bool
                constexpr std::ptrdiff_t m_n_field_output = 0x1DC; // ParticleAttributeIndex_t
            }
            // Parent: c_init_random_named_model_element
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_named_model_sequence {
            }
            // Parent: c_init_random_named_model_element
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_named_model_body_part {
            }
            // Parent: c_init_random_named_model_element
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_random_named_model_mesh_group {
            }
            // Parent: c_particle_function_initializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_named_model_element_to_scalar {
                constexpr std::ptrdiff_t m_h_model = 0x1B8; // CStrongHandle< InfoForResourceTypeCModel >
                constexpr std::ptrdiff_t m_names = 0x1C0; // CUtlVector< CUtlString >
                constexpr std::ptrdiff_t m_values = 0x1D8; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_n_field_input = 0x1F0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_field_output = 0x1F4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_set_method = 0x1F8; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_b_model_from_renderer = 0x1FC; // bool
            }
            // Parent: c_init_remap_named_model_element_to_scalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_named_model_sequence_to_scalar {
            }
            // Parent: c_init_remap_named_model_element_to_scalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_named_model_body_part_to_scalar {
            }
            // Parent: c_init_remap_named_model_element_to_scalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_remap_named_model_mesh_group_to_scalar {
            }
            // Parent: c_particle_function_initializer
            // Fields count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_status_effect {
                constexpr std::ptrdiff_t m_n_detail2_combo = 0x1B4; // Detail2Combo_t
                constexpr std::ptrdiff_t m_fl_detail2_rotation = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_detail2_scale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_detail2_blend_factor = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_color_warp_intensity = 0x1C4; // float32
                constexpr std::ptrdiff_t m_fl_diffuse_warp_blend_to_full = 0x1C8; // float32
                constexpr std::ptrdiff_t m_fl_env_map_intensity = 0x1CC; // float32
                constexpr std::ptrdiff_t m_fl_ambient_scale = 0x1D0; // float32
                constexpr std::ptrdiff_t m_specular_color = 0x1D4; // Color
                constexpr std::ptrdiff_t m_fl_specular_scale = 0x1D8; // float32
                constexpr std::ptrdiff_t m_fl_specular_exponent = 0x1DC; // float32
                constexpr std::ptrdiff_t m_fl_specular_exponent_blend_to_full = 0x1E0; // float32
                constexpr std::ptrdiff_t m_fl_specular_blend_to_full = 0x1E4; // float32
                constexpr std::ptrdiff_t m_rim_light_color = 0x1E8; // Color
                constexpr std::ptrdiff_t m_fl_rim_light_scale = 0x1EC; // float32
                constexpr std::ptrdiff_t m_fl_reflections_tint_by_base_blend_to_none = 0x1F0; // float32
                constexpr std::ptrdiff_t m_fl_metalness_blend_to_full = 0x1F4; // float32
                constexpr std::ptrdiff_t m_fl_self_illum_blend_to_full = 0x1F8; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_status_effect_citadel {
                constexpr std::ptrdiff_t m_fl_sfx_color_warp_amount = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_sfx_normal_amount = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_sfx_metalness_amount = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_sfx_roughness_amount = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_sfx_self_illum_amount = 0x1C4; // float32
                constexpr std::ptrdiff_t m_fl_sfxs_scale = 0x1C8; // float32
                constexpr std::ptrdiff_t m_fl_sfxs_scroll_x = 0x1CC; // float32
                constexpr std::ptrdiff_t m_fl_sfxs_scroll_y = 0x1D0; // float32
                constexpr std::ptrdiff_t m_fl_sfxs_scroll_z = 0x1D4; // float32
                constexpr std::ptrdiff_t m_fl_sfxs_offset_x = 0x1D8; // float32
                constexpr std::ptrdiff_t m_fl_sfxs_offset_y = 0x1DC; // float32
                constexpr std::ptrdiff_t m_fl_sfxs_offset_z = 0x1E0; // float32
                constexpr std::ptrdiff_t m_n_detail_combo = 0x1E4; // DetailCombo_t
                constexpr std::ptrdiff_t m_fl_sfxs_detail_amount = 0x1E8; // float32
                constexpr std::ptrdiff_t m_fl_sfxs_detail_scale = 0x1EC; // float32
                constexpr std::ptrdiff_t m_fl_sfxs_detail_scroll_x = 0x1F0; // float32
                constexpr std::ptrdiff_t m_fl_sfxs_detail_scroll_y = 0x1F4; // float32
                constexpr std::ptrdiff_t m_fl_sfxs_detail_scroll_z = 0x1F8; // float32
                constexpr std::ptrdiff_t m_fl_sfxs_use_model_u_vs = 0x1FC; // float32
            }
            // Parent: c_particle_function_initializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_create_particle_impulse {
                constexpr std::ptrdiff_t m_input_radius = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_input_magnitude = 0x308; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_n_falloff_function = 0x458; // ParticleFalloffFunction_t
                constexpr std::ptrdiff_t m_input_falloff_exp = 0x460; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_n_impulse_type = 0x5B0; // ParticleImpulseType_t
            }
            // Parent: c_particle_function_initializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_quantize_float {
                constexpr std::ptrdiff_t m_input_value = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_n_output_field = 0x308; // ParticleAttributeIndex_t
            }
            // Parent: c_particle_function_initializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_set_attribute_to_scalar_expression {
                constexpr std::ptrdiff_t m_n_expression = 0x1B4; // ScalarExpressionType_t
                constexpr std::ptrdiff_t m_fl_input1 = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_input2 = 0x308; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_output_remap = 0x458; // CParticleRemapFloatInput
                constexpr std::ptrdiff_t m_n_output_field = 0x5A8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_set_method = 0x5AC; // ParticleSetMethod_t
            }
            // Parent: c_particle_function_initializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_set_vector_attribute_to_vector_expression {
                constexpr std::ptrdiff_t m_n_expression = 0x1B4; // VectorExpressionType_t
                constexpr std::ptrdiff_t m_v_input1 = 0x1B8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_v_input2 = 0x7E8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_n_output_field = 0xE18; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_set_method = 0xE1C; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_b_normalized_output = 0xE20; // bool
            }
            // Parent: c_particle_function_initializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_init_float_collection {
                constexpr std::ptrdiff_t m_input_value = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_n_output_field = 0x308; // ParticleAttributeIndex_t
            }
            // Parent: c_particle_function_initializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_init_float {
                constexpr std::ptrdiff_t m_input_value = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_n_output_field = 0x308; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_set_method = 0x30C; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_input_strength = 0x310; // CPerParticleFloatInput
            }
            // Parent: c_particle_function_initializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_init_vec_collection {
                constexpr std::ptrdiff_t m_input_value = 0x1B8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_n_output_field = 0x7E8; // ParticleAttributeIndex_t
            }
            // Parent: c_particle_function_initializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_init_init_vec {
                constexpr std::ptrdiff_t m_input_value = 0x1B8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_n_output_field = 0x7E8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_set_method = 0x7EC; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_b_normalized_output = 0x7F0; // bool
                constexpr std::ptrdiff_t m_b_write_previous_position = 0x7F1; // bool
            }
            // Parent: c_particle_function_emitter
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_instantaneous_emitter {
                constexpr std::ptrdiff_t m_n_particles_to_emit = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_start_time = 0x308; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_init_from_killed_parent_particles = 0x458; // float32
                constexpr std::ptrdiff_t m_fl_parent_particle_scale = 0x460; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_n_max_emitted_per_frame = 0x5B0; // int32
                constexpr std::ptrdiff_t m_n_snapshot_control_point = 0x5B4; // int32
            }
            // Parent: c_particle_function_emitter
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_continuous_emitter {
                constexpr std::ptrdiff_t m_fl_emission_duration = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_start_time = 0x308; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_emit_rate = 0x458; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_emission_scale = 0x5A8; // float32
                constexpr std::ptrdiff_t m_fl_scale_per_parent_particle = 0x5AC; // float32
                constexpr std::ptrdiff_t m_b_init_from_killed_parent_particles = 0x5B0; // bool
                constexpr std::ptrdiff_t m_n_snapshot_control_point = 0x5B4; // int32
                constexpr std::ptrdiff_t m_n_limit_per_update = 0x5B8; // int32
                constexpr std::ptrdiff_t m_b_force_emit_on_first_update = 0x5BC; // bool
                constexpr std::ptrdiff_t m_b_force_emit_on_last_update = 0x5BD; // bool
            }
            // Parent: c_particle_function_emitter
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_noise_emitter {
                constexpr std::ptrdiff_t m_fl_emission_duration = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_start_time = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_emission_scale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_n_scale_control_point = 0x1C0; // int32
                constexpr std::ptrdiff_t m_n_scale_control_point_field = 0x1C4; // int32
                constexpr std::ptrdiff_t m_n_world_noise_point = 0x1C8; // int32
                constexpr std::ptrdiff_t m_b_abs_val = 0x1CC; // bool
                constexpr std::ptrdiff_t m_b_abs_val_inv = 0x1CD; // bool
                constexpr std::ptrdiff_t m_fl_offset = 0x1D0; // float32
                constexpr std::ptrdiff_t m_fl_output_min = 0x1D4; // float32
                constexpr std::ptrdiff_t m_fl_output_max = 0x1D8; // float32
                constexpr std::ptrdiff_t m_fl_noise_scale = 0x1DC; // float32
                constexpr std::ptrdiff_t m_fl_world_noise_scale = 0x1E0; // float32
                constexpr std::ptrdiff_t m_vec_offset_loc = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_fl_world_time_scale = 0x1F0; // float32
            }
            // Parent: c_particle_function_emitter
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_maintain_emitter {
                constexpr std::ptrdiff_t m_n_particles_to_maintain = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_start_time = 0x308; // float32
                constexpr std::ptrdiff_t m_fl_emission_duration = 0x310; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_emission_rate = 0x460; // float32
                constexpr std::ptrdiff_t m_n_snapshot_control_point = 0x464; // int32
                constexpr std::ptrdiff_t m_b_emit_instantaneously = 0x468; // bool
                constexpr std::ptrdiff_t m_b_final_emit_on_stop = 0x469; // bool
                constexpr std::ptrdiff_t m_fl_scale = 0x470; // CParticleCollectionFloatInput
            }
            // Parent: c_particle_function_force
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_random_force {
                constexpr std::ptrdiff_t m_min_force = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_max_force = 0x1C8; // Vector
            }
            // Parent: c_particle_function_force
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_cp_velocity_force {
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1BC; // int32
                constexpr std::ptrdiff_t m_fl_scale = 0x1C0; // CPerParticleFloatInput
            }
            // Parent: c_particle_function_force
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_parent_vortices {
                constexpr std::ptrdiff_t m_fl_force_scale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_vec_twist_axis = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_b_flip_based_on_yaw = 0x1CC; // bool
            }
            // Parent: c_particle_function_force
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_twist_around_axis {
                constexpr std::ptrdiff_t m_f_force_amount = 0x1BC; // float32
                constexpr std::ptrdiff_t m_twist_axis = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_b_local_space = 0x1CC; // bool
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1D0; // int32
            }
            // Parent: c_particle_function_force
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_attract_to_control_point {
                constexpr std::ptrdiff_t m_vec_component_scale = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_f_force_amount = 0x1C8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_f_falloff_power = 0x318; // float32
                constexpr std::ptrdiff_t m_transform_input = 0x320; // CParticleTransformInput
                constexpr std::ptrdiff_t m_f_force_amount_min = 0x380; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_b_apply_min_force = 0x4D0; // bool
            }
            // Parent: c_particle_function_force
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_force_based_on_distance_to_plane {
                constexpr std::ptrdiff_t m_fl_min_dist = 0x1BC; // float32
                constexpr std::ptrdiff_t m_vec_force_at_min_dist = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_fl_max_dist = 0x1CC; // float32
                constexpr std::ptrdiff_t m_vec_force_at_max_dist = 0x1D0; // Vector
                constexpr std::ptrdiff_t m_vec_plane_normal = 0x1DC; // Vector
                constexpr std::ptrdiff_t m_n_control_point_number = 0x1E8; // int32
                constexpr std::ptrdiff_t m_fl_exponent = 0x1EC; // float32
            }
            // Parent: c_particle_function_force
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_time_varying_force {
                constexpr std::ptrdiff_t m_fl_start_lerp_time = 0x1BC; // float32
                constexpr std::ptrdiff_t m_starting_force = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_fl_end_lerp_time = 0x1CC; // float32
                constexpr std::ptrdiff_t m_ending_force = 0x1D0; // Vector
            }
            // Parent: c_particle_function_force
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_turbulence_force {
                constexpr std::ptrdiff_t m_fl_noise_coord_scale0 = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_noise_coord_scale1 = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_noise_coord_scale2 = 0x1C4; // float32
                constexpr std::ptrdiff_t m_fl_noise_coord_scale3 = 0x1C8; // float32
                constexpr std::ptrdiff_t m_vec_noise_amount0 = 0x1CC; // Vector
                constexpr std::ptrdiff_t m_vec_noise_amount1 = 0x1D8; // Vector
                constexpr std::ptrdiff_t m_vec_noise_amount2 = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_vec_noise_amount3 = 0x1F0; // Vector
            }
            // Parent: c_particle_function_force
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_curl_noise_force {
                constexpr std::ptrdiff_t m_n_noise_type = 0x1BC; // ParticleDirectionNoiseType_t
                constexpr std::ptrdiff_t m_vec_noise_freq = 0x1C0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vec_noise_scale = 0x7F0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vec_offset = 0xE20; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vec_offset_rate = 0x1450; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_fl_worley_seed = 0x1A80; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_worley_jitter = 0x1BD0; // CPerParticleFloatInput
            }
            // Parent: c_particle_function_force
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_per_particle_force {
                constexpr std::ptrdiff_t m_fl_force_scale = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_v_force = 0x310; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_n_cp = 0x940; // int32
            }
            // Parent: c_particle_function_force
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_wind_force {
                constexpr std::ptrdiff_t m_v_force = 0x1BC; // Vector
            }
            // Parent: c_particle_function_force
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_external_wind_force {
                constexpr std::ptrdiff_t m_vec_sample_position = 0x1C0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vec_scale = 0x7F0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_b_sample_wind = 0xE20; // bool
                constexpr std::ptrdiff_t m_b_sample_water = 0xE21; // bool
                constexpr std::ptrdiff_t m_b_dampen_near_water_plane = 0xE22; // bool
                constexpr std::ptrdiff_t m_b_sample_gravity = 0xE23; // bool
                constexpr std::ptrdiff_t m_vec_gravity_force = 0xE28; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_b_use_basic_movement_gravity = 0x1458; // bool
                constexpr std::ptrdiff_t m_fl_local_gravity_scale = 0x1460; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_local_buoyancy_scale = 0x15B0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vec_buoyancy_force = 0x1700; // CPerParticleVecInput
            }
            // Parent: c_particle_function_force
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_external_game_impulse_force {
                constexpr std::ptrdiff_t m_fl_force_scale = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_b_ropes = 0x310; // bool
                constexpr std::ptrdiff_t m_b_ropes_z_only = 0x311; // bool
                constexpr std::ptrdiff_t m_b_explosions = 0x312; // bool
                constexpr std::ptrdiff_t m_b_particles = 0x313; // bool
            }
            // Parent: c_particle_function_force
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_local_acceleration_force {
                constexpr std::ptrdiff_t m_n_cp = 0x1BC; // int32
                constexpr std::ptrdiff_t m_n_scale_cp = 0x1C0; // int32
                constexpr std::ptrdiff_t m_vec_accel = 0x1C8; // CParticleCollectionVecInput
            }
            // Parent: c_particle_function_force
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_density_force {
                constexpr std::ptrdiff_t m_fl_radius_scale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_force_scale = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_target_density = 0x1C4; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_basic_movement {
                constexpr std::ptrdiff_t m_gravity = 0x1B0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_f_drag = 0x7E0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_n_max_constraint_passes = 0x930; // int32
            }
            // Parent: c_particle_function_operator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_fade_and_kill {
                constexpr std::ptrdiff_t m_fl_start_fade_in_time = 0x1B0; // float32
                constexpr std::ptrdiff_t m_fl_end_fade_in_time = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_start_fade_out_time = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_end_fade_out_time = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_start_alpha = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_end_alpha = 0x1C4; // float32
                constexpr std::ptrdiff_t m_b_force_preserve_particle_order = 0x1C8; // bool
            }
            // Parent: c_particle_function_operator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_fade_and_kill_for_tracers {
                constexpr std::ptrdiff_t m_fl_start_fade_in_time = 0x1B0; // float32
                constexpr std::ptrdiff_t m_fl_end_fade_in_time = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_start_fade_out_time = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_end_fade_out_time = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_start_alpha = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_end_alpha = 0x1C4; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_fade_in {
                constexpr std::ptrdiff_t m_fl_fade_in_time_min = 0x1B0; // float32
                constexpr std::ptrdiff_t m_fl_fade_in_time_max = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_fade_in_time_exp = 0x1B8; // float32
                constexpr std::ptrdiff_t m_b_proportional = 0x1BC; // bool
            }
            // Parent: c_particle_function_operator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_fade_out {
                constexpr std::ptrdiff_t m_fl_fade_out_time_min = 0x1B0; // float32
                constexpr std::ptrdiff_t m_fl_fade_out_time_max = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_fade_out_time_exp = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_fade_bias = 0x1BC; // float32
                constexpr std::ptrdiff_t m_b_proportional = 0x1F0; // bool
                constexpr std::ptrdiff_t m_b_ease_in_and_out = 0x1F1; // bool
            }
            // Parent: c_particle_function_operator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_fade_in_simple {
                constexpr std::ptrdiff_t m_fl_fade_in_time = 0x1B0; // float32
                constexpr std::ptrdiff_t m_n_field_output = 0x1B4; // ParticleAttributeIndex_t
            }
            // Parent: c_particle_function_operator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_fade_out_simple {
                constexpr std::ptrdiff_t m_fl_fade_out_time = 0x1B0; // float32
                constexpr std::ptrdiff_t m_n_field_output = 0x1B4; // ParticleAttributeIndex_t
            }
            // Parent: c_particle_function_operator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_clamp_scalar {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_output_min = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_output_max = 0x308; // CPerParticleFloatInput
            }
            // Parent: c_particle_function_operator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_clamp_vector {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vec_output_min = 0x1B8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vec_output_max = 0x7E8; // CPerParticleVecInput
            }
            // Parent: c_particle_function_operator
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_oscillate_scalar {
                constexpr std::ptrdiff_t m_rate_min = 0x1B0; // float32
                constexpr std::ptrdiff_t m_rate_max = 0x1B4; // float32
                constexpr std::ptrdiff_t m_frequency_min = 0x1B8; // float32
                constexpr std::ptrdiff_t m_frequency_max = 0x1BC; // float32
                constexpr std::ptrdiff_t m_n_field = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_b_proportional = 0x1C4; // bool
                constexpr std::ptrdiff_t m_b_proportional_op = 0x1C5; // bool
                constexpr std::ptrdiff_t m_fl_start_time_min = 0x1C8; // float32
                constexpr std::ptrdiff_t m_fl_start_time_max = 0x1CC; // float32
                constexpr std::ptrdiff_t m_fl_end_time_min = 0x1D0; // float32
                constexpr std::ptrdiff_t m_fl_end_time_max = 0x1D4; // float32
                constexpr std::ptrdiff_t m_fl_osc_mult = 0x1D8; // float32
                constexpr std::ptrdiff_t m_fl_osc_add = 0x1DC; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_oscillate_scalar_simple {
                constexpr std::ptrdiff_t m_rate = 0x1B0; // float32
                constexpr std::ptrdiff_t m_frequency = 0x1B4; // float32
                constexpr std::ptrdiff_t m_n_field = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_osc_mult = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_osc_add = 0x1C0; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_oscillate_vector {
                constexpr std::ptrdiff_t m_rate_min = 0x1B0; // Vector
                constexpr std::ptrdiff_t m_rate_max = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_frequency_min = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_frequency_max = 0x1D4; // Vector
                constexpr std::ptrdiff_t m_n_field = 0x1E0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_b_proportional = 0x1E4; // bool
                constexpr std::ptrdiff_t m_b_proportional_op = 0x1E5; // bool
                constexpr std::ptrdiff_t m_b_offset = 0x1E6; // bool
                constexpr std::ptrdiff_t m_fl_start_time_min = 0x1E8; // float32
                constexpr std::ptrdiff_t m_fl_start_time_max = 0x1EC; // float32
                constexpr std::ptrdiff_t m_fl_end_time_min = 0x1F0; // float32
                constexpr std::ptrdiff_t m_fl_end_time_max = 0x1F4; // float32
                constexpr std::ptrdiff_t m_fl_osc_mult = 0x1F8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_osc_add = 0x348; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_rate_scale = 0x498; // CPerParticleFloatInput
            }
            // Parent: c_particle_function_operator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_oscillate_vector_simple {
                constexpr std::ptrdiff_t m_rate = 0x1B0; // Vector
                constexpr std::ptrdiff_t m_frequency = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_n_field = 0x1C8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_osc_mult = 0x1CC; // float32
                constexpr std::ptrdiff_t m_fl_osc_add = 0x1D0; // float32
                constexpr std::ptrdiff_t m_b_offset = 0x1D4; // bool
            }
            // Parent: c_particle_function_operator
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_difference_previous_particle {
                constexpr std::ptrdiff_t m_n_field_input = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_field_output = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_input_min = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_input_max = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_output_min = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_output_max = 0x1C4; // float32
                constexpr std::ptrdiff_t m_n_set_method = 0x1C8; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_b_active_range = 0x1CC; // bool
                constexpr std::ptrdiff_t m_b_set_previous_particle = 0x1CD; // bool
            }
            // Parent: c_particle_function_operator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_point_vector_at_next_particle {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_interpolation = 0x1B8; // CPerParticleFloatInput
            }
            // Parent: c_particle_function_operator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_remap_scalar {
                constexpr std::ptrdiff_t m_n_field_input = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_field_output = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_input_min = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_input_max = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_output_min = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_output_max = 0x1C4; // float32
                constexpr std::ptrdiff_t m_b_old_code = 0x1C8; // bool
            }
            // Parent: c_particle_function_operator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_remap_density_to_vector {
                constexpr std::ptrdiff_t m_fl_radius_scale = 0x1B0; // float32
                constexpr std::ptrdiff_t m_n_field_output = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_density_min = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_density_max = 0x1BC; // float32
                constexpr std::ptrdiff_t m_vec_output_min = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_vec_output_max = 0x1CC; // Vector
                constexpr std::ptrdiff_t m_b_use_parent_density = 0x1D8; // bool
                constexpr std::ptrdiff_t m_n_voxel_grid_resolution = 0x1DC; // int32
            }
            // Parent: c_particle_function_operator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_diffusion {
                constexpr std::ptrdiff_t m_fl_radius_scale = 0x1B0; // float32
                constexpr std::ptrdiff_t m_n_field_output = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_voxel_grid_resolution = 0x1B8; // int32
            }
            // Parent: c_particle_function_operator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_remap_scalar_end_cap {
                constexpr std::ptrdiff_t m_n_field_input = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_field_output = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_input_min = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_input_max = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_output_min = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_output_max = 0x1C4; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_reinitialize_scalar_end_cap {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_output_min = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_output_max = 0x1B8; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_remap_scalar_once_timed {
                constexpr std::ptrdiff_t m_b_proportional = 0x1B0; // bool
                constexpr std::ptrdiff_t m_n_field_input = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_field_output = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_input_min = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_input_max = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_output_min = 0x1C4; // float32
                constexpr std::ptrdiff_t m_fl_output_max = 0x1C8; // float32
                constexpr std::ptrdiff_t m_fl_remap_time = 0x1CC; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_remap_particle_count_on_scalar_end_cap {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_input_min = 0x1B4; // int32
                constexpr std::ptrdiff_t m_n_input_max = 0x1B8; // int32
                constexpr std::ptrdiff_t m_fl_output_min = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_output_max = 0x1C0; // float32
                constexpr std::ptrdiff_t m_b_backwards = 0x1C4; // bool
                constexpr std::ptrdiff_t m_n_set_method = 0x1C8; // ParticleSetMethod_t
            }
            // Parent: c_particle_function_operator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_remap_particle_count_to_scalar {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_input_min = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_n_input_max = 0x308; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_output_min = 0x458; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fl_output_max = 0x5A8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_b_active_range = 0x6F8; // bool
                constexpr std::ptrdiff_t m_n_set_method = 0x6FC; // ParticleSetMethod_t
            }
            // Parent: c_particle_function_operator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_remap_visibility_scalar {
                constexpr std::ptrdiff_t m_n_field_input = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_field_output = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_input_min = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_input_max = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_output_min = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_output_max = 0x1C4; // float32
                constexpr std::ptrdiff_t m_fl_radius_scale = 0x1C8; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_remap_transform_visibility_to_scalar {
                constexpr std::ptrdiff_t m_n_set_method = 0x1B0; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_transform_input = 0x1B8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_n_field_output = 0x218; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_input_min = 0x21C; // float32
                constexpr std::ptrdiff_t m_fl_input_max = 0x220; // float32
                constexpr std::ptrdiff_t m_fl_output_min = 0x224; // float32
                constexpr std::ptrdiff_t m_fl_output_max = 0x228; // float32
                constexpr std::ptrdiff_t m_fl_radius = 0x22C; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_remap_transform_visibility_to_vector {
                constexpr std::ptrdiff_t m_n_set_method = 0x1B0; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_transform_input = 0x1B8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_n_field_output = 0x218; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_input_min = 0x21C; // float32
                constexpr std::ptrdiff_t m_fl_input_max = 0x220; // float32
                constexpr std::ptrdiff_t m_vec_output_min = 0x224; // Vector
                constexpr std::ptrdiff_t m_vec_output_max = 0x230; // Vector
                constexpr std::ptrdiff_t m_fl_radius = 0x23C; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_lerp_scalar {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_output = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_start_time = 0x308; // float32
                constexpr std::ptrdiff_t m_fl_end_time = 0x30C; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_lerp_end_cap_scalar {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_output = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_lerp_time = 0x1B8; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_lerp_end_cap_vector {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vec_output = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_fl_lerp_time = 0x1C0; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_lerp_vector {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vec_output = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_fl_start_time = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_end_time = 0x1C4; // float32
                constexpr std::ptrdiff_t m_n_set_method = 0x1C8; // ParticleSetMethod_t
            }
            // Parent: c_particle_function_operator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_lerp_to_other_attribute {
                constexpr std::ptrdiff_t m_fl_interpolation = 0x1B0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_n_field_input_from = 0x300; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_field_input = 0x304; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_field_output = 0x308; // ParticleAttributeIndex_t
            }
            // Parent: c_particle_function_operator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_remap_speed {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_input_min = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_input_max = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_output_min = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_output_max = 0x1C0; // float32
                constexpr std::ptrdiff_t m_n_set_method = 0x1C4; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_b_ignore_delta = 0x1C8; // bool
            }
            // Parent: c_particle_function_operator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_remap_vectorto_cp {
                constexpr std::ptrdiff_t m_n_out_control_point_number = 0x1B0; // int32
                constexpr std::ptrdiff_t m_n_field_input = 0x1B4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_n_particle_number = 0x1B8; // int32
            }
            // Parent: c_particle_function_operator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_ramp_scalar_linear {
                constexpr std::ptrdiff_t m_rate_min = 0x1B0; // float32
                constexpr std::ptrdiff_t m_rate_max = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_start_time_min = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_start_time_max = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_end_time_min = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_end_time_max = 0x1C4; // float32
                constexpr std::ptrdiff_t m_n_field = 0x1F0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_b_proportional_op = 0x1F4; // bool
            }
            // Parent: c_particle_function_operator
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_ramp_scalar_spline {
                constexpr std::ptrdiff_t m_rate_min = 0x1B0; // float32
                constexpr std::ptrdiff_t m_rate_max = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_start_time_min = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_start_time_max = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fl_end_time_min = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl_end_time_max = 0x1C4; // float32
                constexpr std::ptrdiff_t m_fl_bias = 0x1C8; // float32
                constexpr std::ptrdiff_t m_n_field = 0x1F0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_b_proportional_op = 0x1F4; // bool
                constexpr std::ptrdiff_t m_b_ease_out = 0x1F5; // bool
            }
            // Parent: c_particle_function_operator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_ramp_scalar_linear_simple {
                constexpr std::ptrdiff_t m_rate = 0x1B0; // float32
                constexpr std::ptrdiff_t m_fl_start_time = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_end_time = 0x1B8; // float32
                constexpr std::ptrdiff_t m_n_field = 0x1E0; // ParticleAttributeIndex_t
            }
            // Parent: c_particle_function_operator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_ramp_scalar_spline_simple {
                constexpr std::ptrdiff_t m_rate = 0x1B0; // float32
                constexpr std::ptrdiff_t m_fl_start_time = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_end_time = 0x1B8; // float32
                constexpr std::ptrdiff_t m_n_field = 0x1E0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_b_ease_out = 0x1E4; // bool
            }
            // Parent: c_particle_function_operator
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_chladni_wave {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_input_min = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_input_max = 0x308; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_output_min = 0x458; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fl_output_max = 0x5A8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vec_wave_length = 0x6F8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vec_harmonics = 0xD28; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_n_set_method = 0x1358; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_n_local_space_control_point = 0x135C; // int32
                constexpr std::ptrdiff_t m_b3_d = 0x1360; // bool
            }
            // Parent: c_particle_function_operator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_noise {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_fl_output_min = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_output_max = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl4_noise_scale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_b_additive = 0x1C0; // bool
                constexpr std::ptrdiff_t m_fl_noise_animation_time_scale = 0x1C4; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_vector_noise {
                constexpr std::ptrdiff_t m_n_field_output = 0x1B0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vec_output_min = 0x1B4; // Vector
                constexpr std::ptrdiff_t m_vec_output_max = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_fl4_noise_scale = 0x1CC; // float32
                constexpr std::ptrdiff_t m_b_additive = 0x1D0; // bool
                constexpr std::ptrdiff_t m_b_offset = 0x1D1; // bool
                constexpr std::ptrdiff_t m_fl_noise_animation_time_scale = 0x1D4; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_decay {
                constexpr std::ptrdiff_t m_b_rope_decay = 0x1B0; // bool
                constexpr std::ptrdiff_t m_b_force_preserve_particle_order = 0x1B1; // bool
            }
            // Parent: c_particle_function_operator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_decay_offscreen {
                constexpr std::ptrdiff_t m_fl_offscreen_time = 0x1B0; // CParticleCollectionFloatInput
            }
            // Parent: c_particle_function_operator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_end_cap_timed_freeze {
                constexpr std::ptrdiff_t m_fl_freeze_time = 0x1B0; // CParticleCollectionFloatInput
            }
            // Parent: c_particle_function_operator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_end_cap_timed_decay {
                constexpr std::ptrdiff_t m_fl_decay_time = 0x1B0; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_end_cap_decay {
            }
            // Parent: c_particle_function_operator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_velocity_decay {
                constexpr std::ptrdiff_t m_fl_min_velocity = 0x1B0; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_alpha_decay {
                constexpr std::ptrdiff_t m_fl_min_alpha = 0x1B0; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_radius_decay {
                constexpr std::ptrdiff_t m_fl_min_radius = 0x1B0; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_decay_maintain_count {
                constexpr std::ptrdiff_t m_n_particles_to_maintain = 0x1B0; // int32
                constexpr std::ptrdiff_t m_fl_decay_delay = 0x1B4; // float32
                constexpr std::ptrdiff_t m_n_snapshot_control_point = 0x1B8; // int32
                constexpr std::ptrdiff_t m_b_lifespan_decay = 0x1BC; // bool
                constexpr std::ptrdiff_t m_fl_scale = 0x1C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_b_kill_newest = 0x310; // bool
            }
            // Parent: c_particle_function_operator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_decay_clamp_count {
                constexpr std::ptrdiff_t m_n_count = 0x1B0; // CParticleCollectionFloatInput
            }
            // Parent: c_particle_function_operator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_cull {
                constexpr std::ptrdiff_t m_fl_cull_perc = 0x1B0; // float32
                constexpr std::ptrdiff_t m_fl_cull_start = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_cull_end = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_cull_exp = 0x1BC; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_general_spin {
                constexpr std::ptrdiff_t m_n_spin_rate_degrees = 0x1B0; // int32
                constexpr std::ptrdiff_t m_n_spin_rate_min_degrees = 0x1B4; // int32
                constexpr std::ptrdiff_t m_f_spin_rate_stop_time = 0x1BC; // float32
            }
            // Parent: c_particle_function_operator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_spin_update_base {
            }
            // Parent: c_general_spin
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_spin {
            }
            // Parent: c_spin_update_base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_spin_update {
            }
            // Parent: c_general_spin
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_spin_yaw {
            }
            // Parent: c_particle_function_operator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_op_interpolate_radius {
                constexpr std::ptrdiff_t m_fl_start_time = 0x1B0; // float32
                constexpr std::ptrdiff_t m_fl_end_time = 0x1B4; // float32
                constexpr std::ptrdiff_t m_fl_start_scale = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_end_scale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_b_ease_in_and_out = 0x1C0; // bool
                constexpr std::ptrdiff_t m_fl_bias = 0x1C4; // float32
            }
        }
        // Module: libpulse_system.so
        // Classes count: 51
        // Enums count: 0
        namespace libpulse_system {
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace fake_entity_t_api {
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_register_info {
                constexpr std::ptrdiff_t m_n_reg = 0x0; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_type = 0x8; // CPulseValueFullType
                constexpr std::ptrdiff_t m_origin_name = 0x18; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_n_written_by_instruction = 0x50; // int32
                constexpr std::ptrdiff_t m_n_last_read_by_instruction = 0x54; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_chunk {
                constexpr std::ptrdiff_t m_instructions = 0x0; // CUtlLeanVector< PGDInstruction_t >
                constexpr std::ptrdiff_t m_registers = 0x10; // CUtlLeanVector< CPulse_RegisterInfo >
                constexpr std::ptrdiff_t m_instruction_editor_i_ds = 0x20; // CUtlLeanVector< PulseDocNodeID_t >
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_variable {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_description = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_type = 0x10; // CPulseValueFullType
                constexpr std::ptrdiff_t m_default_value = 0x20; // KeyValues3
                constexpr std::ptrdiff_t m_b_is_public = 0x32; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_constant {
                constexpr std::ptrdiff_t m_type = 0x0; // CPulseValueFullType
                constexpr std::ptrdiff_t m_value = 0x10; // KeyValues3
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_public_output {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_description = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_param_type = 0x10; // CPulseValueFullType
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_output_connection {
                constexpr std::ptrdiff_t m_source_output = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_target_entity = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_target_input = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_param = 0x18; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_invoke_binding {
                constexpr std::ptrdiff_t m_register_map = 0x0; // PulseRegisterMap_t
                constexpr std::ptrdiff_t m_func_name = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_n_cell_index = 0x28; // PulseRuntimeCellIndex_t
                constexpr std::ptrdiff_t m_n_src_chunk = 0x2C; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_n_src_instruction = 0x30; // int32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_call_info {
                constexpr std::ptrdiff_t m_port_name = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_n_editor_node_id = 0x8; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_register_map = 0x10; // PulseRegisterMap_t
                constexpr std::ptrdiff_t m_call_method_id = 0x30; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_n_src_chunk = 0x34; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_n_src_instruction = 0x38; // int32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_graph_def {
                constexpr std::ptrdiff_t m_domain_identifier = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_parent_map_name = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_chunks = 0x18; // CUtlVector< CPulse_Chunk* >
                constexpr std::ptrdiff_t m_cells = 0x30; // CUtlVector< CPulseCell_Base* >
                constexpr std::ptrdiff_t m_vars = 0x48; // CUtlVector< CPulse_Variable >
                constexpr std::ptrdiff_t m_public_outputs = 0x60; // CUtlVector< CPulse_PublicOutput >
                constexpr std::ptrdiff_t m_invoke_bindings = 0x78; // CUtlVector< CPulse_InvokeBinding* >
                constexpr std::ptrdiff_t m_call_infos = 0x90; // CUtlVector< CPulse_CallInfo* >
                constexpr std::ptrdiff_t m_constants = 0xA8; // CUtlVector< CPulse_Constant >
                constexpr std::ptrdiff_t m_output_connections = 0xC0; // CUtlVector< CPulse_OutputConnection* >
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace c_pulse_mathlib {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace c_pulse_test_script_lib {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace pulse_register_map_t {
                constexpr std::ptrdiff_t m_inparams = 0x0; // KeyValues3
                constexpr std::ptrdiff_t m_outparams = 0x10; // KeyValues3
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace pgd_instruction_t {
                constexpr std::ptrdiff_t m_n_code = 0x0; // PulseInstructionCode_t
                constexpr std::ptrdiff_t m_n_var = 0x4; // PulseRuntimeVarIndex_t
                constexpr std::ptrdiff_t m_n_reg0 = 0x8; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_n_reg1 = 0xA; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_n_reg2 = 0xC; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_n_invoke_binding_index = 0x10; // PulseRuntimeInvokeIndex_t
                constexpr std::ptrdiff_t m_n_chunk = 0x14; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_n_dest_instruction = 0x18; // int32
                constexpr std::ptrdiff_t m_n_call_info_index = 0x1C; // PulseRuntimeCallInfoIndex_t
                constexpr std::ptrdiff_t m_n_const_idx = 0x20; // PulseRuntimeConstantIndex_t
                constexpr std::ptrdiff_t m_domain_value = 0x28; // CBufferString
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_outflow_connection {
                constexpr std::ptrdiff_t m_source_outflow_name = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_n_dest_chunk = 0x8; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_n_instruction = 0xC; // int32
            }
            // Parent: c_pulse_outflow_connection
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_resume_point {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_cell_base {
                constexpr std::ptrdiff_t m_n_editor_node_id = 0x8; // PulseDocNodeID_t
            }
            // Parent: c_pulse_cell_base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_cell_base_flow {
            }
            // Parent: c_pulse_cell_base_flow
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_cell_inflow_base_entrypoint {
                constexpr std::ptrdiff_t m_entry_chunk = 0x48; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_register_map = 0x50; // PulseRegisterMap_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_runtime_method_arg {
                constexpr std::ptrdiff_t m_name = 0x0; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_description = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_type = 0x40; // CPulseValueFullType
            }
            // Parent: c_pulse_cell_base_flow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_cell_base_yielding_inflow {
            }
            // Parent: c_pulse_cell_base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_cell_base_value {
            }
            // Parent: c_pulse_cell_base_yielding_inflow
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace c_pulse_cell_inflow_wait {
                constexpr std::ptrdiff_t m_wake_resume = 0x48; // CPulse_ResumePoint
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_cell_outflow_cycle_ordered_instance_state_t {
                constexpr std::ptrdiff_t m_n_next_index = 0x0; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_cell_outflow_cycle_shuffled_instance_state_t {
                constexpr std::ptrdiff_t m_shuffle = 0x0; // CUtlVectorFixedGrowable< uint8 >
                constexpr std::ptrdiff_t m_n_next_shuffle = 0x20; // int32
            }
            // Parent: c_pulse_cell_base_flow
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace c_pulse_cell_outflow_test_random_yes_no {
                constexpr std::ptrdiff_t m_yes = 0x48; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_no = 0x58; // CPulse_OutflowConnection
            }
            // Parent: c_pulse_cell_base_flow
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace c_pulse_cell_outflow_test_explicit_yes_no {
                constexpr std::ptrdiff_t m_yes = 0x48; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_no = 0x58; // CPulse_OutflowConnection
            }
            // Parent: c_pulse_cell_base_value
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace c_pulse_cell_value_test_value50 {
            }
            // Parent: c_pulse_cell_base_value
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace c_pulse_cell_value_random_int {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_cell_timeline_timeline_event_t {
                constexpr std::ptrdiff_t m_fl_time_from_previous = 0x0; // float32
                constexpr std::ptrdiff_t m_b_pause_for_previous_events = 0x4; // bool
                constexpr std::ptrdiff_t m_b_call_mode_sync = 0x5; // bool
                constexpr std::ptrdiff_t m_event_outflow = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Fields count: 7
            namespace fake_entity_t {
                constexpr std::ptrdiff_t m_n_handle = 0x0; // PulseTestEHandle_t
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_class = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_b_destroyed = 0x18; // bool
                constexpr std::ptrdiff_t m_p_associated_graph_instance = 0x20; // CPulseGraphInstance_TestDomain*
                constexpr std::ptrdiff_t m_b_func_was_called = 0x28; // bool
                constexpr std::ptrdiff_t m_f_value = 0x2C; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace c_pulse_graph_instance_test_domain {
                constexpr std::ptrdiff_t m_b_is_running_unit_tests = 0xD8; // bool
                constexpr std::ptrdiff_t m_b_explicit_time_stepping = 0xD9; // bool
                constexpr std::ptrdiff_t m_b_expecting_to_destroy_with_yielded_cursors = 0xDA; // bool
                constexpr std::ptrdiff_t m_n_next_validate_index = 0xDC; // int32
                constexpr std::ptrdiff_t m_tracepoints = 0xE0; // CUtlVector< CUtlString >
                constexpr std::ptrdiff_t m_b_test_yes_or_no_path = 0xF8; // bool
            }
            // Parent: c_pulse_cell_base_flow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace c_pulse_cell_step_test_domain_tracepoint {
            }
            // Parent: c_pulse_cell_base_flow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace c_pulse_cell_step_test_domain_create_fake_entity {
            }
            // Parent: c_pulse_cell_base_flow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace c_pulse_cell_step_test_domain_destroy_fake_entity {
            }
            // Parent: c_pulse_cell_base_flow
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            // MPulseEditorHeaderText
            namespace c_pulse_cell_step_test_domain_ent_fire {
                constexpr std::ptrdiff_t m_input = 0x48; // CUtlString
            }
            // Parent: c_pulse_cell_base_value
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace c_pulse_cell_val_test_domain_get_entity_name {
            }
            // Parent: c_pulse_cell_base_value
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace c_pulse_cell_val_test_domain_find_entity_by_name {
            }
            // Parent: c_pulse_cell_base_yielding_inflow
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace c_pulse_cell_test_wait_with_cursor_state {
                constexpr std::ptrdiff_t m_wake_resume = 0x48; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_wake_cancel = 0x58; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_wake_fail = 0x68; // CPulse_ResumePoint
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_cell_test_wait_with_cursor_state_cursor_state_t {
                constexpr std::ptrdiff_t fl_wait_value = 0x0; // float32
                constexpr std::ptrdiff_t b_fail_on_cancel = 0x4; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace c_pulse_test_funcs_derived_domain {
            }
            // Parent: c_pulse_cell_base_flow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace c_pulse_cell_test_no_inflow {
            }
            // Parent: c_pulse_cell_base_flow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace c_pulse_cell_test_multi_inflow_with_default {
            }
            // Parent: c_pulse_cell_base_flow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace c_pulse_cell_test_multi_inflow_no_default {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            namespace c_pulse_graph_instance_turtle_graphics {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace c_pulse_cursor_funcs {
            }
            // Parent: c_pulse_cell_base_yielding_inflow
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_cell_wait_for_cursors_with_tag_base {
                constexpr std::ptrdiff_t m_n_cursors_allowed_to_wait = 0x48; // int32
                constexpr std::ptrdiff_t m_wait_complete = 0x50; // CPulse_ResumePoint
            }
            // Parent: None
            // Fields count: 1
            namespace c_pulse_cell_wait_for_cursors_with_tag_base_cursor_state_t {
                constexpr std::ptrdiff_t m_tag_name = 0x0; // CUtlSymbolLarge
            }
            // Parent: c_pulse_cell_wait_for_cursors_with_tag_base
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace c_pulse_cell_wait_for_cursors_with_tag {
                constexpr std::ptrdiff_t m_b_tag_self_when_complete = 0x60; // bool
                constexpr std::ptrdiff_t m_n_desired_kill_priority = 0x64; // PulseCursorCancelPriority_t
            }
            // Parent: c_pulse_cell_wait_for_cursors_with_tag_base
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace c_pulse_cell_cursor_queue {
                constexpr std::ptrdiff_t m_n_cursors_allowed_to_run_parallel = 0x60; // int32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace c_pulse_test_funcs_library_a {
            }
        }
        // Module: librendersystemvulkan.so
        // Classes count: 3
        // Enums count: 0
        namespace librendersystemvulkan {
            // Parent: None
            // Fields count: 7
            namespace render_input_layout_field_t {
                constexpr std::ptrdiff_t m_p_semantic_name = 0x0; // uint8[32]
                constexpr std::ptrdiff_t m_n_semantic_index = 0x20; // int32
                constexpr std::ptrdiff_t m_format = 0x24; // uint32
                constexpr std::ptrdiff_t m_n_offset = 0x28; // int32
                constexpr std::ptrdiff_t m_n_slot = 0x2C; // int32
                constexpr std::ptrdiff_t m_n_slot_type = 0x30; // RenderSlotType_t
                constexpr std::ptrdiff_t m_n_instance_step_rate = 0x34; // int32
            }
            // Parent: None
            // Fields count: 4
            namespace vs_input_signature_element_t {
                constexpr std::ptrdiff_t m_p_name = 0x0; // char[64]
                constexpr std::ptrdiff_t m_p_semantic = 0x40; // char[64]
                constexpr std::ptrdiff_t m_p_d3d_semantic_name = 0x80; // char[64]
                constexpr std::ptrdiff_t m_n_d3d_semantic_index = 0xC0; // int32
            }
            // Parent: None
            // Fields count: 1
            namespace vs_input_signature_t {
                constexpr std::ptrdiff_t m_elems = 0x0; // CUtlVector< VsInputSignatureElement_t >
            }
        }
        // Module: libresourcesystem.so
        // Classes count: 57
        // Enums count: 0
        namespace libresourcesystem {
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace constant_info_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_name_token = 0x8; // CUtlStringToken
                constexpr std::ptrdiff_t m_fl_value = 0xC; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace variable_info_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_name_token = 0x8; // CUtlStringToken
                constexpr std::ptrdiff_t m_n_index = 0xC; // FuseVariableIndex_t
                constexpr std::ptrdiff_t m_n_num_components = 0xE; // uint8
                constexpr std::ptrdiff_t m_e_var_type = 0xF; // FuseVariableType_t
                constexpr std::ptrdiff_t m_e_access = 0x10; // FuseVariableAccess_t
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace function_info_t {
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_name_token = 0x10; // CUtlStringToken
                constexpr std::ptrdiff_t m_n_param_count = 0x14; // int32
                constexpr std::ptrdiff_t m_n_index = 0x18; // FuseFunctionIndex_t
                constexpr std::ptrdiff_t m_b_is_pure = 0x1A; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_fuse_program {
                constexpr std::ptrdiff_t m_program_buffer = 0x0; // CUtlVector< uint8 >
                constexpr std::ptrdiff_t m_variables_read = 0x18; // CUtlVector< FuseVariableIndex_t >
                constexpr std::ptrdiff_t m_variables_written = 0x30; // CUtlVector< FuseVariableIndex_t >
                constexpr std::ptrdiff_t m_n_max_temp_vars_used = 0x48; // int32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_fuse_symbol_table {
                constexpr std::ptrdiff_t m_constants = 0x0; // CUtlVector< ConstantInfo_t >
                constexpr std::ptrdiff_t m_variables = 0x18; // CUtlVector< VariableInfo_t >
                constexpr std::ptrdiff_t m_functions = 0x30; // CUtlVector< FunctionInfo_t >
                constexpr std::ptrdiff_t m_constant_map = 0x48; // CUtlHashtable< CUtlStringToken, int32 >
                constexpr std::ptrdiff_t m_variable_map = 0x68; // CUtlHashtable< CUtlStringToken, int32 >
                constexpr std::ptrdiff_t m_function_map = 0x88; // CUtlHashtable< CUtlStringToken, int32 >
            }
            // Parent: None
            // Fields count: 2
            namespace aabb_t {
                constexpr std::ptrdiff_t m_v_min_bounds = 0x0; // Vector
                constexpr std::ptrdiff_t m_v_max_bounds = 0xC; // Vector
            }
            // Parent: None
            // Fields count: 2
            namespace packed_aabb_t {
                constexpr std::ptrdiff_t m_n_packed_min = 0x0; // uint32
                constexpr std::ptrdiff_t m_n_packed_max = 0x4; // uint32
            }
            // Parent: None
            // Fields count: 4
            namespace four_quaternions {
                constexpr std::ptrdiff_t x = 0x0; // fltx4
                constexpr std::ptrdiff_t y = 0x10; // fltx4
                constexpr std::ptrdiff_t z = 0x20; // fltx4
                constexpr std::ptrdiff_t w = 0x30; // fltx4
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace test_resource_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_test_resource_t {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_procedural_test_resource_t {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_manifest_test_resource_t {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace manifest_test_resource_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_child = 0x8; // CStrongHandle< InfoForResourceTypeManifestTestResource_t >
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_cv_data_resource {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_i_pulse_graph_def {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_type_script_resource {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_java_script_resource {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_i_particle_system_definition {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_i_particle_snapshot {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_anim_data {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_animation_group {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_sequence_group_data {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_i_material2 {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_morph_set_data {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_render_mesh {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_model {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_texture_base {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_i_vector_graphic {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_cv_sound_event_script_list {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_cv_sound_stack_script_list {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_voice_container_base {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_cv_mix_list_resource {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_phys_aggregate_data {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_cv_phys_x_surface_properties_list {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_entity_lump {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_world_node {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_world_t {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_voxel_visibility {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_post_processing_resource {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_panorama_style {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_panorama_layout {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_panorama_dynamic_images {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_dota_item_definition_resource {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_cdota_patch_notes_list {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_cdota_novels_list {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_i_anim_graph_model_binding {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_choreo_scene_file_data {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_cdac_game_defs_data {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_composite_material_kit {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_gc_exportable_external_data {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_smart_prop {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_ccsgo_econ_item {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_response_rules_list {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_nm_skeleton {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_nm_clip {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_nm_graph {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_nm_graph_data_set {
            }
        }
        // Module: libscenefilecache.so
        // Classes count: 0
        // Enums count: 0
        namespace libscenefilecache {
        }
        // Module: libscenesystem.so
        // Classes count: 9
        // Enums count: 0
        namespace libscenesystem {
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace cssds_end_frame_view_info {
                constexpr std::ptrdiff_t m_n_view_id = 0x0; // uint64
                constexpr std::ptrdiff_t m_view_name = 0x8; // CUtlString
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace cssds_msg_end_frame {
                constexpr std::ptrdiff_t m_views = 0x0; // CUtlVector< CSSDSEndFrameViewInfo >
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace scene_view_id_t {
                constexpr std::ptrdiff_t m_n_view_id = 0x0; // uint64
                constexpr std::ptrdiff_t m_n_frame_count = 0x8; // uint64
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace cssds_msg_view_render {
                constexpr std::ptrdiff_t m_view_id = 0x0; // SceneViewId_t
                constexpr std::ptrdiff_t m_view_name = 0x10; // CUtlString
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace cssds_msg_layer_base {
                constexpr std::ptrdiff_t m_view_id = 0x0; // SceneViewId_t
                constexpr std::ptrdiff_t m_view_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_n_layer_index = 0x18; // int32
                constexpr std::ptrdiff_t m_n_layer_id = 0x20; // uint64
                constexpr std::ptrdiff_t m_layer_name = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_display_text = 0x30; // CUtlString
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace cssds_msg_view_target {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_texture_id = 0x8; // uint64
                constexpr std::ptrdiff_t m_n_width = 0x10; // int32
                constexpr std::ptrdiff_t m_n_height = 0x14; // int32
                constexpr std::ptrdiff_t m_n_requested_width = 0x18; // int32
                constexpr std::ptrdiff_t m_n_requested_height = 0x1C; // int32
                constexpr std::ptrdiff_t m_n_num_mip_levels = 0x20; // int32
                constexpr std::ptrdiff_t m_n_depth = 0x24; // int32
                constexpr std::ptrdiff_t m_n_multisample_num_samples = 0x28; // int32
                constexpr std::ptrdiff_t m_n_format = 0x2C; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace cssds_msg_view_target_list {
                constexpr std::ptrdiff_t m_view_id = 0x0; // SceneViewId_t
                constexpr std::ptrdiff_t m_view_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_targets = 0x18; // CUtlVector< CSSDSMsg_ViewTarget >
            }
            // Parent: cssds_msg_layer_base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace cssds_msg_pre_layer {
            }
            // Parent: cssds_msg_layer_base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace cssds_msg_post_layer {
            }
        }
        // Module: libschemasystem.so
        // Classes count: 6
        // Enums count: 0
        namespace libschemasystem {
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_c_resource_manifest_internal {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_example_schema_v_data_monomorphic {
                constexpr std::ptrdiff_t m_n_example1 = 0x0; // int32
                constexpr std::ptrdiff_t m_n_example2 = 0x4; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_example_schema_v_data_polymorphic_base {
                constexpr std::ptrdiff_t m_n_base = 0x8; // int32
            }
            // Parent: c_example_schema_v_data_polymorphic_base
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_example_schema_v_data_polymorphic_derived_a {
                constexpr std::ptrdiff_t m_n_derived_a = 0xC; // int32
            }
            // Parent: c_example_schema_v_data_polymorphic_base
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_example_schema_v_data_polymorphic_derived_b {
                constexpr std::ptrdiff_t m_n_derived_b = 0xC; // int32
            }
            // Parent: None
            // Fields count: 22
            namespace c_schema_system_internal_registration {
                constexpr std::ptrdiff_t m_vector2_d = 0x0; // Vector2D
                constexpr std::ptrdiff_t m_vector = 0x8; // Vector
                constexpr std::ptrdiff_t m_vector_aligned = 0x20; // VectorAligned
                constexpr std::ptrdiff_t m_quaternion = 0x30; // Quaternion
                constexpr std::ptrdiff_t m_q_angle = 0x40; // QAngle
                constexpr std::ptrdiff_t m_rotation_vector = 0x4C; // RotationVector
                constexpr std::ptrdiff_t m_radian_euler = 0x58; // RadianEuler
                constexpr std::ptrdiff_t m_degree_euler = 0x64; // DegreeEuler
                constexpr std::ptrdiff_t m_quaternion_storage = 0x70; // QuaternionStorage
                constexpr std::ptrdiff_t m_matrix3x4_t = 0x80; // matrix3x4_t
                constexpr std::ptrdiff_t m_matrix3x4a_t = 0xB0; // matrix3x4a_t
                constexpr std::ptrdiff_t m_color = 0xE0; // Color
                constexpr std::ptrdiff_t m_vector4_d = 0xE4; // Vector4D
                constexpr std::ptrdiff_t m_c_transform = 0x100; // CTransform
                constexpr std::ptrdiff_t m_p_key_values = 0x120; // KeyValues*
                constexpr std::ptrdiff_t m_c_utl_binary_block = 0x128; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_c_utl_string = 0x140; // CUtlString
                constexpr std::ptrdiff_t m_c_utl_symbol = 0x148; // CUtlSymbol
                constexpr std::ptrdiff_t m_string_token = 0x14C; // CUtlStringToken
                constexpr std::ptrdiff_t m_string_token_with_storage = 0x150; // CUtlStringTokenWithStorage
                constexpr std::ptrdiff_t m_resource_types = 0x168; // CResourceArray< CResourcePointer< CResourceString > >
                constexpr std::ptrdiff_t m_kv3 = 0x170; // KeyValues3
            }
        }
        // Module: libserver.so
        // Classes count: 233
        // Enums count: 0
        namespace libserver {
            // Parent: None
            // Fields count: 2
            namespace extent {
                constexpr std::ptrdiff_t lo = 0x0; // Vector
                constexpr std::ptrdiff_t hi = 0xC; // Vector
            }
            // Parent: None
            // Fields count: 2
            namespace nav_gravity_t {
                constexpr std::ptrdiff_t m_v_gravity = 0x0; // Vector
                constexpr std::ptrdiff_t m_b_default = 0xC; // bool
            }
            // Parent: None
            // Fields count: 0
            namespace c_nav_volume {
            }
            // Parent: c_nav_volume
            // Fields count: 1
            namespace c_nav_volume_vector {
                constexpr std::ptrdiff_t m_b_has_been_pre_filtered = 0x58; // bool
            }
            // Parent: c_nav_volume_vector
            // Fields count: 0
            namespace c_nav_volume_all {
            }
            // Parent: c_nav_volume
            // Fields count: 2
            namespace c_nav_volume_sphere {
                constexpr std::ptrdiff_t m_v_center = 0x50; // Vector
                constexpr std::ptrdiff_t m_fl_radius = 0x5C; // float32
            }
            // Parent: c_nav_volume_sphere
            // Fields count: 1
            namespace c_nav_volume_spherical_shell {
                constexpr std::ptrdiff_t m_fl_radius_inner = 0x60; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace c_range_float {
                constexpr std::ptrdiff_t m_p_value = 0x0; // float32[2]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace c_range_int {
                constexpr std::ptrdiff_t m_p_value = 0x0; // int32[2]
            }
            // Parent: None
            // Fields count: 0
            namespace c_entity_component {
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // NetworkVarNames: m_nameStringableIndex (int32)
            namespace c_entity_identity {
                constexpr std::ptrdiff_t m_name_stringable_index = 0x14; // int32
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_designer_name = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flags = 0x30; // uint32
                constexpr std::ptrdiff_t m_world_group_id = 0x38; // WorldGroupId_t
                constexpr std::ptrdiff_t m_f_data_object_types = 0x3C; // uint32
                constexpr std::ptrdiff_t m_path_index = 0x40; // ChangeAccessorFieldPathIndex_t
                constexpr std::ptrdiff_t m_p_prev = 0x58; // CEntityIdentity*
                constexpr std::ptrdiff_t m_p_next = 0x60; // CEntityIdentity*
                constexpr std::ptrdiff_t m_p_prev_by_class = 0x68; // CEntityIdentity*
                constexpr std::ptrdiff_t m_p_next_by_class = 0x70; // CEntityIdentity*
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity *)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            namespace c_entity_instance {
                constexpr std::ptrdiff_t m_isz_private_v_scripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_p_entity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_c_script_component = 0x28; // CScriptComponent*
                constexpr std::ptrdiff_t m_b_visiblein_pvs = 0x30; // bool
            }
            // Parent: c_entity_component
            // Fields count: 1
            namespace c_script_component {
                constexpr std::ptrdiff_t m_script_class_name = 0x30; // CUtlSymbolLarge
            }
            // Parent: c_entity_component
            // Fields count: 2
            namespace c_body_component {
                constexpr std::ptrdiff_t m_p_scene_node = 0x8; // CGameSceneNode*
                constexpr std::ptrdiff_t m_p_chain_entity = 0x28; // CNetworkVarChainer
            }
            // Parent: c_body_component
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            namespace c_body_component_point {
                constexpr std::ptrdiff_t m_scene_node = 0x60; // CGameSceneNode
                constexpr std::ptrdiff_t m_p_chain_entity = 0x1C0; // CNetworkVarChainer
            }
            // Parent: c_body_component
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
            namespace c_body_component_skeleton_instance {
                constexpr std::ptrdiff_t m_skeleton_instance = 0x60; // CSkeletonInstance
                constexpr std::ptrdiff_t m_p_chain_entity = 0x450; // CNetworkVarChainer
            }
            // Parent: c_entity_component
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bvDisabledHitGroups (uint32)
            namespace c_hitbox_component {
                constexpr std::ptrdiff_t m_bv_disabled_hit_groups = 0x24; // uint32[1]
            }
            // Parent: c_entity_component
            // Fields count: 67
            //
            // Metadata:
            // NetworkVarNames: m_Color (Color)
            // NetworkVarNames: m_SecondaryColor (Color)
            // NetworkVarNames: m_flBrightness (float)
            // NetworkVarNames: m_flBrightnessScale (float)
            // NetworkVarNames: m_flBrightnessMult (float)
            // NetworkVarNames: m_flRange (float)
            // NetworkVarNames: m_flFalloff (float)
            // NetworkVarNames: m_flAttenuation0 (float)
            // NetworkVarNames: m_flAttenuation1 (float)
            // NetworkVarNames: m_flAttenuation2 (float)
            // NetworkVarNames: m_flTheta (float)
            // NetworkVarNames: m_flPhi (float)
            // NetworkVarNames: m_hLightCookie (HRenderTextureStrong)
            // NetworkVarNames: m_nCascades (int)
            // NetworkVarNames: m_nCastShadows (int)
            // NetworkVarNames: m_nShadowWidth (int)
            // NetworkVarNames: m_nShadowHeight (int)
            // NetworkVarNames: m_bRenderDiffuse (bool)
            // NetworkVarNames: m_nRenderSpecular (int)
            // NetworkVarNames: m_bRenderTransmissive (bool)
            // NetworkVarNames: m_flOrthoLightWidth (float)
            // NetworkVarNames: m_flOrthoLightHeight (float)
            // NetworkVarNames: m_nStyle (int)
            // NetworkVarNames: m_Pattern (CUtlString)
            // NetworkVarNames: m_nCascadeRenderStaticObjects (int)
            // NetworkVarNames: m_flShadowCascadeCrossFade (float)
            // NetworkVarNames: m_flShadowCascadeDistanceFade (float)
            // NetworkVarNames: m_flShadowCascadeDistance0 (float)
            // NetworkVarNames: m_flShadowCascadeDistance1 (float)
            // NetworkVarNames: m_flShadowCascadeDistance2 (float)
            // NetworkVarNames: m_flShadowCascadeDistance3 (float)
            // NetworkVarNames: m_nShadowCascadeResolution0 (int)
            // NetworkVarNames: m_nShadowCascadeResolution1 (int)
            // NetworkVarNames: m_nShadowCascadeResolution2 (int)
            // NetworkVarNames: m_nShadowCascadeResolution3 (int)
            // NetworkVarNames: m_bUsesBakedShadowing (bool)
            // NetworkVarNames: m_nShadowPriority (int)
            // NetworkVarNames: m_nBakedShadowIndex (int)
            // NetworkVarNames: m_bRenderToCubemaps (bool)
            // NetworkVarNames: m_nDirectLight (int)
            // NetworkVarNames: m_nIndirectLight (int)
            // NetworkVarNames: m_flFadeMinDist (float)
            // NetworkVarNames: m_flFadeMaxDist (float)
            // NetworkVarNames: m_flShadowFadeMinDist (float)
            // NetworkVarNames: m_flShadowFadeMaxDist (float)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bFlicker (bool)
            // NetworkVarNames: m_bPrecomputedFieldsValid (bool)
            // NetworkVarNames: m_vPrecomputedBoundsMins (Vector)
            // NetworkVarNames: m_vPrecomputedBoundsMaxs (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent (Vector)
            // NetworkVarNames: m_flPrecomputedMaxRange (float)
            // NetworkVarNames: m_nFogLightingMode (int)
            // NetworkVarNames: m_flFogContributionStength (float)
            // NetworkVarNames: m_flNearClipPlane (float)
            // NetworkVarNames: m_SkyColor (Color)
            // NetworkVarNames: m_flSkyIntensity (float)
            // NetworkVarNames: m_SkyAmbientBounce (Color)
            // NetworkVarNames: m_bUseSecondaryColor (bool)
            // NetworkVarNames: m_bMixedShadows (bool)
            // NetworkVarNames: m_flLightStyleStartTime (GameTime_t)
            // NetworkVarNames: m_flCapsuleLength (float)
            // NetworkVarNames: m_flMinRoughness (float)
            namespace c_light_component {
                constexpr std::ptrdiff_t m_p_chain_entity = 0x58; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_color = 0x95; // Color
                constexpr std::ptrdiff_t m_secondary_color = 0x99; // Color
                constexpr std::ptrdiff_t m_fl_brightness = 0xA0; // float32
                constexpr std::ptrdiff_t m_fl_brightness_scale = 0xA4; // float32
                constexpr std::ptrdiff_t m_fl_brightness_mult = 0xA8; // float32
                constexpr std::ptrdiff_t m_fl_range = 0xAC; // float32
                constexpr std::ptrdiff_t m_fl_falloff = 0xB0; // float32
                constexpr std::ptrdiff_t m_fl_attenuation0 = 0xB4; // float32
                constexpr std::ptrdiff_t m_fl_attenuation1 = 0xB8; // float32
                constexpr std::ptrdiff_t m_fl_attenuation2 = 0xBC; // float32
                constexpr std::ptrdiff_t m_fl_theta = 0xC0; // float32
                constexpr std::ptrdiff_t m_fl_phi = 0xC4; // float32
                constexpr std::ptrdiff_t m_h_light_cookie = 0xC8; // CStrongHandle< InfoForResourceTypeCTextureBase >
                constexpr std::ptrdiff_t m_n_cascades = 0xD0; // int32
                constexpr std::ptrdiff_t m_n_cast_shadows = 0xD4; // int32
                constexpr std::ptrdiff_t m_n_shadow_width = 0xD8; // int32
                constexpr std::ptrdiff_t m_n_shadow_height = 0xDC; // int32
                constexpr std::ptrdiff_t m_b_render_diffuse = 0xE0; // bool
                constexpr std::ptrdiff_t m_n_render_specular = 0xE4; // int32
                constexpr std::ptrdiff_t m_b_render_transmissive = 0xE8; // bool
                constexpr std::ptrdiff_t m_fl_ortho_light_width = 0xEC; // float32
                constexpr std::ptrdiff_t m_fl_ortho_light_height = 0xF0; // float32
                constexpr std::ptrdiff_t m_n_style = 0xF4; // int32
                constexpr std::ptrdiff_t m_pattern = 0xF8; // CUtlString
                constexpr std::ptrdiff_t m_n_cascade_render_static_objects = 0x100; // int32
                constexpr std::ptrdiff_t m_fl_shadow_cascade_cross_fade = 0x104; // float32
                constexpr std::ptrdiff_t m_fl_shadow_cascade_distance_fade = 0x108; // float32
                constexpr std::ptrdiff_t m_fl_shadow_cascade_distance0 = 0x10C; // float32
                constexpr std::ptrdiff_t m_fl_shadow_cascade_distance1 = 0x110; // float32
                constexpr std::ptrdiff_t m_fl_shadow_cascade_distance2 = 0x114; // float32
                constexpr std::ptrdiff_t m_fl_shadow_cascade_distance3 = 0x118; // float32
                constexpr std::ptrdiff_t m_n_shadow_cascade_resolution0 = 0x11C; // int32
                constexpr std::ptrdiff_t m_n_shadow_cascade_resolution1 = 0x120; // int32
                constexpr std::ptrdiff_t m_n_shadow_cascade_resolution2 = 0x124; // int32
                constexpr std::ptrdiff_t m_n_shadow_cascade_resolution3 = 0x128; // int32
                constexpr std::ptrdiff_t m_b_uses_baked_shadowing = 0x12C; // bool
                constexpr std::ptrdiff_t m_n_shadow_priority = 0x130; // int32
                constexpr std::ptrdiff_t m_n_baked_shadow_index = 0x134; // int32
                constexpr std::ptrdiff_t m_b_render_to_cubemaps = 0x138; // bool
                constexpr std::ptrdiff_t m_n_direct_light = 0x13C; // int32
                constexpr std::ptrdiff_t m_n_indirect_light = 0x140; // int32
                constexpr std::ptrdiff_t m_fl_fade_min_dist = 0x144; // float32
                constexpr std::ptrdiff_t m_fl_fade_max_dist = 0x148; // float32
                constexpr std::ptrdiff_t m_fl_shadow_fade_min_dist = 0x14C; // float32
                constexpr std::ptrdiff_t m_fl_shadow_fade_max_dist = 0x150; // float32
                constexpr std::ptrdiff_t m_b_enabled = 0x154; // bool
                constexpr std::ptrdiff_t m_b_flicker = 0x155; // bool
                constexpr std::ptrdiff_t m_b_precomputed_fields_valid = 0x156; // bool
                constexpr std::ptrdiff_t m_v_precomputed_bounds_mins = 0x158; // Vector
                constexpr std::ptrdiff_t m_v_precomputed_bounds_maxs = 0x164; // Vector
                constexpr std::ptrdiff_t m_v_precomputed_obb_origin = 0x170; // Vector
                constexpr std::ptrdiff_t m_v_precomputed_obb_angles = 0x17C; // QAngle
                constexpr std::ptrdiff_t m_v_precomputed_obb_extent = 0x188; // Vector
                constexpr std::ptrdiff_t m_fl_precomputed_max_range = 0x194; // float32
                constexpr std::ptrdiff_t m_n_fog_lighting_mode = 0x198; // int32
                constexpr std::ptrdiff_t m_fl_fog_contribution_stength = 0x19C; // float32
                constexpr std::ptrdiff_t m_fl_near_clip_plane = 0x1A0; // float32
                constexpr std::ptrdiff_t m_sky_color = 0x1A4; // Color
                constexpr std::ptrdiff_t m_fl_sky_intensity = 0x1A8; // float32
                constexpr std::ptrdiff_t m_sky_ambient_bounce = 0x1AC; // Color
                constexpr std::ptrdiff_t m_b_use_secondary_color = 0x1B0; // bool
                constexpr std::ptrdiff_t m_b_mixed_shadows = 0x1B1; // bool
                constexpr std::ptrdiff_t m_fl_light_style_start_time = 0x1B4; // GameTime_t
                constexpr std::ptrdiff_t m_fl_capsule_length = 0x1B8; // float32
                constexpr std::ptrdiff_t m_fl_min_roughness = 0x1BC; // float32
                constexpr std::ptrdiff_t m_b_pvs_modify_entity = 0x1D0; // bool
            }
            // Parent: None
            // Fields count: 1
            namespace c_network_transmit_component {
                constexpr std::ptrdiff_t m_n_transmit_state_owned_counter = 0x2C4; // uint8
            }
            // Parent: c_entity_component
            // Fields count: 5
            namespace c_render_component {
                constexpr std::ptrdiff_t m_p_chain_entity = 0x10; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_b_is_rendering_with_view_models = 0x50; // bool
                constexpr std::ptrdiff_t m_n_splitscreen_flags = 0x54; // uint32
                constexpr std::ptrdiff_t m_b_enable_rendering = 0x60; // bool
                constexpr std::ptrdiff_t m_b_interpolation_ready_to_draw = 0xC0; // bool
            }
            // Parent: None
            // Fields count: 0
            namespace c_anim_event_listener_base {
            }
            // Parent: c_anim_event_listener_base
            // Fields count: 0
            namespace c_anim_event_listener {
            }
            // Parent: c_anim_event_listener_base
            // Fields count: 0
            namespace c_anim_event_queue_listener {
            }
            // Parent: None
            // Fields count: 1
            namespace c_buoyancy_helper {
                constexpr std::ptrdiff_t m_fl_fluid_density = 0x18; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace c_skill_float {
                constexpr std::ptrdiff_t m_p_value = 0x0; // float32[4]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace c_skill_int {
                constexpr std::ptrdiff_t m_p_value = 0x0; // int32[4]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_skill_damage {
                constexpr std::ptrdiff_t m_fl_damage = 0x0; // CSkillFloat
                constexpr std::ptrdiff_t m_fl_physics_force_damage = 0x10; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace c_remap_float {
                constexpr std::ptrdiff_t m_p_value = 0x0; // float32[4]
            }
            // Parent: None
            // Fields count: 2
            namespace c_script_uniform_random_stream {
                constexpr std::ptrdiff_t m_h_script_scope = 0x8; // HSCRIPT
                constexpr std::ptrdiff_t m_n_initial_seed = 0x9C; // int32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace c_base_player_controller_api {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: nType (FixAngleSet_t)
            // NetworkVarNames: qAngle (QAngle)
            // NetworkVarNames: nIndex (uint32)
            namespace view_angle_server_change_t {
                constexpr std::ptrdiff_t n_type = 0x30; // FixAngleSet_t
                constexpr std::ptrdiff_t q_angle = 0x34; // QAngle
                constexpr std::ptrdiff_t n_index = 0x40; // uint32
            }
            // Parent: None
            // Fields count: 2
            namespace c_breakable_stage_helper {
                constexpr std::ptrdiff_t m_n_current_stage = 0x8; // int32
                constexpr std::ptrdiff_t m_n_stage_count = 0xC; // int32
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace command_tool_command_t {
                constexpr std::ptrdiff_t m_b_enabled = 0x0; // bool
                constexpr std::ptrdiff_t m_b_opened = 0x1; // bool
                constexpr std::ptrdiff_t m_internal_id = 0x4; // uint32
                constexpr std::ptrdiff_t m_short_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_exec_mode = 0x10; // CommandExecMode_t
                constexpr std::ptrdiff_t m_spawn_group = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_periodic_exec_delay = 0x20; // float32
                constexpr std::ptrdiff_t m_spec_type = 0x24; // CommandEntitySpecType_t
                constexpr std::ptrdiff_t m_entity_spec = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_commands = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_set_debug_bits = 0x38; // DebugOverlayBits_t
                constexpr std::ptrdiff_t m_clear_debug_bits = 0x40; // DebugOverlayBits_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace c_dynamic_prop_api {
            }
            // Parent: None
            // Fields count: 1
            namespace c_player_pawn_component {
                constexpr std::ptrdiff_t m_p_chain_entity = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 1
            namespace c_player_controller_component {
                constexpr std::ptrdiff_t m_p_chain_entity = 0x8; // CNetworkVarChainer
            }
            // Parent: c_player_pawn_component
            // Fields count: 0
            namespace c_player_autoaim_services {
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: localSound (Vector)
            // NetworkVarNames: soundscapeIndex (int32)
            // NetworkVarNames: localBits (uint8)
            // NetworkVarNames: soundscapeEntityListIndex (int)
            // NetworkVarNames: soundEventHash (uint32)
            namespace audioparams_t {
                constexpr std::ptrdiff_t local_sound = 0x8; // Vector[8]
                constexpr std::ptrdiff_t soundscape_index = 0x68; // int32
                constexpr std::ptrdiff_t local_bits = 0x6C; // uint8
                constexpr std::ptrdiff_t soundscape_entity_list_index = 0x70; // int32
                constexpr std::ptrdiff_t sound_event_hash = 0x74; // uint32
            }
            // Parent: c_player_pawn_component
            // Fields count: 12
            //
            // Metadata:
            // NetworkVarNames: m_vecCsViewPunchAngle (QAngle)
            // NetworkVarNames: m_nCsViewPunchAngleTick (GameTick_t)
            // NetworkVarNames: m_flCsViewPunchAngleTickRatio (float32)
            // NetworkVarNames: m_PlayerFog (fogplayerparams_t)
            // NetworkVarNames: m_hColorCorrectionCtrl (CHandle< CColorCorrection>)
            // NetworkVarNames: m_hViewEntity (CHandle< CBaseEntity>)
            // NetworkVarNames: m_hTonemapController (CHandle< CTonemapController2>)
            // NetworkVarNames: m_audio (audioparams_t)
            // NetworkVarNames: m_PostProcessingVolumes (CHandle<CPostProcessingVolume>)
            namespace c_player_camera_services {
                constexpr std::ptrdiff_t m_vec_cs_view_punch_angle = 0x40; // QAngle
                constexpr std::ptrdiff_t m_n_cs_view_punch_angle_tick = 0x4C; // GameTick_t
                constexpr std::ptrdiff_t m_fl_cs_view_punch_angle_tick_ratio = 0x50; // float32
                constexpr std::ptrdiff_t m_player_fog = 0x58; // fogplayerparams_t
                constexpr std::ptrdiff_t m_h_color_correction_ctrl = 0x98; // CHandle< CColorCorrection >
                constexpr std::ptrdiff_t m_h_view_entity = 0x9C; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_h_tonemap_controller = 0xA0; // CHandle< CTonemapController2 >
                constexpr std::ptrdiff_t m_audio = 0xA8; // audioparams_t
                constexpr std::ptrdiff_t m_post_processing_volumes = 0x120; // CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > >
                constexpr std::ptrdiff_t m_fl_old_player_z = 0x138; // float32
                constexpr std::ptrdiff_t m_fl_old_player_view_offset_z = 0x13C; // float32
                constexpr std::ptrdiff_t m_h_trigger_soundscape_list = 0x158; // CUtlVector< CHandle< CEnvSoundscapeTriggerable > >
            }
            // Parent: c_player_pawn_component
            // Fields count: 0
            namespace c_player_flashlight_services {
            }
            // Parent: c_player_pawn_component
            // Fields count: 0
            namespace c_player_item_services {
            }
            // Parent: c_player_pawn_component
            // Fields count: 15
            //
            // Metadata:
            // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
            // NetworkVarNames: m_flMaxspeed (float32)
            // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
            namespace c_player_movement_services {
                constexpr std::ptrdiff_t m_n_impulse = 0x40; // int32
                constexpr std::ptrdiff_t m_n_buttons = 0x48; // CInButtonState
                constexpr std::ptrdiff_t m_n_queued_button_down_mask = 0x68; // uint64
                constexpr std::ptrdiff_t m_n_queued_button_change_mask = 0x70; // uint64
                constexpr std::ptrdiff_t m_n_button_double_pressed = 0x78; // uint64
                constexpr std::ptrdiff_t m_p_button_pressed_cmd_number = 0x80; // uint32[64]
                constexpr std::ptrdiff_t m_n_last_command_number_processed = 0x180; // uint32
                constexpr std::ptrdiff_t m_n_toggle_button_down_mask = 0x188; // uint64
                constexpr std::ptrdiff_t m_fl_maxspeed = 0x198; // float32
                constexpr std::ptrdiff_t m_arr_force_subtick_move_when = 0x19C; // float32[4]
                constexpr std::ptrdiff_t m_fl_forward_move = 0x1AC; // float32
                constexpr std::ptrdiff_t m_fl_left_move = 0x1B0; // float32
                constexpr std::ptrdiff_t m_fl_up_move = 0x1B4; // float32
                constexpr std::ptrdiff_t m_vec_last_movement_impulses = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_vec_old_view_angles = 0x1C4; // QAngle
            }
            // Parent: c_player_movement_services
            // Fields count: 14
            //
            // Metadata:
            // NetworkVarNames: m_flFallVelocity (float32)
            // NetworkVarNames: m_bInCrouch (bool)
            // NetworkVarNames: m_nCrouchState (uint32)
            // NetworkVarNames: m_flCrouchTransitionStartTime (GameTime_t)
            // NetworkVarNames: m_bDucked (bool)
            // NetworkVarNames: m_bDucking (bool)
            // NetworkVarNames: m_bInDuckJump (bool)
            namespace c_player_movement_services_humanoid {
                constexpr std::ptrdiff_t m_fl_step_sound_time = 0x1D8; // float32
                constexpr std::ptrdiff_t m_fl_fall_velocity = 0x1DC; // float32
                constexpr std::ptrdiff_t m_b_in_crouch = 0x1E0; // bool
                constexpr std::ptrdiff_t m_n_crouch_state = 0x1E4; // uint32
                constexpr std::ptrdiff_t m_fl_crouch_transition_start_time = 0x1E8; // GameTime_t
                constexpr std::ptrdiff_t m_b_ducked = 0x1EC; // bool
                constexpr std::ptrdiff_t m_b_ducking = 0x1ED; // bool
                constexpr std::ptrdiff_t m_b_in_duck_jump = 0x1EE; // bool
                constexpr std::ptrdiff_t m_ground_normal = 0x1F0; // Vector
                constexpr std::ptrdiff_t m_fl_surface_friction = 0x1FC; // float32
                constexpr std::ptrdiff_t m_surface_props = 0x200; // CUtlStringToken
                constexpr std::ptrdiff_t m_n_stepside = 0x210; // int32
                constexpr std::ptrdiff_t m_i_target_volume = 0x214; // int32
                constexpr std::ptrdiff_t m_vec_smoothed_velocity = 0x218; // Vector
            }
            // Parent: c_player_pawn_component
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_iObserverMode (uint8)
            // NetworkVarNames: m_hObserverTarget (CHandle< CBaseEntity>)
            namespace c_player_observer_services {
                constexpr std::ptrdiff_t m_i_observer_mode = 0x40; // uint8
                constexpr std::ptrdiff_t m_h_observer_target = 0x44; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_i_observer_last_mode = 0x48; // ObserverMode_t
                constexpr std::ptrdiff_t m_b_forced_observer_mode = 0x4C; // bool
            }
            // Parent: c_player_pawn_component
            // Fields count: 0
            namespace c_player_use_services {
            }
            // Parent: c_player_pawn_component
            // Fields count: 0
            namespace c_player_water_services {
            }
            // Parent: c_player_pawn_component
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_hMyWeapons (CHandle< CBasePlayerWeapon >)
            // NetworkVarNames: m_hActiveWeapon (CHandle< CBasePlayerWeapon>)
            // NetworkVarNames: m_hLastWeapon (CHandle< CBasePlayerWeapon>)
            // NetworkVarNames: m_iAmmo (uint16)
            namespace c_player_weapon_services {
                constexpr std::ptrdiff_t m_h_my_weapons = 0x40; // CNetworkUtlVectorBase< CHandle< CBasePlayerWeapon > >
                constexpr std::ptrdiff_t m_h_active_weapon = 0x58; // CHandle< CBasePlayerWeapon >
                constexpr std::ptrdiff_t m_h_last_weapon = 0x5C; // CHandle< CBasePlayerWeapon >
                constexpr std::ptrdiff_t m_i_ammo = 0x60; // uint16[32]
                constexpr std::ptrdiff_t m_b_prevent_weapon_pickup = 0xA0; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ammo_type_info_t {
                constexpr std::ptrdiff_t m_n_max_carry = 0x10; // int32
                constexpr std::ptrdiff_t m_n_splash_size = 0x1C; // CRangeInt
                constexpr std::ptrdiff_t m_n_flags = 0x24; // AmmoFlags_t
                constexpr std::ptrdiff_t m_fl_mass = 0x28; // float32
                constexpr std::ptrdiff_t m_fl_speed = 0x2C; // CRangeFloat
            }
            // Parent: None
            // Fields count: 0
            namespace c_anim_graph_controller_base {
            }
            // Parent: c_body_component_skeleton_instance
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_animationController (CBaseAnimGraphController)
            namespace c_body_component_base_anim_graph {
                constexpr std::ptrdiff_t m_animation_controller = 0x478; // CBaseAnimGraphController
                constexpr std::ptrdiff_t m_p_chain_entity = 0x980; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_ID (CUtlStringToken)
            // NetworkVarNames: m_Values (Vector4D)
            namespace entity_render_attribute_t {
                constexpr std::ptrdiff_t m_id = 0x30; // CUtlStringToken
                constexpr std::ptrdiff_t m_values = 0x34; // Vector4D
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle< CBaseModelEntity >)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            namespace active_model_config_t {
                constexpr std::ptrdiff_t m_handle = 0x28; // ModelConfigHandle_t
                constexpr std::ptrdiff_t m_name = 0x30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_associated_entities = 0x38; // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > >
                constexpr std::ptrdiff_t m_associated_entity_names = 0x50; // CNetworkUtlVectorBase< CUtlSymbolLarge >
            }
            // Parent: c_body_component_skeleton_instance
            // Fields count: 1
            namespace c_body_component_base_model_entity {
                constexpr std::ptrdiff_t m_p_chain_entity = 0x478; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 2
            namespace c_rope_overlap_hit {
                constexpr std::ptrdiff_t m_h_entity = 0x0; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_vec_overlapping_links = 0x8; // CUtlVector< int32 >
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CEntityHandle)
            // NetworkVarNames: m_name (CUtlStringToken)
            namespace c_game_scene_node_handle {
                constexpr std::ptrdiff_t m_h_owner = 0x8; // CEntityHandle
                constexpr std::ptrdiff_t m_name = 0xC; // CUtlStringToken
            }
            // Parent: None
            // Fields count: 32
            //
            // Metadata:
            // NetworkVarNames: m_hParent (CGameSceneNodeHandle)
            // NetworkVarNames: m_vecOrigin (CNetworkOriginCellCoordQuantizedVector)
            // NetworkVarNames: m_angRotation (QAngle)
            // NetworkVarNames: m_flScale (float)
            // NetworkVarNames: m_name (CUtlStringToken)
            // NetworkVarNames: m_hierarchyAttachName (CUtlStringToken)
            namespace c_game_scene_node {
                constexpr std::ptrdiff_t m_node_to_world = 0x10; // CTransform
                constexpr std::ptrdiff_t m_p_owner = 0x30; // CEntityInstance*
                constexpr std::ptrdiff_t m_p_parent = 0x38; // CGameSceneNode*
                constexpr std::ptrdiff_t m_p_child = 0x40; // CGameSceneNode*
                constexpr std::ptrdiff_t m_p_next_sibling = 0x48; // CGameSceneNode*
                constexpr std::ptrdiff_t m_h_parent = 0x70; // CGameSceneNodeHandle
                constexpr std::ptrdiff_t m_vec_origin = 0x80; // CNetworkOriginCellCoordQuantizedVector
                constexpr std::ptrdiff_t m_ang_rotation = 0xB8; // QAngle
                constexpr std::ptrdiff_t m_fl_scale = 0xC4; // float32
                constexpr std::ptrdiff_t m_vec_abs_origin = 0xC8; // Vector
                constexpr std::ptrdiff_t m_ang_abs_rotation = 0xD4; // QAngle
                constexpr std::ptrdiff_t m_fl_abs_scale = 0xE0; // float32
                constexpr std::ptrdiff_t m_n_parent_attachment_or_bone = 0xE4; // int16
                constexpr std::ptrdiff_t m_b_debug_abs_origin_changes = 0xE6; // bool
                constexpr std::ptrdiff_t m_b_dormant = 0xE7; // bool
                constexpr std::ptrdiff_t m_b_force_parent_to_be_networked = 0xE8; // bool
                constexpr std::ptrdiff_t m_b_dirty_hierarchy = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_dirty_bone_merge_info = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_networked_position_changed = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_networked_angles_changed = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_networked_scale_changed = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_will_be_calling_post_data_update = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_bone_merge_flex = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_n_latch_abs_origin = 0x0; // bitfield:2
                constexpr std::ptrdiff_t m_b_dirty_bone_merge_bone_to_root = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_n_hierarchical_depth = 0xEB; // uint8
                constexpr std::ptrdiff_t m_n_hierarchy_type = 0xEC; // uint8
                constexpr std::ptrdiff_t m_n_do_not_set_anim_time_in_invalidate_physics_count = 0xED; // uint8
                constexpr std::ptrdiff_t m_name = 0xF0; // CUtlStringToken
                constexpr std::ptrdiff_t m_hierarchy_attach_name = 0x140; // CUtlStringToken
                constexpr std::ptrdiff_t m_fl_z_offset = 0x144; // float32
                constexpr std::ptrdiff_t m_v_render_origin = 0x148; // Vector
            }
            // Parent: None
            // Fields count: 0
            namespace i_choreo_services {
            }
            // Parent: None
            // Fields count: 1
            namespace c_in_button_state {
                constexpr std::ptrdiff_t m_p_button_states = 0x8; // uint64[3]
            }
            // Parent: None
            // Fields count: 6
            namespace sequence_history_t {
                constexpr std::ptrdiff_t m_h_sequence = 0x0; // HSequence
                constexpr std::ptrdiff_t m_fl_seq_start_time = 0x4; // GameTime_t
                constexpr std::ptrdiff_t m_fl_seq_fixed_cycle = 0x8; // float32
                constexpr std::ptrdiff_t m_n_seq_loop_mode = 0xC; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_fl_playback_rate = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_cycles_per_second = 0x14; // float32
            }
            // Parent: None
            // Fields count: 0
            namespace i_skeleton_animation_controller {
            }
            // Parent: i_skeleton_animation_controller
            // Fields count: 1
            namespace c_skeleton_animation_controller {
                constexpr std::ptrdiff_t m_p_skeleton_instance = 0x8; // CSkeletonInstance*
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flPrevCycle (float32)
            // NetworkVarNames: m_flCycle (float32)
            namespace c_networked_sequence_operation {
                constexpr std::ptrdiff_t m_h_sequence = 0x8; // HSequence
                constexpr std::ptrdiff_t m_fl_prev_cycle = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_cycle = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_weight = 0x14; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_b_sequence_change_networked = 0x1C; // bool
                constexpr std::ptrdiff_t m_b_discontinuity = 0x1D; // bool
                constexpr std::ptrdiff_t m_fl_prev_cycle_from_discontinuity = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_prev_cycle_for_anim_event_detection = 0x24; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_hModel (HModelStrong)
            // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
            // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
            // NetworkVarNames: m_nIdealMotionType (int8)
            namespace c_model_state {
                constexpr std::ptrdiff_t m_h_model = 0xA0; // CStrongHandle< InfoForResourceTypeCModel >
                constexpr std::ptrdiff_t m_model_name = 0xA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_b_client_cloth_creation_suppressed = 0xE8; // bool
                constexpr std::ptrdiff_t m_mesh_group_mask = 0x180; // uint64
                constexpr std::ptrdiff_t m_n_ideal_motion_type = 0x212; // int8
                constexpr std::ptrdiff_t m_n_force_lod = 0x213; // int8
                constexpr std::ptrdiff_t m_n_cloth_update_flags = 0x214; // int8
            }
            // Parent: c_game_scene_node
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_modelState (CModelState)
            // NetworkVarNames: m_bIsAnimationEnabled (bool)
            // NetworkVarNames: m_bUseParentRenderBounds (bool)
            // NetworkVarNames: m_materialGroup (CUtlStringToken)
            // NetworkVarNames: m_nHitboxSet (uint8)
            namespace c_skeleton_instance {
                constexpr std::ptrdiff_t m_model_state = 0x160; // CModelState
                constexpr std::ptrdiff_t m_b_is_animation_enabled = 0x380; // bool
                constexpr std::ptrdiff_t m_b_use_parent_render_bounds = 0x381; // bool
                constexpr std::ptrdiff_t m_b_disable_solid_collisions_for_hierarchy = 0x382; // bool
                constexpr std::ptrdiff_t m_b_dirty_motion_type = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_b_is_generating_latched_parent_space_state = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_material_group = 0x384; // CUtlStringToken
                constexpr std::ptrdiff_t m_n_hitbox_set = 0x388; // uint8
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace interval_timer {
                constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_n_world_group_id = 0xC; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_timescale (float32)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace countdown_timer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // GameTime_t
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
                constexpr std::ptrdiff_t m_n_world_group_id = 0x14; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (float32)
            // NetworkVarNames: m_timescale (float32)
            namespace engine_countdown_timer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // float32
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
            }
            // Parent: interval_timer
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_flValues (float)
            // NetworkVarNames: m_nValueCounts (int)
            // NetworkVarNames: m_nBucketCount (int)
            // NetworkVarNames: m_flInterval (float)
            // NetworkVarNames: m_flFinalValue (float)
            // NetworkVarNames: m_nCompressionType (TimelineCompression_t)
            // NetworkVarNames: m_bStopped (bool)
            namespace c_timeline {
                constexpr std::ptrdiff_t m_fl_values = 0x10; // float32[64]
                constexpr std::ptrdiff_t m_n_value_counts = 0x110; // int32[64]
                constexpr std::ptrdiff_t m_n_bucket_count = 0x210; // int32
                constexpr std::ptrdiff_t m_fl_interval = 0x214; // float32
                constexpr std::ptrdiff_t m_fl_final_value = 0x218; // float32
                constexpr std::ptrdiff_t m_n_compression_type = 0x21C; // TimelineCompression_t
                constexpr std::ptrdiff_t m_b_stopped = 0x220; // bool
            }
            // Parent: None
            // Fields count: 24
            //
            // Metadata:
            // NetworkVarNames: m_PredNetBoolVariables (uint32)
            // NetworkVarNames: m_PredNetByteVariables (byte)
            // NetworkVarNames: m_PredNetUInt16Variables (uint16)
            // NetworkVarNames: m_PredNetIntVariables (int32)
            // NetworkVarNames: m_PredNetUInt32Variables (uint32)
            // NetworkVarNames: m_PredNetUInt64Variables (uint64)
            // NetworkVarNames: m_PredNetFloatVariables (float)
            // NetworkVarNames: m_PredNetVectorVariables (Vector)
            // NetworkVarNames: m_PredNetQuaternionVariables (Quaternion)
            // NetworkVarNames: m_PredNetGlobalSymbolVariables (CGlobalSymbol)
            // NetworkVarNames: m_OwnerOnlyPredNetBoolVariables (uint32)
            // NetworkVarNames: m_OwnerOnlyPredNetByteVariables (byte)
            // NetworkVarNames: m_OwnerOnlyPredNetUInt16Variables (uint16)
            // NetworkVarNames: m_OwnerOnlyPredNetIntVariables (int32)
            // NetworkVarNames: m_OwnerOnlyPredNetUInt32Variables (uint32)
            // NetworkVarNames: m_OwnerOnlyPredNetUInt64Variables (uint64)
            // NetworkVarNames: m_OwnerOnlyPredNetFloatVariables (float)
            // NetworkVarNames: m_OwnerOnlyPredNetVectorVariables (Vector)
            // NetworkVarNames: m_OwnerOnlyPredNetQuaternionVariables (Quaternion)
            // NetworkVarNames: m_OwnerOnlyPredNetGlobalSymbolVariables (CGlobalSymbol)
            // NetworkVarNames: m_nBoolVariablesCount (int)
            // NetworkVarNames: m_nOwnerOnlyBoolVariablesCount (int)
            // NetworkVarNames: m_nRandomSeedOffset (int)
            // NetworkVarNames: m_flLastTeleportTime (float)
            namespace c_anim_graph_networked_variables {
                constexpr std::ptrdiff_t m_pred_net_bool_variables = 0x8; // CNetworkUtlVectorBase< uint32 >
                constexpr std::ptrdiff_t m_pred_net_byte_variables = 0x20; // CNetworkUtlVectorBase< uint8 >
                constexpr std::ptrdiff_t m_pred_net_u_int16_variables = 0x38; // CNetworkUtlVectorBase< uint16 >
                constexpr std::ptrdiff_t m_pred_net_int_variables = 0x50; // CNetworkUtlVectorBase< int32 >
                constexpr std::ptrdiff_t m_pred_net_u_int32_variables = 0x68; // CNetworkUtlVectorBase< uint32 >
                constexpr std::ptrdiff_t m_pred_net_u_int64_variables = 0x80; // CNetworkUtlVectorBase< uint64 >
                constexpr std::ptrdiff_t m_pred_net_float_variables = 0x98; // CNetworkUtlVectorBase< float32 >
                constexpr std::ptrdiff_t m_pred_net_vector_variables = 0xB0; // CNetworkUtlVectorBase< Vector >
                constexpr std::ptrdiff_t m_pred_net_quaternion_variables = 0xC8; // CNetworkUtlVectorBase< Quaternion >
                constexpr std::ptrdiff_t m_pred_net_global_symbol_variables = 0xE0; // CNetworkUtlVectorBase< CGlobalSymbol >
                constexpr std::ptrdiff_t m_owner_only_pred_net_bool_variables = 0xF8; // CNetworkUtlVectorBase< uint32 >
                constexpr std::ptrdiff_t m_owner_only_pred_net_byte_variables = 0x110; // CNetworkUtlVectorBase< uint8 >
                constexpr std::ptrdiff_t m_owner_only_pred_net_u_int16_variables = 0x128; // CNetworkUtlVectorBase< uint16 >
                constexpr std::ptrdiff_t m_owner_only_pred_net_int_variables = 0x140; // CNetworkUtlVectorBase< int32 >
                constexpr std::ptrdiff_t m_owner_only_pred_net_u_int32_variables = 0x158; // CNetworkUtlVectorBase< uint32 >
                constexpr std::ptrdiff_t m_owner_only_pred_net_u_int64_variables = 0x170; // CNetworkUtlVectorBase< uint64 >
                constexpr std::ptrdiff_t m_owner_only_pred_net_float_variables = 0x188; // CNetworkUtlVectorBase< float32 >
                constexpr std::ptrdiff_t m_owner_only_pred_net_vector_variables = 0x1A0; // CNetworkUtlVectorBase< Vector >
                constexpr std::ptrdiff_t m_owner_only_pred_net_quaternion_variables = 0x1B8; // CNetworkUtlVectorBase< Quaternion >
                constexpr std::ptrdiff_t m_owner_only_pred_net_global_symbol_variables = 0x1D0; // CNetworkUtlVectorBase< CGlobalSymbol >
                constexpr std::ptrdiff_t m_n_bool_variables_count = 0x1E8; // int32
                constexpr std::ptrdiff_t m_n_owner_only_bool_variables_count = 0x1EC; // int32
                constexpr std::ptrdiff_t m_n_random_seed_offset = 0x1F0; // int32
                constexpr std::ptrdiff_t m_fl_last_teleport_time = 0x1F4; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPropertyCustomFGDType
            namespace c_footstep_table_handle {
            }
            // Parent: None
            // Fields count: 8
            namespace response_followup {
                constexpr std::ptrdiff_t followup_concept = 0x0; // char*
                constexpr std::ptrdiff_t followup_contexts = 0x8; // char*
                constexpr std::ptrdiff_t followup_delay = 0x10; // float32
                constexpr std::ptrdiff_t followup_target = 0x14; // char*
                constexpr std::ptrdiff_t followup_entityiotarget = 0x1C; // char*
                constexpr std::ptrdiff_t followup_entityioinput = 0x24; // char*
                constexpr std::ptrdiff_t followup_entityiodelay = 0x2C; // float32
                constexpr std::ptrdiff_t b_fired = 0x30; // bool
            }
            // Parent: None
            // Fields count: 3
            namespace response_params {
                constexpr std::ptrdiff_t odds = 0x10; // int16
                constexpr std::ptrdiff_t flags = 0x12; // int16
                constexpr std::ptrdiff_t m_p_followup = 0x14; // ResponseFollowup*
            }
            // Parent: None
            // Fields count: 2
            namespace c_response_criteria_set {
                constexpr std::ptrdiff_t m_n_num_prefixed_contexts = 0x28; // int32
                constexpr std::ptrdiff_t m_b_override_on_append = 0x2C; // bool
            }
            // Parent: None
            // Fields count: 10
            namespace crr_response {
                constexpr std::ptrdiff_t m_type = 0x0; // uint8
                constexpr std::ptrdiff_t m_sz_response_name = 0x1; // char[192]
                constexpr std::ptrdiff_t m_sz_matching_rule = 0xC1; // char[128]
                constexpr std::ptrdiff_t m_params = 0x141; // ResponseParams
                constexpr std::ptrdiff_t m_f_match_score = 0x160; // float32
                constexpr std::ptrdiff_t m_sz_speaker_context = 0x168; // char*
                constexpr std::ptrdiff_t m_sz_world_context = 0x170; // char*
                constexpr std::ptrdiff_t m_followup = 0x178; // ResponseFollowup
                constexpr std::ptrdiff_t m_pch_criteria_names = 0x1B0; // CUtlVector< CUtlSymbol >
                constexpr std::ptrdiff_t m_pch_criteria_values = 0x1C8; // CUtlVector< char* >
            }
            // Parent: None
            // Fields count: 2
            namespace concept_history_t {
                constexpr std::ptrdiff_t time_spoken = 0x0; // float32
                constexpr std::ptrdiff_t m_response = 0x8; // CRR_Response
            }
            // Parent: None
            // Fields count: 9
            namespace cai_expresser {
                constexpr std::ptrdiff_t m_fl_stop_talk_time = 0x38; // GameTime_t
                constexpr std::ptrdiff_t m_fl_stop_talk_time_without_delay = 0x3C; // GameTime_t
                constexpr std::ptrdiff_t m_fl_blocked_talk_time = 0x40; // GameTime_t
                constexpr std::ptrdiff_t m_voice_pitch = 0x44; // int32
                constexpr std::ptrdiff_t m_fl_last_time_accepted_speak = 0x48; // GameTime_t
                constexpr std::ptrdiff_t m_b_allow_speaking_interrupts = 0x4C; // bool
                constexpr std::ptrdiff_t m_b_consider_scene_involvement_as_speech = 0x4D; // bool
                constexpr std::ptrdiff_t m_n_last_spoken_priority = 0x50; // int32
                constexpr std::ptrdiff_t m_p_outer = 0x58; // CBaseFlex*
            }
            // Parent: None
            // Fields count: 1
            namespace c_response_queue {
                constexpr std::ptrdiff_t m_expresser_targets = 0x48; // CUtlVector< CAI_Expresser* >
            }
            // Parent: None
            // Fields count: 5
            namespace c_response_queue_c_deferred_response {
                constexpr std::ptrdiff_t m_contexts = 0x8; // CResponseCriteriaSet
                constexpr std::ptrdiff_t m_f_dispatch_time = 0x38; // float32
                constexpr std::ptrdiff_t m_h_issuer = 0x3C; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_response = 0x48; // CRR_Response
                constexpr std::ptrdiff_t m_b_response_valid = 0x228; // bool
            }
            // Parent: cai_expresser
            // Fields count: 1
            namespace cai_expresser_with_followup {
                constexpr std::ptrdiff_t m_p_postponed_followup = 0x60; // ResponseFollowup*
            }
            // Parent: cai_expresser_with_followup
            // Fields count: 1
            namespace c_multiplayer_expresser {
                constexpr std::ptrdiff_t m_b_allow_multiple_scenes = 0x70; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace c_base_entity_api {
            }
            // Parent: None
            // Fields count: 10
            namespace c_commentary_system {
                constexpr std::ptrdiff_t m_b_commentary_convars_changing = 0x11; // bool
                constexpr std::ptrdiff_t m_b_commentary_enabled_mid_game = 0x12; // bool
                constexpr std::ptrdiff_t m_fl_next_teleport_time = 0x14; // GameTime_t
                constexpr std::ptrdiff_t m_i_teleport_stage = 0x18; // int32
                constexpr std::ptrdiff_t m_b_cheat_state = 0x1C; // bool
                constexpr std::ptrdiff_t m_b_is_first_spawn_group_to_load = 0x1D; // bool
                constexpr std::ptrdiff_t m_h_current_node = 0x38; // CHandle< CPointCommentaryNode >
                constexpr std::ptrdiff_t m_h_active_commentary_node = 0x3C; // CHandle< CPointCommentaryNode >
                constexpr std::ptrdiff_t m_h_last_commentary_node = 0x40; // CHandle< CPointCommentaryNode >
                constexpr std::ptrdiff_t m_vec_nodes = 0x48; // CUtlVector< CHandle< CPointCommentaryNode > >
            }
            // Parent: None
            // Fields count: 1
            namespace c_physics_shake {
                constexpr std::ptrdiff_t m_force = 0x8; // Vector
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_game_scripted_move_data {
                constexpr std::ptrdiff_t m_v_accumulated_root_motion = 0x0; // Vector
                constexpr std::ptrdiff_t m_v_dest = 0xC; // Vector
                constexpr std::ptrdiff_t m_v_src = 0x18; // Vector
                constexpr std::ptrdiff_t m_ang_src = 0x24; // QAngle
                constexpr std::ptrdiff_t m_ang_dst = 0x30; // QAngle
                constexpr std::ptrdiff_t m_ang_current = 0x3C; // QAngle
                constexpr std::ptrdiff_t m_fl_ang_rate = 0x48; // float32
                constexpr std::ptrdiff_t m_fl_duration = 0x4C; // float32
                constexpr std::ptrdiff_t m_fl_start_time = 0x50; // GameTime_t
                constexpr std::ptrdiff_t m_b_active = 0x54; // bool
                constexpr std::ptrdiff_t m_b_teleport_on_end = 0x55; // bool
                constexpr std::ptrdiff_t m_b_ignore_rotation = 0x56; // bool
                constexpr std::ptrdiff_t m_n_type = 0x58; // ScriptedMoveType_t
                constexpr std::ptrdiff_t m_b_success = 0x5C; // bool
                constexpr std::ptrdiff_t m_n_forced_crouch_state = 0x60; // ForcedCrouchState_t
                constexpr std::ptrdiff_t m_b_ignore_collisions = 0x64; // bool
            }
            // Parent: i_choreo_services
            // Fields count: 5
            namespace c_game_choreo_services {
                constexpr std::ptrdiff_t m_h_owner = 0x8; // CHandle< CBaseAnimGraph >
                constexpr std::ptrdiff_t m_h_scripted_sequence = 0xC; // CHandle< CScriptedSequence >
                constexpr std::ptrdiff_t m_script_state = 0x10; // IChoreoServices::ScriptState_t
                constexpr std::ptrdiff_t m_choreo_state = 0x14; // IChoreoServices::ChoreoState_t
                constexpr std::ptrdiff_t m_fl_time_started_state = 0x18; // GameTime_t
            }
            // Parent: None
            // Fields count: 10
            namespace hull_flags_t {
                constexpr std::ptrdiff_t m_b_hull_human = 0x0; // bool
                constexpr std::ptrdiff_t m_b_hull_small_centered = 0x1; // bool
                constexpr std::ptrdiff_t m_b_hull_wide_human = 0x2; // bool
                constexpr std::ptrdiff_t m_b_hull_tiny = 0x3; // bool
                constexpr std::ptrdiff_t m_b_hull_medium = 0x4; // bool
                constexpr std::ptrdiff_t m_b_hull_tiny_centered = 0x5; // bool
                constexpr std::ptrdiff_t m_b_hull_large = 0x6; // bool
                constexpr std::ptrdiff_t m_b_hull_large_centered = 0x7; // bool
                constexpr std::ptrdiff_t m_b_hull_medium_tall = 0x8; // bool
                constexpr std::ptrdiff_t m_b_hull_small = 0x9; // bool
            }
            // Parent: None
            // Fields count: 4
            namespace c_constant_force_controller {
                constexpr std::ptrdiff_t m_linear = 0xC; // Vector
                constexpr std::ptrdiff_t m_angular = 0x18; // RotationVector
                constexpr std::ptrdiff_t m_linear_save = 0x24; // Vector
                constexpr std::ptrdiff_t m_angular_save = 0x30; // RotationVector
            }
            // Parent: None
            // Fields count: 4
            namespace c_motor_controller {
                constexpr std::ptrdiff_t m_speed = 0x8; // float32
                constexpr std::ptrdiff_t m_max_torque = 0xC; // float32
                constexpr std::ptrdiff_t m_axis = 0x10; // Vector
                constexpr std::ptrdiff_t m_inertia_factor = 0x1C; // float32
            }
            // Parent: None
            // Fields count: 4
            namespace c_sound_envelope {
                constexpr std::ptrdiff_t m_current = 0x0; // float32
                constexpr std::ptrdiff_t m_target = 0x4; // float32
                constexpr std::ptrdiff_t m_rate = 0x8; // float32
                constexpr std::ptrdiff_t m_forceupdate = 0xC; // bool
            }
            // Parent: None
            // Fields count: 2
            namespace c_copy_recipient_filter {
                constexpr std::ptrdiff_t m_flags = 0x8; // int32
                constexpr std::ptrdiff_t m_recipients = 0x10; // CUtlVector< CPlayerSlot >
            }
            // Parent: None
            // Fields count: 13
            namespace c_sound_patch {
                constexpr std::ptrdiff_t m_pitch = 0x8; // CSoundEnvelope
                constexpr std::ptrdiff_t m_volume = 0x18; // CSoundEnvelope
                constexpr std::ptrdiff_t m_shutdown_time = 0x30; // float32
                constexpr std::ptrdiff_t m_fl_last_time = 0x34; // float32
                constexpr std::ptrdiff_t m_isz_sound_script_name = 0x38; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_h_ent = 0x40; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_sound_entity_index = 0x44; // CEntityIndex
                constexpr std::ptrdiff_t m_sound_origin = 0x48; // Vector
                constexpr std::ptrdiff_t m_is_playing = 0x54; // int32
                constexpr std::ptrdiff_t m_filter = 0x58; // CCopyRecipientFilter
                constexpr std::ptrdiff_t m_fl_close_caption_duration = 0x80; // float32
                constexpr std::ptrdiff_t m_b_updated_sound_origin = 0x84; // bool
                constexpr std::ptrdiff_t m_isz_class_name = 0x88; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace c_take_damage_info_api {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace c_pulse_graph_instance_server_entity {
                constexpr std::ptrdiff_t m_p_component = 0xD8; // CPulseGraphComponentBase*
            }
            // Parent: None
            // Fields count: 4
            namespace c_pulse_graph_component_base {
                constexpr std::ptrdiff_t m_h_owner = 0x8; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_s_name_fixup_static_prefix = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_s_name_fixup_parent = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_s_name_fixup_local = 0x20; // CUtlSymbolLarge
            }
            // Parent: c_pulse_graph_component_base
            // Fields count: 0
            namespace c_pulse_graph_component_point_server {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace c_pulse_server_funcs {
            }
            // Parent: c_pulse_cell_base_flow
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace c_pulse_cell_sound_event_start {
                constexpr std::ptrdiff_t m_type = 0x48; // SoundEventStartType_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace c_pulse_server_funcs_sounds {
            }
            // Parent: c_pulse_cell_base_yielding_inflow
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_pulse_cell_outflow_play_scene_base {
                constexpr std::ptrdiff_t m_on_finished = 0x48; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_on_canceled = 0x58; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_triggers = 0x68; // CUtlVector< CPulse_OutflowConnection >
            }
            // Parent: None
            // Fields count: 1
            namespace c_pulse_cell_outflow_play_scene_base_cursor_state_t {
                constexpr std::ptrdiff_t m_scene_instance = 0x0; // CHandle< CBaseEntity >
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace pulse_scripted_sequence_data_t {
                constexpr std::ptrdiff_t m_n_actor_id = 0x0; // int32
                constexpr std::ptrdiff_t m_sz_pre_idle_sequence = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_sz_entry_sequence = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_sz_sequence = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_sz_exit_sequence = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_b_loop_pre_idle_sequence = 0x28; // bool
                constexpr std::ptrdiff_t m_b_loop_action_sequence = 0x29; // bool
                constexpr std::ptrdiff_t m_b_loop_post_idle_sequence = 0x2A; // bool
                constexpr std::ptrdiff_t m_b_ignore_look_at = 0x2B; // bool
            }
            // Parent: None
            // Fields count: 1
            namespace c_pulse_cell_outflow_scripted_sequence_cursor_state_t {
                constexpr std::ptrdiff_t m_scripted_sequence = 0x0; // CHandle< CBaseEntity >
            }
            // Parent: c_entity_component
            // Fields count: 0
            namespace c_touch_expansion_component {
            }
            // Parent: None
            // Fields count: 25
            namespace dynpitchvol_base_t {
                constexpr std::ptrdiff_t preset = 0x0; // int32
                constexpr std::ptrdiff_t pitchrun = 0x4; // int32
                constexpr std::ptrdiff_t pitchstart = 0x8; // int32
                constexpr std::ptrdiff_t spinup = 0xC; // int32
                constexpr std::ptrdiff_t spindown = 0x10; // int32
                constexpr std::ptrdiff_t volrun = 0x14; // int32
                constexpr std::ptrdiff_t volstart = 0x18; // int32
                constexpr std::ptrdiff_t fadein = 0x1C; // int32
                constexpr std::ptrdiff_t fadeout = 0x20; // int32
                constexpr std::ptrdiff_t lfotype = 0x24; // int32
                constexpr std::ptrdiff_t lforate = 0x28; // int32
                constexpr std::ptrdiff_t lfomodpitch = 0x2C; // int32
                constexpr std::ptrdiff_t lfomodvol = 0x30; // int32
                constexpr std::ptrdiff_t cspinup = 0x34; // int32
                constexpr std::ptrdiff_t cspincount = 0x38; // int32
                constexpr std::ptrdiff_t pitch = 0x3C; // int32
                constexpr std::ptrdiff_t spinupsav = 0x40; // int32
                constexpr std::ptrdiff_t spindownsav = 0x44; // int32
                constexpr std::ptrdiff_t pitchfrac = 0x48; // int32
                constexpr std::ptrdiff_t vol = 0x4C; // int32
                constexpr std::ptrdiff_t fadeinsav = 0x50; // int32
                constexpr std::ptrdiff_t fadeoutsav = 0x54; // int32
                constexpr std::ptrdiff_t volfrac = 0x58; // int32
                constexpr std::ptrdiff_t lfofrac = 0x5C; // int32
                constexpr std::ptrdiff_t lfomult = 0x60; // int32
            }
            // Parent: dynpitchvol_base_t
            // Fields count: 0
            namespace dynpitchvol_t {
            }
            // Parent: None
            // Fields count: 3
            namespace response_context_t {
                constexpr std::ptrdiff_t m_isz_name = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_isz_value = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_f_expiration_time = 0x10; // GameTime_t
            }
            // Parent: None
            // Fields count: 2
            namespace relationship_t {
                constexpr std::ptrdiff_t disposition = 0x0; // Disposition_t
                constexpr std::ptrdiff_t priority = 0x4; // int32
            }
            // Parent: c_entity_instance
            // Fields count: 75
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames: m_CBodyComponent (CBodyComponent::Storage_t)
            // NetworkVarNames: m_iHealth (int32)
            // NetworkVarNames: m_iMaxHealth (int32)
            // NetworkVarNames: m_lifeState (uint8)
            // NetworkVarNames: m_bTakesDamage (bool)
            // NetworkVarNames: m_nTakeDamageFlags (TakeDamageFlags_t)
            // NetworkVarNames: m_bIsPlatform (bool)
            // NetworkVarNames: m_MoveCollide (MoveCollide_t)
            // NetworkVarNames: m_MoveType (MoveType_t)
            // NetworkVarNames: m_nSubclassID (EntitySubclassID_t)
            // NetworkVarNames: m_flAnimTime (float32)
            // NetworkVarNames: m_flSimulationTime (float32)
            // NetworkVarNames: m_flCreateTime (GameTime_t)
            // NetworkVarNames: m_bClientSideRagdoll (bool)
            // NetworkVarNames: m_ubInterpolationFrame (uint8)
            // NetworkVarNames: m_iTeamNum (uint8)
            // NetworkVarNames: m_spawnflags (uint32)
            // NetworkVarNames: m_nNextThinkTick (GameTick_t)
            // NetworkVarNames: m_fFlags (uint32)
            // NetworkVarNames: m_vecVelocity (CNetworkVelocityVector)
            // NetworkVarNames: m_vecBaseVelocity (Vector)
            // NetworkVarNames: m_hEffectEntity (CHandle< CBaseEntity>)
            // NetworkVarNames: m_hOwnerEntity (CHandle< CBaseEntity>)
            // NetworkVarNames: m_fEffects (uint32)
            // NetworkVarNames: m_hGroundEntity (CHandle< CBaseEntity>)
            // NetworkVarNames: m_flFriction (float32)
            // NetworkVarNames: m_flElasticity (float32)
            // NetworkVarNames: m_flGravityScale (float32)
            // NetworkVarNames: m_flTimeScale (float32)
            // NetworkVarNames: m_flWaterLevel (float)
            // NetworkVarNames: m_bAnimatedEveryTick (bool)
            // NetworkVarNames: m_flNavIgnoreUntilTime (GameTime_t)
            namespace c_base_entity {
                constexpr std::ptrdiff_t m_c_body_component = 0x38; // CBodyComponent*
                constexpr std::ptrdiff_t m_network_transmit_component = 0x40; // CNetworkTransmitComponent
                constexpr std::ptrdiff_t m_a_think_functions = 0x4F0; // CUtlVector< thinkfunc_t >
                constexpr std::ptrdiff_t m_i_current_think_context = 0x508; // int32
                constexpr std::ptrdiff_t m_n_last_think_tick = 0x50C; // GameTick_t
                constexpr std::ptrdiff_t m_n_disable_context_think_start_tick = 0x510; // GameTick_t
                constexpr std::ptrdiff_t m_is_steady_state = 0x520; // CBitVec< 64 >
                constexpr std::ptrdiff_t m_last_network_change = 0x528; // float32
                constexpr std::ptrdiff_t m_response_contexts = 0x540; // CUtlVector< ResponseContext_t >
                constexpr std::ptrdiff_t m_isz_response_context = 0x558; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_i_health = 0x5A0; // int32
                constexpr std::ptrdiff_t m_i_max_health = 0x5A4; // int32
                constexpr std::ptrdiff_t m_life_state = 0x5A8; // uint8
                constexpr std::ptrdiff_t m_fl_damage_accumulator = 0x5AC; // float32
                constexpr std::ptrdiff_t m_b_takes_damage = 0x5B0; // bool
                constexpr std::ptrdiff_t m_n_take_damage_flags = 0x5B4; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_b_is_platform = 0x5B8; // bool
                constexpr std::ptrdiff_t m_move_collide = 0x5BA; // MoveCollide_t
                constexpr std::ptrdiff_t m_move_type = 0x5BB; // MoveType_t
                constexpr std::ptrdiff_t m_n_actual_move_type = 0x5BC; // MoveType_t
                constexpr std::ptrdiff_t m_n_water_touch = 0x5BD; // uint8
                constexpr std::ptrdiff_t m_n_slime_touch = 0x5BE; // uint8
                constexpr std::ptrdiff_t m_b_restore_in_hierarchy = 0x5BF; // bool
                constexpr std::ptrdiff_t m_target = 0x5C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_h_damage_filter = 0x5C8; // CHandle< CBaseFilter >
                constexpr std::ptrdiff_t m_isz_damage_filter_name = 0x5D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_fl_move_done_time = 0x5D8; // float32
                constexpr std::ptrdiff_t m_n_subclass_id = 0x5DC; // CUtlStringToken
                constexpr std::ptrdiff_t m_fl_anim_time = 0x5E8; // float32
                constexpr std::ptrdiff_t m_fl_simulation_time = 0x5EC; // float32
                constexpr std::ptrdiff_t m_fl_create_time = 0x5F0; // GameTime_t
                constexpr std::ptrdiff_t m_b_client_side_ragdoll = 0x5F4; // bool
                constexpr std::ptrdiff_t m_ub_interpolation_frame = 0x5F5; // uint8
                constexpr std::ptrdiff_t m_v_prev_v_physics_update_pos = 0x5F8; // Vector
                constexpr std::ptrdiff_t m_i_team_num = 0x604; // uint8
                constexpr std::ptrdiff_t m_i_globalname = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_i_sent_to_clients = 0x610; // int32
                constexpr std::ptrdiff_t m_fl_speed = 0x614; // float32
                constexpr std::ptrdiff_t m_s_unique_hammer_id = 0x618; // CUtlString
                constexpr std::ptrdiff_t m_spawnflags = 0x620; // uint32
                constexpr std::ptrdiff_t m_n_next_think_tick = 0x624; // GameTick_t
                constexpr std::ptrdiff_t m_n_simulation_tick = 0x628; // int32
                constexpr std::ptrdiff_t m_on_killed = 0x630; // CEntityIOOutput
                constexpr std::ptrdiff_t m_f_flags = 0x658; // uint32
                constexpr std::ptrdiff_t m_vec_abs_velocity = 0x65C; // Vector
                constexpr std::ptrdiff_t m_vec_velocity = 0x668; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vec_base_velocity = 0x698; // Vector
                constexpr std::ptrdiff_t m_n_push_enum_count = 0x6A4; // int32
                constexpr std::ptrdiff_t m_p_collision = 0x6A8; // CCollisionProperty*
                constexpr std::ptrdiff_t m_h_effect_entity = 0x6B0; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_h_owner_entity = 0x6B4; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_f_effects = 0x6B8; // uint32
                constexpr std::ptrdiff_t m_h_ground_entity = 0x6BC; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_fl_friction = 0x6C0; // float32
                constexpr std::ptrdiff_t m_fl_elasticity = 0x6C4; // float32
                constexpr std::ptrdiff_t m_fl_gravity_scale = 0x6C8; // float32
                constexpr std::ptrdiff_t m_fl_time_scale = 0x6CC; // float32
                constexpr std::ptrdiff_t m_fl_water_level = 0x6D0; // float32
                constexpr std::ptrdiff_t m_b_animated_every_tick = 0x6D4; // bool
                constexpr std::ptrdiff_t m_b_disable_low_violence = 0x6D5; // bool
                constexpr std::ptrdiff_t m_n_water_type = 0x6D6; // uint8
                constexpr std::ptrdiff_t m_i_e_flags = 0x6D8; // int32
                constexpr std::ptrdiff_t m_on_user1 = 0x6E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_on_user2 = 0x708; // CEntityIOOutput
                constexpr std::ptrdiff_t m_on_user3 = 0x730; // CEntityIOOutput
                constexpr std::ptrdiff_t m_on_user4 = 0x758; // CEntityIOOutput
                constexpr std::ptrdiff_t m_i_initial_team_num = 0x780; // int32
                constexpr std::ptrdiff_t m_fl_nav_ignore_until_time = 0x784; // GameTime_t
                constexpr std::ptrdiff_t m_vec_ang_velocity = 0x788; // QAngle
                constexpr std::ptrdiff_t m_b_network_quantize_origin_and_angles = 0x794; // bool
                constexpr std::ptrdiff_t m_b_lag_compensate = 0x795; // bool
                constexpr std::ptrdiff_t m_fl_overridden_friction = 0x798; // float32
                constexpr std::ptrdiff_t m_p_blocker = 0x79C; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_fl_local_time = 0x7A0; // float32
                constexpr std::ptrdiff_t m_fl_v_physics_update_local_time = 0x7A4; // float32
            }
            // Parent: c_base_entity
            // Fields count: 0
            namespace c_server_only_entity {
            }
            // Parent: c_server_only_entity
            // Fields count: 0
            namespace c_server_only_point_entity {
            }
            // Parent: c_server_only_entity
            // Fields count: 0
            namespace c_logical_entity {
            }
            // Parent: c_base_entity
            // Fields count: 17
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // NetworkVarNames: m_flFadeInDuration (float32)
            // NetworkVarNames: m_flFadeOutDuration (float32)
            // NetworkVarNames: m_flMaxWeight (float32)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bMaster (bool)
            // NetworkVarNames: m_bClientSide (bool)
            // NetworkVarNames: m_bExclusive (bool)
            // NetworkVarNames: m_MinFalloff (float32)
            // NetworkVarNames: m_MaxFalloff (float32)
            // NetworkVarNames: m_flCurWeight (float32)
            // NetworkVarNames: m_netlookupFilename (char)
            namespace c_color_correction {
                constexpr std::ptrdiff_t m_fl_fade_in_duration = 0x7A8; // float32
                constexpr std::ptrdiff_t m_fl_fade_out_duration = 0x7AC; // float32
                constexpr std::ptrdiff_t m_fl_start_fade_in_weight = 0x7B0; // float32
                constexpr std::ptrdiff_t m_fl_start_fade_out_weight = 0x7B4; // float32
                constexpr std::ptrdiff_t m_fl_time_start_fade_in = 0x7B8; // GameTime_t
                constexpr std::ptrdiff_t m_fl_time_start_fade_out = 0x7BC; // GameTime_t
                constexpr std::ptrdiff_t m_fl_max_weight = 0x7C0; // float32
                constexpr std::ptrdiff_t m_b_start_disabled = 0x7C4; // bool
                constexpr std::ptrdiff_t m_b_enabled = 0x7C5; // bool
                constexpr std::ptrdiff_t m_b_master = 0x7C6; // bool
                constexpr std::ptrdiff_t m_b_client_side = 0x7C7; // bool
                constexpr std::ptrdiff_t m_b_exclusive = 0x7C8; // bool
                constexpr std::ptrdiff_t m_min_falloff = 0x7CC; // float32
                constexpr std::ptrdiff_t m_max_falloff = 0x7D0; // float32
                constexpr std::ptrdiff_t m_fl_cur_weight = 0x7D4; // float32
                constexpr std::ptrdiff_t m_netlookup_filename = 0x7D8; // char[512]
                constexpr std::ptrdiff_t m_lookup_filename = 0x9D8; // CUtlSymbolLarge
            }
            // Parent: c_base_entity
            // Fields count: 11
            //
            // Metadata:
            // NetworkVarNames: m_hEntAttached (CHandle< CBaseEntity>)
            // NetworkVarNames: m_bCheapEffect (bool)
            namespace c_entity_flame {
                constexpr std::ptrdiff_t m_h_ent_attached = 0x7A8; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_b_cheap_effect = 0x7AC; // bool
                constexpr std::ptrdiff_t m_fl_size = 0x7B0; // float32
                constexpr std::ptrdiff_t m_b_use_hitboxes = 0x7B4; // bool
                constexpr std::ptrdiff_t m_i_num_hitbox_fires = 0x7B8; // int32
                constexpr std::ptrdiff_t m_fl_hitbox_fire_scale = 0x7BC; // float32
                constexpr std::ptrdiff_t m_fl_lifetime = 0x7C0; // GameTime_t
                constexpr std::ptrdiff_t m_h_attacker = 0x7C4; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_i_danger_sound = 0x7C8; // int32
                constexpr std::ptrdiff_t m_fl_direct_damage_per_second = 0x7CC; // float32
                constexpr std::ptrdiff_t m_i_custom_damage_type = 0x7D0; // int32
            }
            // Parent: c_logical_entity
            // Fields count: 3
            namespace c_base_filter {
                constexpr std::ptrdiff_t m_b_negated = 0x7A8; // bool
                constexpr std::ptrdiff_t m_on_pass = 0x7B0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_on_fail = 0x7D8; // CEntityIOOutput
            }
            // Parent: c_base_filter
            // Fields count: 4
            namespace c_filter_multiple {
                constexpr std::ptrdiff_t m_n_filter_type = 0x800; // filter_t
                constexpr std::ptrdiff_t m_i_filter_name = 0x808; // CUtlSymbolLarge[10]
                constexpr std::ptrdiff_t m_h_filter = 0x858; // CHandle< CBaseEntity >[10]
                constexpr std::ptrdiff_t m_n_filter_count = 0x880; // int32
            }
            // Parent: c_base_filter
            // Fields count: 1
            namespace c_filter_proximity {
                constexpr std::ptrdiff_t m_fl_radius = 0x800; // float32
            }
            // Parent: c_base_filter
            // Fields count: 0
            namespace c_filter_los {
            }
            // Parent: c_base_filter
            // Fields count: 1
            namespace c_filter_class {
                constexpr std::ptrdiff_t m_i_filter_class = 0x800; // CUtlSymbolLarge
            }
            // Parent: c_base_entity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_flScale (float32)
            // NetworkVarNames: m_flStartScale (float32)
            // NetworkVarNames: m_flScaleTime (float32)
            // NetworkVarNames: m_nFlags (uint32)
            namespace c_base_fire {
                constexpr std::ptrdiff_t m_fl_scale = 0x7A8; // float32
                constexpr std::ptrdiff_t m_fl_start_scale = 0x7AC; // float32
                constexpr std::ptrdiff_t m_fl_scale_time = 0x7B0; // float32
                constexpr std::ptrdiff_t m_n_flags = 0x7B4; // uint32
            }
            // Parent: c_base_fire
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nFlameModelIndex (int32)
            // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
            namespace c_fire_smoke {
                constexpr std::ptrdiff_t m_n_flame_model_index = 0x7B8; // int32
                constexpr std::ptrdiff_t m_n_flame_from_above_model_index = 0x7BC; // int32
            }
            // Parent: c_base_entity
            // Fields count: 7
            namespace c_fish_pool {
                constexpr std::ptrdiff_t m_fish_count = 0x7B4; // int32
                constexpr std::ptrdiff_t m_max_range = 0x7B8; // float32
                constexpr std::ptrdiff_t m_swim_depth = 0x7BC; // float32
                constexpr std::ptrdiff_t m_water_level = 0x7C0; // float32
                constexpr std::ptrdiff_t m_is_dormant = 0x7C4; // bool
                constexpr std::ptrdiff_t m_fishes = 0x7C8; // CUtlVector< CHandle< CFish > >
                constexpr std::ptrdiff_t m_vis_timer = 0x7E0; // CountdownTimer
            }
            // Parent: c_server_only_entity
            // Fields count: 0
            namespace c_info_data {
            }
            // Parent: None
            // Fields count: 3
            namespace locksound_t {
                constexpr std::ptrdiff_t s_locked_sound = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t s_unlocked_sound = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t flwait_sound = 0x18; // GameTime_t
            }
            // Parent: c_logical_entity
            // Fields count: 4
            namespace c_logic_branch {
                constexpr std::ptrdiff_t m_b_in_value = 0x7A8; // bool
                constexpr std::ptrdiff_t m_listeners = 0x7B0; // CUtlVector< CHandle< CBaseEntity > >
                constexpr std::ptrdiff_t m_on_true = 0x7C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_on_false = 0x7F0; // CEntityIOOutput
            }
            // Parent: c_logical_entity
            // Fields count: 7
            namespace c_logic_distance_check {
                constexpr std::ptrdiff_t m_isz_entity_a = 0x7A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_isz_entity_b = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_fl_zone1_distance = 0x7B8; // float32
                constexpr std::ptrdiff_t m_fl_zone2_distance = 0x7BC; // float32
                constexpr std::ptrdiff_t m_in_zone1 = 0x7C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_in_zone2 = 0x7E8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_in_zone3 = 0x810; // CEntityIOOutput
            }
            // Parent: None
            // Fields count: 3
            namespace velocity_sampler {
                constexpr std::ptrdiff_t m_prev_sample = 0x0; // Vector
                constexpr std::ptrdiff_t m_f_prev_sample_time = 0xC; // GameTime_t
                constexpr std::ptrdiff_t m_f_ideal_sample_rate = 0x10; // float32
            }
            // Parent: None
            // Fields count: 3
            namespace simple_constraint_sound_profile {
                constexpr std::ptrdiff_t e_keypoints = 0x8; // SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t
                constexpr std::ptrdiff_t m_key_points = 0xC; // float32[2]
                constexpr std::ptrdiff_t m_reversal_sound_thresholds = 0x14; // float32[3]
            }
            // Parent: None
            // Fields count: 8
            namespace constraint_sound_info {
                constexpr std::ptrdiff_t m_v_sampler = 0x8; // VelocitySampler
                constexpr std::ptrdiff_t m_sound_profile = 0x20; // SimpleConstraintSoundProfile
                constexpr std::ptrdiff_t m_forward_axis = 0x40; // Vector
                constexpr std::ptrdiff_t m_isz_travel_sound_fwd = 0x50; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_isz_travel_sound_back = 0x58; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_isz_reversal_sounds = 0x68; // CUtlSymbolLarge[3]
                constexpr std::ptrdiff_t m_b_play_travel_sound = 0x80; // bool
                constexpr std::ptrdiff_t m_b_play_reversal_sound = 0x81; // bool
            }
            // Parent: None
            // Fields count: 5
            namespace c_smooth_func {
                constexpr std::ptrdiff_t m_fl_smooth_amplitude = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_smooth_bias = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_smooth_duration = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_smooth_remaining_time = 0x14; // float32
                constexpr std::ptrdiff_t m_n_smooth_dir = 0x18; // int32
            }
            // Parent: None
            // Fields count: 1
            namespace magnetted_objects_t {
                constexpr std::ptrdiff_t h_entity = 0x8; // CHandle< CBaseEntity >
            }
            // Parent: c_server_only_point_entity
            // Fields count: 6
            namespace c_point_prefab {
                constexpr std::ptrdiff_t m_target_map_name = 0x7A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_force_world_group_id = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_associated_relay_target_name = 0x7B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_fixup_names = 0x7C0; // bool
                constexpr std::ptrdiff_t m_b_load_dynamic = 0x7C1; // bool
                constexpr std::ptrdiff_t m_associated_relay_entity = 0x7C4; // CHandle< CPointPrefab >
            }
            // Parent: c_base_entity
            // Fields count: 2
            namespace c_skybox_reference {
                constexpr std::ptrdiff_t m_world_group_id = 0x7A8; // WorldGroupId_t
                constexpr std::ptrdiff_t m_h_sky_camera = 0x7AC; // CHandle< CSkyCamera >
            }
            // Parent: c_base_entity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_skyboxData (sky3dparams_t)
            // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
            namespace c_sky_camera {
                constexpr std::ptrdiff_t m_skybox_data = 0x7A8; // sky3dparams_t
                constexpr std::ptrdiff_t m_skybox_slot_token = 0x838; // CUtlStringToken
                constexpr std::ptrdiff_t m_b_use_angles = 0x83C; // bool
                constexpr std::ptrdiff_t m_p_next = 0x840; // CSkyCamera*
            }
            // Parent: None
            // Fields count: 12
            namespace c_sound {
                constexpr std::ptrdiff_t m_h_owner = 0x0; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_h_target = 0x4; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_i_volume = 0x8; // int32
                constexpr std::ptrdiff_t m_fl_occlusion_scale = 0xC; // float32
                constexpr std::ptrdiff_t m_i_type = 0x10; // int32
                constexpr std::ptrdiff_t m_i_next_audible = 0x14; // int32
                constexpr std::ptrdiff_t m_fl_expire_time = 0x18; // GameTime_t
                constexpr std::ptrdiff_t m_i_next = 0x1C; // int16
                constexpr std::ptrdiff_t m_b_no_expiration_time = 0x1E; // bool
                constexpr std::ptrdiff_t m_owner_channel_index = 0x20; // int32
                constexpr std::ptrdiff_t m_vec_origin = 0x24; // Vector
                constexpr std::ptrdiff_t m_b_has_owner = 0x30; // bool
            }
            // Parent: c_server_only_entity
            // Fields count: 11
            namespace c_env_soundscape {
                constexpr std::ptrdiff_t m_on_play = 0x7A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_fl_radius = 0x7D0; // float32
                constexpr std::ptrdiff_t m_soundscape_name = 0x7D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sound_event_name = 0x7E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_b_override_with_event = 0x7E8; // bool
                constexpr std::ptrdiff_t m_soundscape_index = 0x7EC; // int32
                constexpr std::ptrdiff_t m_soundscape_entity_list_id = 0x7F0; // int32
                constexpr std::ptrdiff_t m_sound_event_hash = 0x7F4; // uint32
                constexpr std::ptrdiff_t m_position_names = 0x7F8; // CUtlSymbolLarge[8]
                constexpr std::ptrdiff_t m_h_proxy_soundscape = 0x838; // CHandle< CEnvSoundscape >
                constexpr std::ptrdiff_t m_b_disabled = 0x83C; // bool
            }
            // Parent: c_env_soundscape
            // Fields count: 1
            namespace c_env_soundscape_proxy {
                constexpr std::ptrdiff_t m_main_soundscape_name = 0x840; // CUtlSymbolLarge
            }
            // Parent: c_env_soundscape
            // Fields count: 0
            namespace c_env_soundscape_triggerable {
            }
            // Parent: None
            // Fields count: 6
            namespace lerpdata_t {
                constexpr std::ptrdiff_t m_h_ent = 0x0; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_move_type = 0x4; // MoveType_t
                constexpr std::ptrdiff_t m_fl_start_time = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_vec_start_origin = 0xC; // Vector
                constexpr std::ptrdiff_t m_q_start_rot = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_n_fx_index = 0x30; // ParticleIndex_t
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_nav_link_animgraph_var {
                constexpr std::ptrdiff_t m_str_animgraph_var = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_un_alignment_degrees = 0x8; // uint32
            }
            // Parent: c_nav_volume
            // Fields count: 0
            namespace c_nav_volume_markup_volume {
            }
            // Parent: c_nav_volume
            // Fields count: 0
            namespace c_nav_volume_calculated_vector {
            }
            // Parent: c_nav_volume_calculated_vector
            // Fields count: 2
            namespace c_nav_volume_breadth_first_search {
                constexpr std::ptrdiff_t m_v_start_pos = 0x80; // Vector
                constexpr std::ptrdiff_t m_fl_search_dist = 0x8C; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_nInteractsAs (uint64)
            // NetworkVarNames: m_nInteractsWith (uint64)
            // NetworkVarNames: m_nInteractsExclude (uint64)
            // NetworkVarNames: m_nEntityId (uint32)
            // NetworkVarNames: m_nOwnerId (uint32)
            // NetworkVarNames: m_nHierarchyId (uint16)
            // NetworkVarNames: m_nCollisionGroup (uint8)
            // NetworkVarNames: m_nCollisionFunctionMask (uint8)
            namespace v_physics_collision_attribute_t {
                constexpr std::ptrdiff_t m_n_interacts_as = 0x8; // uint64
                constexpr std::ptrdiff_t m_n_interacts_with = 0x10; // uint64
                constexpr std::ptrdiff_t m_n_interacts_exclude = 0x18; // uint64
                constexpr std::ptrdiff_t m_n_entity_id = 0x20; // uint32
                constexpr std::ptrdiff_t m_n_owner_id = 0x24; // uint32
                constexpr std::ptrdiff_t m_n_hierarchy_id = 0x28; // uint16
                constexpr std::ptrdiff_t m_n_collision_group = 0x2A; // uint8
                constexpr std::ptrdiff_t m_n_collision_function_mask = 0x2B; // uint8
            }
            // Parent: None
            // Fields count: 17
            //
            // Metadata:
            // NetworkVarNames: m_collisionAttribute (VPhysicsCollisionAttribute_t)
            // NetworkVarNames: m_vecMins (Vector)
            // NetworkVarNames: m_vecMaxs (Vector)
            // NetworkVarNames: m_usSolidFlags (uint8)
            // NetworkVarNames: m_nSolidType (SolidType_t)
            // NetworkVarNames: m_triggerBloat (uint8)
            // NetworkVarNames: m_nSurroundType (SurroundingBoundsType_t)
            // NetworkVarNames: m_CollisionGroup (uint8)
            // NetworkVarNames: m_nEnablePhysics (uint8)
            // NetworkVarNames: m_vecSpecifiedSurroundingMins (Vector)
            // NetworkVarNames: m_vecSpecifiedSurroundingMaxs (Vector)
            // NetworkVarNames: m_vCapsuleCenter1 (Vector)
            // NetworkVarNames: m_vCapsuleCenter2 (Vector)
            // NetworkVarNames: m_flCapsuleRadius (float)
            namespace c_collision_property {
                constexpr std::ptrdiff_t m_collision_attribute = 0x10; // VPhysicsCollisionAttribute_t
                constexpr std::ptrdiff_t m_vec_mins = 0x40; // Vector
                constexpr std::ptrdiff_t m_vec_maxs = 0x4C; // Vector
                constexpr std::ptrdiff_t m_us_solid_flags = 0x5A; // uint8
                constexpr std::ptrdiff_t m_n_solid_type = 0x5B; // SolidType_t
                constexpr std::ptrdiff_t m_trigger_bloat = 0x5C; // uint8
                constexpr std::ptrdiff_t m_n_surround_type = 0x5D; // SurroundingBoundsType_t
                constexpr std::ptrdiff_t m_collision_group = 0x5E; // uint8
                constexpr std::ptrdiff_t m_n_enable_physics = 0x5F; // uint8
                constexpr std::ptrdiff_t m_fl_bounding_radius = 0x60; // float32
                constexpr std::ptrdiff_t m_vec_specified_surrounding_mins = 0x64; // Vector
                constexpr std::ptrdiff_t m_vec_specified_surrounding_maxs = 0x70; // Vector
                constexpr std::ptrdiff_t m_vec_surrounding_maxs = 0x7C; // Vector
                constexpr std::ptrdiff_t m_vec_surrounding_mins = 0x88; // Vector
                constexpr std::ptrdiff_t m_v_capsule_center1 = 0x94; // Vector
                constexpr std::ptrdiff_t m_v_capsule_center2 = 0xA0; // Vector
                constexpr std::ptrdiff_t m_fl_capsule_radius = 0xAC; // float32
            }
            // Parent: None
            // Fields count: 21
            //
            // Metadata:
            // NetworkVarNames: m_vOrigin (Vector)
            // NetworkVarNames: m_vStart (Vector)
            // NetworkVarNames: m_vNormal (Vector)
            // NetworkVarNames: m_vAngles (QAngle)
            // NetworkVarNames: m_hEntity (CEntityHandle)
            // NetworkVarNames: m_hOtherEntity (CEntityHandle)
            // NetworkVarNames: m_flScale (float32)
            // NetworkVarNames: m_flMagnitude (float32)
            // NetworkVarNames: m_flRadius (float32)
            // NetworkVarNames: m_nSurfaceProp (CUtlStringToken)
            // NetworkVarNames: m_nEffectIndex (HParticleSystemDefinition)
            // NetworkVarNames: m_nDamageType (uint32)
            // NetworkVarNames: m_nPenetrate (uint8)
            // NetworkVarNames: m_nMaterial (uint16)
            // NetworkVarNames: m_nHitBox (uint16)
            // NetworkVarNames: m_nColor (uint8)
            // NetworkVarNames: m_fFlags (uint8)
            // NetworkVarNames: m_nAttachmentIndex (AttachmentHandle_t)
            // NetworkVarNames: m_nAttachmentName (CUtlStringToken)
            // NetworkVarNames: m_iEffectName (uint16)
            // NetworkVarNames: m_nExplosionType (uint8)
            namespace c_effect_data {
                constexpr std::ptrdiff_t m_v_origin = 0x8; // Vector
                constexpr std::ptrdiff_t m_v_start = 0x14; // Vector
                constexpr std::ptrdiff_t m_v_normal = 0x20; // Vector
                constexpr std::ptrdiff_t m_v_angles = 0x2C; // QAngle
                constexpr std::ptrdiff_t m_h_entity = 0x38; // CEntityHandle
                constexpr std::ptrdiff_t m_h_other_entity = 0x3C; // CEntityHandle
                constexpr std::ptrdiff_t m_fl_scale = 0x40; // float32
                constexpr std::ptrdiff_t m_fl_magnitude = 0x44; // float32
                constexpr std::ptrdiff_t m_fl_radius = 0x48; // float32
                constexpr std::ptrdiff_t m_n_surface_prop = 0x4C; // CUtlStringToken
                constexpr std::ptrdiff_t m_n_effect_index = 0x50; // CWeakHandle< InfoForResourceTypeIParticleSystemDefinition >
                constexpr std::ptrdiff_t m_n_damage_type = 0x58; // uint32
                constexpr std::ptrdiff_t m_n_penetrate = 0x5C; // uint8
                constexpr std::ptrdiff_t m_n_material = 0x5E; // uint16
                constexpr std::ptrdiff_t m_n_hit_box = 0x60; // uint16
                constexpr std::ptrdiff_t m_n_color = 0x62; // uint8
                constexpr std::ptrdiff_t m_f_flags = 0x63; // uint8
                constexpr std::ptrdiff_t m_n_attachment_index = 0x64; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_n_attachment_name = 0x68; // CUtlStringToken
                constexpr std::ptrdiff_t m_i_effect_name = 0x6C; // uint16
                constexpr std::ptrdiff_t m_n_explosion_type = 0x6E; // uint8
            }
            // Parent: c_base_entity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFadeStartDist (float32)
            // NetworkVarNames: m_flFadeEndDist (float32)
            namespace c_env_detail_controller {
                constexpr std::ptrdiff_t m_fl_fade_start_dist = 0x7A8; // float32
                constexpr std::ptrdiff_t m_fl_fade_end_dist = 0x7AC; // float32
            }
            // Parent: None
            // Fields count: 31
            //
            // Metadata:
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_iWindSeed (uint32)
            // NetworkVarNames: m_iMinWind (uint16)
            // NetworkVarNames: m_iMaxWind (uint16)
            // NetworkVarNames: m_windRadius (int32)
            // NetworkVarNames: m_iMinGust (uint16)
            // NetworkVarNames: m_iMaxGust (uint16)
            // NetworkVarNames: m_flMinGustDelay (float32)
            // NetworkVarNames: m_flMaxGustDelay (float32)
            // NetworkVarNames: m_flGustDuration (float32)
            // NetworkVarNames: m_iGustDirChange (uint16)
            // NetworkVarNames: m_location (Vector)
            // NetworkVarNames: m_iInitialWindDir (uint16)
            // NetworkVarNames: m_flInitialWindSpeed (float32)
            namespace c_env_wind_shared {
                constexpr std::ptrdiff_t m_fl_start_time = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_i_wind_seed = 0xC; // uint32
                constexpr std::ptrdiff_t m_i_min_wind = 0x10; // uint16
                constexpr std::ptrdiff_t m_i_max_wind = 0x12; // uint16
                constexpr std::ptrdiff_t m_wind_radius = 0x14; // int32
                constexpr std::ptrdiff_t m_i_min_gust = 0x18; // uint16
                constexpr std::ptrdiff_t m_i_max_gust = 0x1A; // uint16
                constexpr std::ptrdiff_t m_fl_min_gust_delay = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_max_gust_delay = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_gust_duration = 0x24; // float32
                constexpr std::ptrdiff_t m_i_gust_dir_change = 0x28; // uint16
                constexpr std::ptrdiff_t m_location = 0x2C; // Vector
                constexpr std::ptrdiff_t m_isz_gust_sound = 0x38; // int32
                constexpr std::ptrdiff_t m_i_wind_dir = 0x3C; // int32
                constexpr std::ptrdiff_t m_fl_wind_speed = 0x40; // float32
                constexpr std::ptrdiff_t m_current_wind_vector = 0x44; // Vector
                constexpr std::ptrdiff_t m_current_sway_vector = 0x50; // Vector
                constexpr std::ptrdiff_t m_prev_sway_vector = 0x5C; // Vector
                constexpr std::ptrdiff_t m_i_initial_wind_dir = 0x68; // uint16
                constexpr std::ptrdiff_t m_fl_initial_wind_speed = 0x6C; // float32
                constexpr std::ptrdiff_t m_on_gust_start = 0x70; // CEntityIOOutput
                constexpr std::ptrdiff_t m_on_gust_end = 0x98; // CEntityIOOutput
                constexpr std::ptrdiff_t m_fl_variation_time = 0xC0; // GameTime_t
                constexpr std::ptrdiff_t m_fl_sway_time = 0xC4; // GameTime_t
                constexpr std::ptrdiff_t m_fl_sim_time = 0xC8; // GameTime_t
                constexpr std::ptrdiff_t m_fl_switch_time = 0xCC; // GameTime_t
                constexpr std::ptrdiff_t m_fl_ave_wind_speed = 0xD0; // float32
                constexpr std::ptrdiff_t m_b_gusting = 0xD4; // bool
                constexpr std::ptrdiff_t m_fl_wind_angle_variation = 0xD8; // float32
                constexpr std::ptrdiff_t m_fl_wind_speed_variation = 0xDC; // float32
                constexpr std::ptrdiff_t m_i_ent_index = 0xE0; // CEntityIndex
            }
            // Parent: None
            // Fields count: 2
            namespace c_env_wind_shared_wind_ave_event_t {
                constexpr std::ptrdiff_t m_fl_start_wind_speed = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_ave_wind_speed = 0x4; // float32
            }
            // Parent: None
            // Fields count: 2
            namespace c_env_wind_shared_wind_variation_event_t {
                constexpr std::ptrdiff_t m_fl_wind_angle_variation = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_wind_speed_variation = 0x4; // float32
            }
            // Parent: c_base_entity
            // Fields count: 0
            namespace c_info_ladder_dismount {
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // NetworkVarNames: m_nModelID (int32)
            // NetworkVarNames: m_hMaterial (HMaterialStrong)
            // NetworkVarNames: m_solid (ShardSolid_t)
            // NetworkVarNames: m_ShatterPanelMode (ShatterPanelMode)
            // NetworkVarNames: m_vecPanelSize (Vector2D)
            // NetworkVarNames: m_vecStressPositionA (Vector2D)
            // NetworkVarNames: m_vecStressPositionB (Vector2D)
            // NetworkVarNames: m_vecPanelVertices (Vector2D)
            // NetworkVarNames: m_flGlassHalfThickness (float)
            // NetworkVarNames: m_bHasParent (bool)
            // NetworkVarNames: m_bParentFrozen (bool)
            // NetworkVarNames: m_SurfacePropStringToken (CUtlStringToken)
            namespace shard_model_desc_t {
                constexpr std::ptrdiff_t m_n_model_id = 0x8; // int32
                constexpr std::ptrdiff_t m_h_material = 0x10; // CStrongHandle< InfoForResourceTypeIMaterial2 >
                constexpr std::ptrdiff_t m_solid = 0x18; // ShardSolid_t
                constexpr std::ptrdiff_t m_shatter_panel_mode = 0x19; // ShatterPanelMode
                constexpr std::ptrdiff_t m_vec_panel_size = 0x1C; // Vector2D
                constexpr std::ptrdiff_t m_vec_stress_position_a = 0x24; // Vector2D
                constexpr std::ptrdiff_t m_vec_stress_position_b = 0x2C; // Vector2D
                constexpr std::ptrdiff_t m_vec_panel_vertices = 0x38; // CNetworkUtlVectorBase< Vector2D >
                constexpr std::ptrdiff_t m_fl_glass_half_thickness = 0x50; // float32
                constexpr std::ptrdiff_t m_b_has_parent = 0x54; // bool
                constexpr std::ptrdiff_t m_b_parent_frozen = 0x55; // bool
                constexpr std::ptrdiff_t m_surface_prop_string_token = 0x58; // CUtlStringToken
            }
            // Parent: None
            // Fields count: 30
            namespace c_shatter_glass_shard {
                constexpr std::ptrdiff_t m_h_shard_handle = 0x8; // uint32
                constexpr std::ptrdiff_t m_vec_panel_vertices = 0x10; // CUtlVector< Vector2D >
                constexpr std::ptrdiff_t m_v_local_panel_space_origin = 0x28; // Vector2D
                constexpr std::ptrdiff_t m_h_model = 0x30; // CStrongHandle< InfoForResourceTypeCModel >
                constexpr std::ptrdiff_t m_h_physics_entity = 0x38; // CHandle< CShatterGlassShardPhysics >
                constexpr std::ptrdiff_t m_h_parent_panel = 0x3C; // CHandle< CFuncShatterglass >
                constexpr std::ptrdiff_t m_h_parent_shard = 0x40; // uint32
                constexpr std::ptrdiff_t m_shatter_stress_type = 0x44; // ShatterGlassStressType
                constexpr std::ptrdiff_t m_vec_stress_velocity = 0x48; // Vector
                constexpr std::ptrdiff_t m_b_created_model = 0x54; // bool
                constexpr std::ptrdiff_t m_fl_longest_edge = 0x58; // float32
                constexpr std::ptrdiff_t m_fl_shortest_edge = 0x5C; // float32
                constexpr std::ptrdiff_t m_fl_longest_across = 0x60; // float32
                constexpr std::ptrdiff_t m_fl_shortest_across = 0x64; // float32
                constexpr std::ptrdiff_t m_fl_sum_of_all_edges = 0x68; // float32
                constexpr std::ptrdiff_t m_fl_area = 0x6C; // float32
                constexpr std::ptrdiff_t m_n_on_frame_edge = 0x70; // OnFrame
                constexpr std::ptrdiff_t m_n_parent_panels_nth_shard = 0x74; // int32
                constexpr std::ptrdiff_t m_n_sub_shard_generation = 0x78; // int32
                constexpr std::ptrdiff_t m_vec_average_vert_position = 0x7C; // Vector2D
                constexpr std::ptrdiff_t m_b_average_vert_position_is_valid = 0x84; // bool
                constexpr std::ptrdiff_t m_vec_panel_space_stress_position_a = 0x88; // Vector2D
                constexpr std::ptrdiff_t m_vec_panel_space_stress_position_b = 0x90; // Vector2D
                constexpr std::ptrdiff_t m_b_stress_position_a_is_valid = 0x98; // bool
                constexpr std::ptrdiff_t m_b_stress_position_b_is_valid = 0x99; // bool
                constexpr std::ptrdiff_t m_b_flagged_for_removal = 0x9A; // bool
                constexpr std::ptrdiff_t m_fl_physics_entity_spawned_at_time = 0x9C; // GameTime_t
                constexpr std::ptrdiff_t m_b_shatter_rate_limited = 0xA0; // bool
                constexpr std::ptrdiff_t m_h_entity_hitting_me = 0xA4; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_vec_neighbors = 0xA8; // CUtlVector< uint32 >
            }
            // Parent: c_base_entity
            // Fields count: 0
            namespace c_game_rules_proxy {
            }
            // Parent: None
            // Fields count: 2
            namespace c_game_rules {
                constexpr std::ptrdiff_t m_sz_quest_name = 0x8; // char[128]
                constexpr std::ptrdiff_t m_n_quest_phase = 0x88; // int32
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // NetworkVarNames: m_iGlowType (int32)
            // NetworkVarNames: m_iGlowTeam (int32)
            // NetworkVarNames: m_nGlowRange (int32)
            // NetworkVarNames: m_nGlowRangeMin (int32)
            // NetworkVarNames: m_glowColorOverride (Color)
            // NetworkVarNames: m_bFlashing (bool)
            // NetworkVarNames: m_flGlowTime (float)
            // NetworkVarNames: m_flGlowStartTime (float)
            // NetworkVarNames: m_bEligibleForScreenHighlight (bool)
            namespace c_glow_property {
                constexpr std::ptrdiff_t m_f_glow_color = 0x8; // Vector
                constexpr std::ptrdiff_t m_i_glow_type = 0x30; // int32
                constexpr std::ptrdiff_t m_i_glow_team = 0x34; // int32
                constexpr std::ptrdiff_t m_n_glow_range = 0x38; // int32
                constexpr std::ptrdiff_t m_n_glow_range_min = 0x3C; // int32
                constexpr std::ptrdiff_t m_glow_color_override = 0x40; // Color
                constexpr std::ptrdiff_t m_b_flashing = 0x44; // bool
                constexpr std::ptrdiff_t m_fl_glow_time = 0x48; // float32
                constexpr std::ptrdiff_t m_fl_glow_start_time = 0x4C; // float32
                constexpr std::ptrdiff_t m_b_eligible_for_screen_highlight = 0x50; // bool
                constexpr std::ptrdiff_t m_b_glowing = 0x51; // bool
            }
            // Parent: c_game_rules
            // Fields count: 0
            namespace c_multiplay_rules {
            }
            // Parent: None
            // Fields count: 25
            //
            // Metadata:
            // NetworkVarNames: dirPrimary (Vector)
            // NetworkVarNames: colorPrimary (Color)
            // NetworkVarNames: colorSecondary (Color)
            // NetworkVarNames: colorPrimaryLerpTo (Color)
            // NetworkVarNames: colorSecondaryLerpTo (Color)
            // NetworkVarNames: start (float32)
            // NetworkVarNames: end (float32)
            // NetworkVarNames: farz (float32)
            // NetworkVarNames: maxdensity (float32)
            // NetworkVarNames: exponent (float32)
            // NetworkVarNames: HDRColorScale (float32)
            // NetworkVarNames: skyboxFogFactor (float32)
            // NetworkVarNames: skyboxFogFactorLerpTo (float32)
            // NetworkVarNames: startLerpTo (float32)
            // NetworkVarNames: endLerpTo (float32)
            // NetworkVarNames: maxdensityLerpTo (float32)
            // NetworkVarNames: lerptime (GameTime_t)
            // NetworkVarNames: duration (float32)
            // NetworkVarNames: blendtobackground (float32)
            // NetworkVarNames: scattering (float32)
            // NetworkVarNames: locallightscale (float32)
            // NetworkVarNames: enable (bool)
            // NetworkVarNames: blend (bool)
            // NetworkVarNames: m_bNoReflectionFog (bool)
            namespace fogparams_t {
                constexpr std::ptrdiff_t dir_primary = 0x8; // Vector
                constexpr std::ptrdiff_t color_primary = 0x14; // Color
                constexpr std::ptrdiff_t color_secondary = 0x18; // Color
                constexpr std::ptrdiff_t color_primary_lerp_to = 0x1C; // Color
                constexpr std::ptrdiff_t color_secondary_lerp_to = 0x20; // Color
                constexpr std::ptrdiff_t start = 0x24; // float32
                constexpr std::ptrdiff_t end = 0x28; // float32
                constexpr std::ptrdiff_t farz = 0x2C; // float32
                constexpr std::ptrdiff_t maxdensity = 0x30; // float32
                constexpr std::ptrdiff_t exponent = 0x34; // float32
                constexpr std::ptrdiff_t hdr_color_scale = 0x38; // float32
                constexpr std::ptrdiff_t skybox_fog_factor = 0x3C; // float32
                constexpr std::ptrdiff_t skybox_fog_factor_lerp_to = 0x40; // float32
                constexpr std::ptrdiff_t start_lerp_to = 0x44; // float32
                constexpr std::ptrdiff_t end_lerp_to = 0x48; // float32
                constexpr std::ptrdiff_t maxdensity_lerp_to = 0x4C; // float32
                constexpr std::ptrdiff_t lerptime = 0x50; // GameTime_t
                constexpr std::ptrdiff_t duration = 0x54; // float32
                constexpr std::ptrdiff_t blendtobackground = 0x58; // float32
                constexpr std::ptrdiff_t scattering = 0x5C; // float32
                constexpr std::ptrdiff_t locallightscale = 0x60; // float32
                constexpr std::ptrdiff_t enable = 0x64; // bool
                constexpr std::ptrdiff_t blend = 0x65; // bool
                constexpr std::ptrdiff_t m_b_no_reflection_fog = 0x66; // bool
                constexpr std::ptrdiff_t m_b_padding = 0x67; // bool
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // NetworkVarNames: m_hCtrl (CHandle< CFogController>)
            namespace fogplayerparams_t {
                constexpr std::ptrdiff_t m_h_ctrl = 0x8; // CHandle< CFogController >
                constexpr std::ptrdiff_t m_fl_transition_time = 0xC; // float32
                constexpr std::ptrdiff_t m_old_color = 0x10; // Color
                constexpr std::ptrdiff_t m_fl_old_start = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_old_end = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_old_max_density = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_old_hdr_color_scale = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_old_far_z = 0x24; // float32
                constexpr std::ptrdiff_t m_new_color = 0x28; // Color
                constexpr std::ptrdiff_t m_fl_new_start = 0x2C; // float32
                constexpr std::ptrdiff_t m_fl_new_end = 0x30; // float32
                constexpr std::ptrdiff_t m_fl_new_max_density = 0x34; // float32
                constexpr std::ptrdiff_t m_fl_new_hdr_color_scale = 0x38; // float32
                constexpr std::ptrdiff_t m_fl_new_far_z = 0x3C; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: scale (int16)
            // NetworkVarNames: origin (Vector)
            // NetworkVarNames: bClip3DSkyBoxNearToWorldFar (bool)
            // NetworkVarNames: flClip3DSkyBoxNearToWorldFarOffset (float32)
            // NetworkVarNames: fog (fogparams_t)
            // NetworkVarNames: m_nWorldGroupID (WorldGroupId_t)
            namespace sky3dparams_t {
                constexpr std::ptrdiff_t scale = 0x8; // int16
                constexpr std::ptrdiff_t origin = 0xC; // Vector
                constexpr std::ptrdiff_t b_clip3_d_sky_box_near_to_world_far = 0x18; // bool
                constexpr std::ptrdiff_t fl_clip3_d_sky_box_near_to_world_far_offset = 0x1C; // float32
                constexpr std::ptrdiff_t fog = 0x20; // fogparams_t
                constexpr std::ptrdiff_t m_n_world_group_id = 0x88; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 5
            namespace sndopvarlatchdata_t {
                constexpr std::ptrdiff_t m_isz_stack = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_isz_operator = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_isz_opvar = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_fl_val = 0x20; // float32
                constexpr std::ptrdiff_t m_v_pos = 0x24; // Vector
            }
            // Parent: None
            // Fields count: 0
            namespace i_ragdoll {
            }
            // Parent: None
            // Fields count: 3
            namespace ragdollelement_t {
                constexpr std::ptrdiff_t origin_parent_space = 0x0; // Vector
                constexpr std::ptrdiff_t parent_index = 0x20; // int32
                constexpr std::ptrdiff_t m_fl_radius = 0x24; // float32
            }
            // Parent: None
            // Fields count: 4
            namespace ragdoll_t {
                constexpr std::ptrdiff_t list = 0x0; // CUtlVector< ragdollelement_t >
                constexpr std::ptrdiff_t bone_index = 0x18; // CUtlVector< int32 >
                constexpr std::ptrdiff_t allow_stretch = 0x30; // bool
                constexpr std::ptrdiff_t unused = 0x31; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_Transforms (CTransform)
            // NetworkVarNames: m_hOwner (EHANDLE)
            namespace physics_ragdoll_pose_t {
                constexpr std::ptrdiff_t m_p_chain_entity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_transforms = 0x30; // CNetworkUtlVectorBase< CTransform >
                constexpr std::ptrdiff_t m_h_owner = 0x48; // CHandle< CBaseEntity >
            }
            // Parent: None
            // Fields count: 13
            namespace c_scene_event_info {
                constexpr std::ptrdiff_t m_i_layer = 0x0; // int32
                constexpr std::ptrdiff_t m_i_priority = 0x4; // int32
                constexpr std::ptrdiff_t m_h_sequence = 0x8; // HSequence
                constexpr std::ptrdiff_t m_fl_weight = 0xC; // float32
                constexpr std::ptrdiff_t m_b_has_arrived = 0x10; // bool
                constexpr std::ptrdiff_t m_n_type = 0x14; // int32
                constexpr std::ptrdiff_t m_fl_next = 0x18; // GameTime_t
                constexpr std::ptrdiff_t m_b_is_gesture = 0x1C; // bool
                constexpr std::ptrdiff_t m_b_should_remove = 0x1D; // bool
                constexpr std::ptrdiff_t m_h_target = 0x44; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_n_scene_event_id = 0x48; // uint32
                constexpr std::ptrdiff_t m_b_client_side = 0x4C; // bool
                constexpr std::ptrdiff_t m_b_started = 0x4D; // bool
            }
            // Parent: None
            // Fields count: 4
            namespace thinkfunc_t {
                constexpr std::ptrdiff_t m_h_fn = 0x10; // HSCRIPT
                constexpr std::ptrdiff_t m_n_context = 0x18; // CUtlStringToken
                constexpr std::ptrdiff_t m_n_next_think_tick = 0x1C; // GameTick_t
                constexpr std::ptrdiff_t m_n_last_think_tick = 0x20; // GameTick_t
            }
            // Parent: None
            // Fields count: 2
            namespace ragdoll_creation_params_t {
                constexpr std::ptrdiff_t m_v_force = 0x0; // Vector
                constexpr std::ptrdiff_t m_n_force_bone = 0xC; // int32
            }
            // Parent: None
            // Fields count: 6
            namespace hudtextparms_t {
                constexpr std::ptrdiff_t color1 = 0x0; // Color
                constexpr std::ptrdiff_t color2 = 0x4; // Color
                constexpr std::ptrdiff_t effect = 0x8; // uint8
                constexpr std::ptrdiff_t channel = 0x9; // uint8
                constexpr std::ptrdiff_t x = 0xC; // float32
                constexpr std::ptrdiff_t y = 0x10; // float32
            }
            // Parent: None
            // Fields count: 2
            namespace c_simple_sim_timer {
                constexpr std::ptrdiff_t m_next = 0x0; // GameTime_t
                constexpr std::ptrdiff_t m_n_world_group_id = 0x4; // WorldGroupId_t
            }
            // Parent: c_simple_sim_timer
            // Fields count: 1
            namespace c_sim_timer {
                constexpr std::ptrdiff_t m_interval = 0x8; // float32
            }
            // Parent: c_simple_sim_timer
            // Fields count: 2
            namespace c_rand_sim_timer {
                constexpr std::ptrdiff_t m_min_interval = 0x8; // float32
                constexpr std::ptrdiff_t m_max_interval = 0xC; // float32
            }
            // Parent: c_simple_sim_timer
            // Fields count: 1
            namespace c_stopwatch_base {
                constexpr std::ptrdiff_t m_f_is_running = 0x8; // bool
            }
            // Parent: c_stopwatch_base
            // Fields count: 0
            namespace c_simple_stopwatch {
            }
            // Parent: c_stopwatch_base
            // Fields count: 1
            namespace c_stopwatch {
                constexpr std::ptrdiff_t m_interval = 0xC; // float32
            }
            // Parent: c_stopwatch_base
            // Fields count: 2
            namespace c_rand_stopwatch {
                constexpr std::ptrdiff_t m_min_interval = 0xC; // float32
                constexpr std::ptrdiff_t m_max_interval = 0x10; // float32
            }
            // Parent: c_game_rules
            // Fields count: 1
            namespace c_singleplay_rules {
                constexpr std::ptrdiff_t m_b_single_player_game_ending = 0x8C; // bool
            }
            // Parent: c_base_entity
            // Fields count: 9
            //
            // Metadata:
            // NetworkVarNames: m_iszStackName (string_t)
            // NetworkVarNames: m_iszOperatorName (string_t)
            // NetworkVarNames: m_iszOpvarName (string_t)
            // NetworkVarNames: m_iOpvarIndex (int)
            // NetworkVarNames: m_bUseAutoCompare (bool)
            namespace c_sound_opvar_set_point_base {
                constexpr std::ptrdiff_t m_b_disabled = 0x7A8; // bool
                constexpr std::ptrdiff_t m_h_source = 0x7AC; // CEntityHandle
                constexpr std::ptrdiff_t m_isz_source_entity_name = 0x7B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_v_last_position = 0x810; // Vector
                constexpr std::ptrdiff_t m_isz_stack_name = 0x820; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_isz_operator_name = 0x828; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_isz_opvar_name = 0x830; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_i_opvar_index = 0x838; // int32
                constexpr std::ptrdiff_t m_b_use_auto_compare = 0x83C; // bool
            }
            // Parent: c_sound_opvar_set_point_base
            // Fields count: 23
            namespace c_sound_opvar_set_point_entity {
                constexpr std::ptrdiff_t m_on_enter = 0x840; // CEntityIOOutput
                constexpr std::ptrdiff_t m_on_exit = 0x868; // CEntityIOOutput
                constexpr std::ptrdiff_t m_b_auto_disable = 0x890; // bool
                constexpr std::ptrdiff_t m_fl_distance_min = 0x8D4; // float32
                constexpr std::ptrdiff_t m_fl_distance_max = 0x8D8; // float32
                constexpr std::ptrdiff_t m_fl_distance_map_min = 0x8DC; // float32
                constexpr std::ptrdiff_t m_fl_distance_map_max = 0x8E0; // float32
                constexpr std::ptrdiff_t m_fl_occlusion_radius = 0x8E4; // float32
                constexpr std::ptrdiff_t m_fl_occlusion_min = 0x8E8; // float32
                constexpr std::ptrdiff_t m_fl_occlusion_max = 0x8EC; // float32
                constexpr std::ptrdiff_t m_fl_val_set_on_disable = 0x8F0; // float32
                constexpr std::ptrdiff_t m_b_set_value_on_disable = 0x8F4; // bool
                constexpr std::ptrdiff_t m_n_simulation_mode = 0x8F8; // int32
                constexpr std::ptrdiff_t m_n_visibility_samples = 0x8FC; // int32
                constexpr std::ptrdiff_t m_v_dynamic_proxy_point = 0x900; // Vector
                constexpr std::ptrdiff_t m_fl_dynamic_maximum_occlusion = 0x90C; // float32
                constexpr std::ptrdiff_t m_h_dynamic_entity = 0x910; // CEntityHandle
                constexpr std::ptrdiff_t m_isz_dynamic_entity_name = 0x918; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_fl_pathing_distance_norm_factor = 0x920; // float32
                constexpr std::ptrdiff_t m_v_pathing_source_pos = 0x924; // Vector
                constexpr std::ptrdiff_t m_v_pathing_listener_pos = 0x930; // Vector
                constexpr std::ptrdiff_t m_v_pathing_direction = 0x93C; // Vector
                constexpr std::ptrdiff_t m_n_pathing_source_index = 0x948; // int32
            }
            // Parent: c_sound_opvar_set_point_entity
            // Fields count: 9
            namespace c_sound_opvar_set_aabb_entity {
                constexpr std::ptrdiff_t m_v_distance_inner_mins = 0x94C; // Vector
                constexpr std::ptrdiff_t m_v_distance_inner_maxs = 0x958; // Vector
                constexpr std::ptrdiff_t m_v_distance_outer_mins = 0x964; // Vector
                constexpr std::ptrdiff_t m_v_distance_outer_maxs = 0x970; // Vector
                constexpr std::ptrdiff_t m_n_aabb_direction = 0x97C; // int32
                constexpr std::ptrdiff_t m_v_inner_mins = 0x980; // Vector
                constexpr std::ptrdiff_t m_v_inner_maxs = 0x98C; // Vector
                constexpr std::ptrdiff_t m_v_outer_mins = 0x998; // Vector
                constexpr std::ptrdiff_t m_v_outer_maxs = 0x9A4; // Vector
            }
            // Parent: c_sound_opvar_set_aabb_entity
            // Fields count: 0
            namespace c_sound_opvar_set_obb_entity {
            }
            // Parent: c_sound_opvar_set_point_entity
            // Fields count: 3
            namespace c_sound_opvar_set_path_corner_entity {
                constexpr std::ptrdiff_t m_fl_dist_min_sqr = 0x968; // float32
                constexpr std::ptrdiff_t m_fl_dist_max_sqr = 0x96C; // float32
                constexpr std::ptrdiff_t m_isz_path_corner_entity_name = 0x970; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 3
            namespace sound_opvar_trace_result_t {
                constexpr std::ptrdiff_t v_pos = 0x0; // Vector
                constexpr std::ptrdiff_t b_did_hit = 0xC; // bool
                constexpr std::ptrdiff_t fl_dist_sqr_to_center = 0x10; // float32
            }
            // Parent: c_sound_opvar_set_point_entity
            // Fields count: 4
            namespace c_sound_opvar_set_auto_room_entity {
                constexpr std::ptrdiff_t m_trace_results = 0x950; // CUtlVector< SoundOpvarTraceResult_t >
                constexpr std::ptrdiff_t m_fl_size = 0x980; // float32
                constexpr std::ptrdiff_t m_fl_height_tolerance = 0x984; // float32
                constexpr std::ptrdiff_t m_fl_size_sqr = 0x988; // float32
            }
            // Parent: c_sound_opvar_set_point_base
            // Fields count: 8
            namespace c_sound_opvar_set_obb_wind_entity {
                constexpr std::ptrdiff_t m_v_mins = 0x840; // Vector
                constexpr std::ptrdiff_t m_v_maxs = 0x84C; // Vector
                constexpr std::ptrdiff_t m_v_distance_mins = 0x858; // Vector
                constexpr std::ptrdiff_t m_v_distance_maxs = 0x864; // Vector
                constexpr std::ptrdiff_t m_fl_wind_min = 0x870; // float32
                constexpr std::ptrdiff_t m_fl_wind_max = 0x874; // float32
                constexpr std::ptrdiff_t m_fl_wind_map_min = 0x878; // float32
                constexpr std::ptrdiff_t m_fl_wind_map_max = 0x87C; // float32
            }
            // Parent: None
            // Fields count: 18
            namespace c_take_damage_info {
                constexpr std::ptrdiff_t m_vec_damage_force = 0x8; // Vector
                constexpr std::ptrdiff_t m_vec_damage_position = 0x14; // Vector
                constexpr std::ptrdiff_t m_vec_reported_position = 0x20; // Vector
                constexpr std::ptrdiff_t m_vec_damage_direction = 0x2C; // Vector
                constexpr std::ptrdiff_t m_h_inflictor = 0x38; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_h_attacker = 0x3C; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_h_ability = 0x40; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_fl_damage = 0x44; // float32
                constexpr std::ptrdiff_t m_bits_damage_type = 0x48; // int32
                constexpr std::ptrdiff_t m_i_damage_custom = 0x4C; // int32
                constexpr std::ptrdiff_t m_i_ammo_type = 0x50; // AmmoIndex_t
                constexpr std::ptrdiff_t m_fl_original_damage = 0x60; // float32
                constexpr std::ptrdiff_t m_b_should_bleed = 0x64; // bool
                constexpr std::ptrdiff_t m_b_should_spark = 0x65; // bool
                constexpr std::ptrdiff_t m_n_damage_flags = 0x70; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_n_num_objects_penetrated = 0x74; // int32
                constexpr std::ptrdiff_t m_h_script_instance = 0x78; // HSCRIPT
                constexpr std::ptrdiff_t m_b_in_take_damage_flow = 0x94; // bool
            }
            // Parent: None
            // Fields count: 2
            namespace c_take_damage_result {
                constexpr std::ptrdiff_t m_n_health_lost = 0x0; // int32
                constexpr std::ptrdiff_t m_n_damage_taken = 0x4; // int32
            }
            // Parent: None
            // Fields count: 4
            namespace summary_take_damage_info_t {
                constexpr std::ptrdiff_t n_summarised_count = 0x0; // int32
                constexpr std::ptrdiff_t info = 0x8; // CTakeDamageInfo
                constexpr std::ptrdiff_t result = 0xA0; // CTakeDamageResult
                constexpr std::ptrdiff_t h_target = 0xA8; // CHandle< CBaseEntity >
            }
            // Parent: None
            // Fields count: 1
            namespace c_take_damage_summary_scope_guard {
                constexpr std::ptrdiff_t m_vec_summaries = 0x8; // CUtlVector< SummaryTakeDamageInfo_t* >
            }
            // Parent: c_multiplay_rules
            // Fields count: 0
            namespace c_teamplay_rules {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
            namespace c_attribute_list {
                constexpr std::ptrdiff_t m_attributes = 0x8; // CUtlVectorEmbeddedNetworkVar< CEconItemAttribute >
                constexpr std::ptrdiff_t m_p_manager = 0x58; // CAttributeManager*
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iAttributeDefinitionIndex (attrib_definition_index_t)
            // NetworkVarNames: m_flValue (float)
            // NetworkVarNames: m_flInitialValue (float)
            // NetworkVarNames: m_nRefundableCurrency (int)
            // NetworkVarNames: m_bSetBonus (bool)
            namespace c_econ_item_attribute {
                constexpr std::ptrdiff_t m_i_attribute_definition_index = 0x30; // uint16
                constexpr std::ptrdiff_t m_fl_value = 0x34; // float32
                constexpr std::ptrdiff_t m_fl_initial_value = 0x38; // float32
                constexpr std::ptrdiff_t m_n_refundable_currency = 0x3C; // int32
                constexpr std::ptrdiff_t m_b_set_bonus = 0x40; // bool
            }
            // Parent: None
            // Fields count: 0
            namespace i_econ_item_interface {
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iReapplyProvisionParity (int)
            // NetworkVarNames: m_hOuter (EHANDLE)
            // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
            namespace c_attribute_manager {
                constexpr std::ptrdiff_t m_providers = 0x8; // CUtlVector< CHandle< CBaseEntity > >
                constexpr std::ptrdiff_t m_i_reapply_provision_parity = 0x20; // int32
                constexpr std::ptrdiff_t m_h_outer = 0x24; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_b_prevent_loopback = 0x28; // bool
                constexpr std::ptrdiff_t m_provider_type = 0x2C; // attributeprovidertypes_t
                constexpr std::ptrdiff_t m_cached_results = 0x30; // CUtlVector< CAttributeManager::cached_attribute_float_t >
            }
            // Parent: None
            // Fields count: 3
            namespace c_attribute_manager_cached_attribute_float_t {
                constexpr std::ptrdiff_t fl_in = 0x0; // float32
                constexpr std::ptrdiff_t i_attrib_hook = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t fl_out = 0x10; // float32
            }
            // Parent: c_attribute_manager
            // Fields count: 1
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_Item (CEconItemView)
            namespace c_attribute_container {
                constexpr std::ptrdiff_t m_item = 0x50; // CEconItemView
            }
            // Parent: None
            // Fields count: 0
            namespace i_has_attributes {
            }
            // Parent: ammo_type_info_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace game_ammo_type_info_t {
                constexpr std::ptrdiff_t m_n_buy_size = 0x34; // int32
                constexpr std::ptrdiff_t m_n_cost = 0x38; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSpotted (bool)
            // NetworkVarNames: m_bSpottedByMask (uint32)
            namespace entity_spotted_state_t {
                constexpr std::ptrdiff_t m_b_spotted = 0x8; // bool
                constexpr std::ptrdiff_t m_b_spotted_by_mask = 0xC; // uint32[2]
            }
            // Parent: c_server_only_point_entity
            // Fields count: 3
            namespace spawn_point {
                constexpr std::ptrdiff_t m_i_priority = 0x7A8; // int32
                constexpr std::ptrdiff_t m_b_enabled = 0x7AC; // bool
                constexpr std::ptrdiff_t m_n_type = 0x7B0; // int32
            }
            // Parent: spawn_point
            // Fields count: 9
            namespace spawn_point_coop_enemy {
                constexpr std::ptrdiff_t m_sz_weapons_to_give = 0x7B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sz_player_model_to_use = 0x7C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_n_armor_to_spawn_with = 0x7C8; // int32
                constexpr std::ptrdiff_t m_n_default_behavior = 0x7CC; // SpawnPointCoopEnemy::BotDefaultBehavior_t
                constexpr std::ptrdiff_t m_n_bot_difficulty = 0x7D0; // int32
                constexpr std::ptrdiff_t m_b_is_agressive = 0x7D4; // bool
                constexpr std::ptrdiff_t m_b_start_asleep = 0x7D5; // bool
                constexpr std::ptrdiff_t m_fl_hide_radius = 0x7D8; // float32
                constexpr std::ptrdiff_t m_sz_behavior_tree_file = 0x7E8; // CUtlSymbolLarge
            }
            // Parent: c_game_rules_proxy
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_pGameRules (CCSGameRules*)
            namespace ccs_game_rules_proxy {
                constexpr std::ptrdiff_t m_p_game_rules = 0x7A8; // CCSGameRules*
            }
            // Parent: c_teamplay_rules
            // Fields count: 215
            //
            // Metadata:
            // NetworkVarNames: m_bFreezePeriod (bool)
            // NetworkVarNames: m_bWarmupPeriod (bool)
            // NetworkVarNames: m_fWarmupPeriodEnd (GameTime_t)
            // NetworkVarNames: m_fWarmupPeriodStart (GameTime_t)
            // NetworkVarNames: m_nTotalPausedTicks (int)
            // NetworkVarNames: m_nPauseStartTick (int)
            // NetworkVarNames: m_bServerPaused (bool)
            // NetworkVarNames: m_bGamePaused (bool)
            // NetworkVarNames: m_bTerroristTimeOutActive (bool)
            // NetworkVarNames: m_bCTTimeOutActive (bool)
            // NetworkVarNames: m_flTerroristTimeOutRemaining (float)
            // NetworkVarNames: m_flCTTimeOutRemaining (float)
            // NetworkVarNames: m_nTerroristTimeOuts (int)
            // NetworkVarNames: m_nCTTimeOuts (int)
            // NetworkVarNames: m_bTechnicalTimeOut (bool)
            // NetworkVarNames: m_bMatchWaitingForResume (bool)
            // NetworkVarNames: m_iRoundTime (int)
            // NetworkVarNames: m_fMatchStartTime (float)
            // NetworkVarNames: m_fRoundStartTime (GameTime_t)
            // NetworkVarNames: m_flRestartRoundTime (GameTime_t)
            // NetworkVarNames: m_bGameRestart (bool)
            // NetworkVarNames: m_flGameStartTime (float)
            // NetworkVarNames: m_timeUntilNextPhaseStarts (float)
            // NetworkVarNames: m_gamePhase (int)
            // NetworkVarNames: m_totalRoundsPlayed (int)
            // NetworkVarNames: m_nRoundsPlayedThisPhase (int)
            // NetworkVarNames: m_nOvertimePlaying (int)
            // NetworkVarNames: m_iHostagesRemaining (int)
            // NetworkVarNames: m_bAnyHostageReached (bool)
            // NetworkVarNames: m_bMapHasBombTarget (bool)
            // NetworkVarNames: m_bMapHasRescueZone (bool)
            // NetworkVarNames: m_bMapHasBuyZone (bool)
            // NetworkVarNames: m_bIsQueuedMatchmaking (bool)
            // NetworkVarNames: m_nQueuedMatchmakingMode (int)
            // NetworkVarNames: m_bIsValveDS (bool)
            // NetworkVarNames: m_bLogoMap (bool)
            // NetworkVarNames: m_bPlayAllStepSoundsOnServer (bool)
            // NetworkVarNames: m_iSpectatorSlotCount (int)
            // NetworkVarNames: m_MatchDevice (int)
            // NetworkVarNames: m_bHasMatchStarted (bool)
            // NetworkVarNames: m_nNextMapInMapgroup (int)
            // NetworkVarNames: m_szTournamentEventName (char)
            // NetworkVarNames: m_szTournamentEventStage (char)
            // NetworkVarNames: m_szMatchStatTxt (char)
            // NetworkVarNames: m_szTournamentPredictionsTxt (char)
            // NetworkVarNames: m_nTournamentPredictionsPct (int)
            // NetworkVarNames: m_flCMMItemDropRevealStartTime (GameTime_t)
            // NetworkVarNames: m_flCMMItemDropRevealEndTime (GameTime_t)
            // NetworkVarNames: m_bIsDroppingItems (bool)
            // NetworkVarNames: m_bIsQuestEligible (bool)
            // NetworkVarNames: m_bIsHltvActive (bool)
            // NetworkVarNames: m_nGuardianModeWaveNumber (int)
            // NetworkVarNames: m_nGuardianModeSpecialKillsRemaining (int)
            // NetworkVarNames: m_nGuardianModeSpecialWeaponNeeded (int)
            // NetworkVarNames: m_numGlobalGiftsGiven (uint32)
            // NetworkVarNames: m_numGlobalGifters (uint32)
            // NetworkVarNames: m_numGlobalGiftsPeriodSeconds (uint32)
            // NetworkVarNames: m_arrFeaturedGiftersAccounts (uint32)
            // NetworkVarNames: m_arrFeaturedGiftersGifts (uint32)
            // NetworkVarNames: m_arrProhibitedItemIndices (uint16)
            // NetworkVarNames: m_arrTournamentActiveCasterAccounts (uint32)
            // NetworkVarNames: m_numBestOfMaps (int)
            // NetworkVarNames: m_nHalloweenMaskListSeed (int)
            // NetworkVarNames: m_bBombDropped (bool)
            // NetworkVarNames: m_bBombPlanted (bool)
            // NetworkVarNames: m_iRoundWinStatus (int)
            // NetworkVarNames: m_eRoundWinReason (int)
            // NetworkVarNames: m_bTCantBuy (bool)
            // NetworkVarNames: m_bCTCantBuy (bool)
            // NetworkVarNames: m_flGuardianBuyUntilTime (GameTime_t)
            // NetworkVarNames: m_iMatchStats_RoundResults (int)
            // NetworkVarNames: m_iMatchStats_PlayersAlive_CT (int)
            // NetworkVarNames: m_iMatchStats_PlayersAlive_T (int)
            // NetworkVarNames: m_TeamRespawnWaveTimes (float)
            // NetworkVarNames: m_flNextRespawnWave (GameTime_t)
            // NetworkVarNames: m_nServerQuestID (int)
            // NetworkVarNames: m_vMinimapMins (Vector)
            // NetworkVarNames: m_vMinimapMaxs (Vector)
            // NetworkVarNames: m_MinimapVerticalSectionHeights (float)
            // NetworkVarNames: m_nEndMatchMapGroupVoteTypes (int)
            // NetworkVarNames: m_nEndMatchMapGroupVoteOptions (int)
            // NetworkVarNames: m_nEndMatchMapVoteWinner (int)
            // NetworkVarNames: m_iNumConsecutiveCTLoses (int)
            // NetworkVarNames: m_iNumConsecutiveTerroristLoses (int)
            // NetworkVarNames: m_nMatchAbortedEarlyReason (int)
            // NetworkVarNames: m_pGameModeRules (CCSGameModeRules *)
            // NetworkVarNames: m_RetakeRules (CRetakeGameRules)
            // NetworkVarNames: m_nMatchEndCount (uint8)
            // NetworkVarNames: m_nTTeamIntroVariant (int)
            // NetworkVarNames: m_nCTTeamIntroVariant (int)
            // NetworkVarNames: m_bTeamIntroPeriod (bool)
            // NetworkVarNames: m_iRoundEndWinnerTeam (int)
            // NetworkVarNames: m_eRoundEndReason (int)
            // NetworkVarNames: m_bRoundEndShowTimerDefend (bool)
            // NetworkVarNames: m_iRoundEndTimerTime (int)
            // NetworkVarNames: m_sRoundEndFunFactToken (CUtlString)
            // NetworkVarNames: m_iRoundEndFunFactPlayerSlot (CPlayerSlot)
            // NetworkVarNames: m_iRoundEndFunFactData1 (int)
            // NetworkVarNames: m_iRoundEndFunFactData2 (int)
            // NetworkVarNames: m_iRoundEndFunFactData3 (int)
            // NetworkVarNames: m_sRoundEndMessage (CUtlString)
            // NetworkVarNames: m_iRoundEndPlayerCount (int)
            // NetworkVarNames: m_bRoundEndNoMusic (bool)
            // NetworkVarNames: m_iRoundEndLegacy (int)
            // NetworkVarNames: m_nRoundEndCount (uint8)
            // NetworkVarNames: m_iRoundStartRoundNumber (int)
            // NetworkVarNames: m_nRoundStartCount (uint8)
            namespace ccs_game_rules {
                constexpr std::ptrdiff_t m_p_chain_entity = 0x98; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_coop_mission_manager = 0xC0; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_b_freeze_period = 0xC4; // bool
                constexpr std::ptrdiff_t m_b_warmup_period = 0xC5; // bool
                constexpr std::ptrdiff_t m_f_warmup_period_end = 0xC8; // GameTime_t
                constexpr std::ptrdiff_t m_f_warmup_period_start = 0xCC; // GameTime_t
                constexpr std::ptrdiff_t m_n_total_paused_ticks = 0xD0; // int32
                constexpr std::ptrdiff_t m_n_pause_start_tick = 0xD4; // int32
                constexpr std::ptrdiff_t m_b_server_paused = 0xD8; // bool
                constexpr std::ptrdiff_t m_b_game_paused = 0xD9; // bool
                constexpr std::ptrdiff_t m_b_terrorist_time_out_active = 0xDA; // bool
                constexpr std::ptrdiff_t m_b_ct_time_out_active = 0xDB; // bool
                constexpr std::ptrdiff_t m_fl_terrorist_time_out_remaining = 0xDC; // float32
                constexpr std::ptrdiff_t m_fl_ct_time_out_remaining = 0xE0; // float32
                constexpr std::ptrdiff_t m_n_terrorist_time_outs = 0xE4; // int32
                constexpr std::ptrdiff_t m_n_ct_time_outs = 0xE8; // int32
                constexpr std::ptrdiff_t m_b_technical_time_out = 0xEC; // bool
                constexpr std::ptrdiff_t m_b_match_waiting_for_resume = 0xED; // bool
                constexpr std::ptrdiff_t m_i_round_time = 0xF0; // int32
                constexpr std::ptrdiff_t m_f_match_start_time = 0xF4; // float32
                constexpr std::ptrdiff_t m_f_round_start_time = 0xF8; // GameTime_t
                constexpr std::ptrdiff_t m_fl_restart_round_time = 0xFC; // GameTime_t
                constexpr std::ptrdiff_t m_b_game_restart = 0x100; // bool
                constexpr std::ptrdiff_t m_fl_game_start_time = 0x104; // float32
                constexpr std::ptrdiff_t m_time_until_next_phase_starts = 0x108; // float32
                constexpr std::ptrdiff_t m_game_phase = 0x10C; // int32
                constexpr std::ptrdiff_t m_total_rounds_played = 0x110; // int32
                constexpr std::ptrdiff_t m_n_rounds_played_this_phase = 0x114; // int32
                constexpr std::ptrdiff_t m_n_overtime_playing = 0x118; // int32
                constexpr std::ptrdiff_t m_i_hostages_remaining = 0x11C; // int32
                constexpr std::ptrdiff_t m_b_any_hostage_reached = 0x120; // bool
                constexpr std::ptrdiff_t m_b_map_has_bomb_target = 0x121; // bool
                constexpr std::ptrdiff_t m_b_map_has_rescue_zone = 0x122; // bool
                constexpr std::ptrdiff_t m_b_map_has_buy_zone = 0x123; // bool
                constexpr std::ptrdiff_t m_b_is_queued_matchmaking = 0x124; // bool
                constexpr std::ptrdiff_t m_n_queued_matchmaking_mode = 0x128; // int32
                constexpr std::ptrdiff_t m_b_is_valve_ds = 0x12C; // bool
                constexpr std::ptrdiff_t m_b_logo_map = 0x12D; // bool
                constexpr std::ptrdiff_t m_b_play_all_step_sounds_on_server = 0x12E; // bool
                constexpr std::ptrdiff_t m_i_spectator_slot_count = 0x130; // int32
                constexpr std::ptrdiff_t m_match_device = 0x134; // int32
                constexpr std::ptrdiff_t m_b_has_match_started = 0x138; // bool
                constexpr std::ptrdiff_t m_n_next_map_in_mapgroup = 0x13C; // int32
                constexpr std::ptrdiff_t m_sz_tournament_event_name = 0x140; // char[512]
                constexpr std::ptrdiff_t m_sz_tournament_event_stage = 0x340; // char[512]
                constexpr std::ptrdiff_t m_sz_match_stat_txt = 0x540; // char[512]
                constexpr std::ptrdiff_t m_sz_tournament_predictions_txt = 0x740; // char[512]
                constexpr std::ptrdiff_t m_n_tournament_predictions_pct = 0x940; // int32
                constexpr std::ptrdiff_t m_fl_cmm_item_drop_reveal_start_time = 0x944; // GameTime_t
                constexpr std::ptrdiff_t m_fl_cmm_item_drop_reveal_end_time = 0x948; // GameTime_t
                constexpr std::ptrdiff_t m_b_is_dropping_items = 0x94C; // bool
                constexpr std::ptrdiff_t m_b_is_quest_eligible = 0x94D; // bool
                constexpr std::ptrdiff_t m_b_is_hltv_active = 0x94E; // bool
                constexpr std::ptrdiff_t m_n_guardian_mode_wave_number = 0x950; // int32
                constexpr std::ptrdiff_t m_n_guardian_mode_special_kills_remaining = 0x954; // int32
                constexpr std::ptrdiff_t m_n_guardian_mode_special_weapon_needed = 0x958; // int32
                constexpr std::ptrdiff_t m_n_guardian_grenades_to_give_bots = 0x95C; // int32
                constexpr std::ptrdiff_t m_n_num_heavies_to_spawn = 0x960; // int32
                constexpr std::ptrdiff_t m_num_global_gifts_given = 0x964; // uint32
                constexpr std::ptrdiff_t m_num_global_gifters = 0x968; // uint32
                constexpr std::ptrdiff_t m_num_global_gifts_period_seconds = 0x96C; // uint32
                constexpr std::ptrdiff_t m_arr_featured_gifters_accounts = 0x970; // uint32[4]
                constexpr std::ptrdiff_t m_arr_featured_gifters_gifts = 0x980; // uint32[4]
                constexpr std::ptrdiff_t m_arr_prohibited_item_indices = 0x990; // uint16[100]
                constexpr std::ptrdiff_t m_arr_tournament_active_caster_accounts = 0xA58; // uint32[4]
                constexpr std::ptrdiff_t m_num_best_of_maps = 0xA68; // int32
                constexpr std::ptrdiff_t m_n_halloween_mask_list_seed = 0xA6C; // int32
                constexpr std::ptrdiff_t m_b_bomb_dropped = 0xA70; // bool
                constexpr std::ptrdiff_t m_b_bomb_planted = 0xA71; // bool
                constexpr std::ptrdiff_t m_i_round_win_status = 0xA74; // int32
                constexpr std::ptrdiff_t m_e_round_win_reason = 0xA78; // int32
                constexpr std::ptrdiff_t m_b_t_cant_buy = 0xA7C; // bool
                constexpr std::ptrdiff_t m_b_ct_cant_buy = 0xA7D; // bool
                constexpr std::ptrdiff_t m_fl_guardian_buy_until_time = 0xA80; // GameTime_t
                constexpr std::ptrdiff_t m_i_match_stats_round_results = 0xA84; // int32[30]
                constexpr std::ptrdiff_t m_i_match_stats_players_alive_ct = 0xAFC; // int32[30]
                constexpr std::ptrdiff_t m_i_match_stats_players_alive_t = 0xB74; // int32[30]
                constexpr std::ptrdiff_t m_team_respawn_wave_times = 0xBEC; // float32[32]
                constexpr std::ptrdiff_t m_fl_next_respawn_wave = 0xC6C; // GameTime_t[32]
                constexpr std::ptrdiff_t m_n_server_quest_id = 0xCEC; // int32
                constexpr std::ptrdiff_t m_v_minimap_mins = 0xCF0; // Vector
                constexpr std::ptrdiff_t m_v_minimap_maxs = 0xCFC; // Vector
                constexpr std::ptrdiff_t m_minimap_vertical_section_heights = 0xD08; // float32[8]
                constexpr std::ptrdiff_t m_b_dont_increment_coop_wave = 0xD28; // bool
                constexpr std::ptrdiff_t m_b_spawned_terror_hunt_heavy = 0xD29; // bool
                constexpr std::ptrdiff_t m_n_end_match_map_group_vote_types = 0xD2C; // int32[10]
                constexpr std::ptrdiff_t m_n_end_match_map_group_vote_options = 0xD54; // int32[10]
                constexpr std::ptrdiff_t m_n_end_match_map_vote_winner = 0xD7C; // int32
                constexpr std::ptrdiff_t m_i_num_consecutive_ct_loses = 0xD80; // int32
                constexpr std::ptrdiff_t m_i_num_consecutive_terrorist_loses = 0xD84; // int32
                constexpr std::ptrdiff_t m_b_has_hostage_been_touched = 0xDA0; // bool
                constexpr std::ptrdiff_t m_fl_intermission_start_time = 0xDA4; // GameTime_t
                constexpr std::ptrdiff_t m_fl_intermission_end_time = 0xDA8; // GameTime_t
                constexpr std::ptrdiff_t m_b_level_initialized = 0xDAC; // bool
                constexpr std::ptrdiff_t m_i_total_rounds_played = 0xDB0; // int32
                constexpr std::ptrdiff_t m_i_un_balanced_rounds = 0xDB4; // int32
                constexpr std::ptrdiff_t m_end_match_on_round_reset = 0xDB8; // bool
                constexpr std::ptrdiff_t m_end_match_on_think = 0xDB9; // bool
                constexpr std::ptrdiff_t m_i_freeze_time = 0xDBC; // int32
                constexpr std::ptrdiff_t m_i_num_terrorist = 0xDC0; // int32
                constexpr std::ptrdiff_t m_i_num_ct = 0xDC4; // int32
                constexpr std::ptrdiff_t m_i_num_spawnable_terrorist = 0xDC8; // int32
                constexpr std::ptrdiff_t m_i_num_spawnable_ct = 0xDCC; // int32
                constexpr std::ptrdiff_t m_arr_selected_hostage_spawn_indices = 0xDD0; // CUtlVector< int32 >
                constexpr std::ptrdiff_t m_n_spawn_points_random_seed = 0xDE8; // int32
                constexpr std::ptrdiff_t m_b_first_connected = 0xDEC; // bool
                constexpr std::ptrdiff_t m_b_complete_reset = 0xDED; // bool
                constexpr std::ptrdiff_t m_b_pick_new_teams_on_reset = 0xDEE; // bool
                constexpr std::ptrdiff_t m_b_scramble_teams_on_restart = 0xDEF; // bool
                constexpr std::ptrdiff_t m_b_swap_teams_on_restart = 0xDF0; // bool
                constexpr std::ptrdiff_t m_n_end_match_tied_votes = 0xDF8; // CUtlVector< int32 >
                constexpr std::ptrdiff_t m_b_need_to_ask_players_for_continue_vote = 0xE14; // bool
                constexpr std::ptrdiff_t m_num_queued_matchmaking_accounts = 0xE18; // uint32
                constexpr std::ptrdiff_t m_p_queued_matchmaking_reservation_string = 0xE20; // char*
                constexpr std::ptrdiff_t m_num_total_tournament_drops = 0xE28; // uint32
                constexpr std::ptrdiff_t m_num_spectators_count_max = 0xE2C; // uint32
                constexpr std::ptrdiff_t m_num_spectators_count_max_tv = 0xE30; // uint32
                constexpr std::ptrdiff_t m_num_spectators_count_max_lnk = 0xE34; // uint32
                constexpr std::ptrdiff_t m_b_force_team_change_silent = 0xE40; // bool
                constexpr std::ptrdiff_t m_b_loading_round_backup_data = 0xE41; // bool
                constexpr std::ptrdiff_t m_n_match_info_show_type = 0xE78; // int32
                constexpr std::ptrdiff_t m_fl_match_info_decided_time = 0xE7C; // float32
                constexpr std::ptrdiff_t m_fl_coop_respawn_and_heal_time = 0xE98; // float32
                constexpr std::ptrdiff_t m_coop_bonus_coins_found = 0xE9C; // int32
                constexpr std::ptrdiff_t m_coop_bonus_pistols_only = 0xEA0; // bool
                constexpr std::ptrdiff_t m_coop_players_in_deployment_zone = 0xEA1; // bool
                constexpr std::ptrdiff_t m_coop_mission_dead_player_respawn_enabled = 0xEA2; // bool
                constexpr std::ptrdiff_t m_team_dm_last_winning_team_number = 0xEA4; // int32
                constexpr std::ptrdiff_t m_team_dm_last_think_time = 0xEA8; // float32
                constexpr std::ptrdiff_t m_fl_team_dm_last_announcement_time = 0xEAC; // float32
                constexpr std::ptrdiff_t m_i_account_terrorist = 0xEB0; // int32
                constexpr std::ptrdiff_t m_i_account_ct = 0xEB4; // int32
                constexpr std::ptrdiff_t m_i_spawn_point_count_terrorist = 0xEB8; // int32
                constexpr std::ptrdiff_t m_i_spawn_point_count_ct = 0xEBC; // int32
                constexpr std::ptrdiff_t m_i_max_num_terrorists = 0xEC0; // int32
                constexpr std::ptrdiff_t m_i_max_num_c_ts = 0xEC4; // int32
                constexpr std::ptrdiff_t m_i_loser_bonus = 0xEC8; // int32
                constexpr std::ptrdiff_t m_i_loser_bonus_most_recent_team = 0xECC; // int32
                constexpr std::ptrdiff_t m_tm_next_periodic_think = 0xED0; // float32
                constexpr std::ptrdiff_t m_b_voice_won_match_brag_fired = 0xED4; // bool
                constexpr std::ptrdiff_t m_f_warmup_next_chat_notice_time = 0xED8; // float32
                constexpr std::ptrdiff_t m_i_hostages_rescued = 0xEE0; // int32
                constexpr std::ptrdiff_t m_i_hostages_touched = 0xEE4; // int32
                constexpr std::ptrdiff_t m_fl_next_hostage_announcement = 0xEE8; // float32
                constexpr std::ptrdiff_t m_b_no_terrorists_killed = 0xEEC; // bool
                constexpr std::ptrdiff_t m_b_no_c_ts_killed = 0xEED; // bool
                constexpr std::ptrdiff_t m_b_no_enemies_killed = 0xEEE; // bool
                constexpr std::ptrdiff_t m_b_can_donate_weapons = 0xEEF; // bool
                constexpr std::ptrdiff_t m_first_kill_time = 0xEF4; // float32
                constexpr std::ptrdiff_t m_first_blood_time = 0xEFC; // float32
                constexpr std::ptrdiff_t m_hostage_was_injured = 0xF18; // bool
                constexpr std::ptrdiff_t m_hostage_was_killed = 0xF19; // bool
                constexpr std::ptrdiff_t m_b_vote_called = 0xF28; // bool
                constexpr std::ptrdiff_t m_b_server_vote_on_reset = 0xF29; // bool
                constexpr std::ptrdiff_t m_fl_vote_check_throttle = 0xF2C; // float32
                constexpr std::ptrdiff_t m_b_buy_time_ended = 0xF30; // bool
                constexpr std::ptrdiff_t m_n_last_freeze_end_beep = 0xF34; // int32
                constexpr std::ptrdiff_t m_b_target_bombed = 0xF38; // bool
                constexpr std::ptrdiff_t m_b_bomb_defused = 0xF39; // bool
                constexpr std::ptrdiff_t m_b_map_has_bomb_zone = 0xF3A; // bool
                constexpr std::ptrdiff_t m_vec_main_ct_spawn_pos = 0xF58; // Vector
                constexpr std::ptrdiff_t m_ct_spawn_points_master_list = 0xF68; // CUtlVector< SpawnPoint* >
                constexpr std::ptrdiff_t m_terrorist_spawn_points_master_list = 0xF80; // CUtlVector< SpawnPoint* >
                constexpr std::ptrdiff_t m_b_respawning_all_respawnable_players = 0xF98; // bool
                constexpr std::ptrdiff_t m_i_next_ct_spawn_point = 0xF9C; // int32
                constexpr std::ptrdiff_t m_fl_ct_spawn_point_used_time = 0xFA0; // float32
                constexpr std::ptrdiff_t m_i_next_terrorist_spawn_point = 0xFA4; // int32
                constexpr std::ptrdiff_t m_fl_terrorist_spawn_point_used_time = 0xFA8; // float32
                constexpr std::ptrdiff_t m_ct_spawn_points = 0xFB0; // CUtlVector< SpawnPoint* >
                constexpr std::ptrdiff_t m_terrorist_spawn_points = 0xFC8; // CUtlVector< SpawnPoint* >
                constexpr std::ptrdiff_t m_b_is_unreserved_game_server = 0xFE0; // bool
                constexpr std::ptrdiff_t m_f_autobalance_display_time = 0xFE4; // float32
                constexpr std::ptrdiff_t m_b_allow_weapon_switch = 0x1250; // bool
                constexpr std::ptrdiff_t m_b_round_time_warning_triggered = 0x1251; // bool
                constexpr std::ptrdiff_t m_phase_change_announcement_time = 0x1254; // GameTime_t
                constexpr std::ptrdiff_t m_f_next_update_team_clan_names_time = 0x1258; // float32
                constexpr std::ptrdiff_t m_fl_last_think_time = 0x125C; // GameTime_t
                constexpr std::ptrdiff_t m_f_accumulated_round_off_damage = 0x1260; // float32
                constexpr std::ptrdiff_t m_n_shorthanded_bonus_last_eval_round = 0x1264; // int32
                constexpr std::ptrdiff_t m_n_match_aborted_early_reason = 0x14E0; // int32
                constexpr std::ptrdiff_t m_b_has_triggered_round_start_music = 0x14E4; // bool
                constexpr std::ptrdiff_t m_b_has_triggered_coop_spawn_reset = 0x14E5; // bool
                constexpr std::ptrdiff_t m_b_switching_teams_at_round_reset = 0x14E6; // bool
                constexpr std::ptrdiff_t m_p_game_mode_rules = 0x1500; // CCSGameModeRules*
                constexpr std::ptrdiff_t m_bt_global_blackboard = 0x1508; // KeyValues3
                constexpr std::ptrdiff_t m_h_player_resource = 0x1568; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_retake_rules = 0x1570; // CRetakeGameRules
                constexpr std::ptrdiff_t m_guardian_bot_skill_level_max = 0x1754; // int32
                constexpr std::ptrdiff_t m_guardian_bot_skill_level_min = 0x1758; // int32
                constexpr std::ptrdiff_t m_arr_team_unique_kill_weapons_match = 0x1760; // CUtlVector< int32 >[4]
                constexpr std::ptrdiff_t m_b_team_last_kill_used_unique_weapon_match = 0x17C0; // bool[4]
                constexpr std::ptrdiff_t m_n_match_end_count = 0x17E8; // uint8
                constexpr std::ptrdiff_t m_n_t_team_intro_variant = 0x17EC; // int32
                constexpr std::ptrdiff_t m_n_ct_team_intro_variant = 0x17F0; // int32
                constexpr std::ptrdiff_t m_b_team_intro_period = 0x17F4; // bool
                constexpr std::ptrdiff_t m_f_team_intro_period_end = 0x17F8; // GameTime_t
                constexpr std::ptrdiff_t m_b_played_team_intro_vo = 0x17FC; // bool
                constexpr std::ptrdiff_t m_i_round_end_winner_team = 0x1800; // int32
                constexpr std::ptrdiff_t m_e_round_end_reason = 0x1804; // int32
                constexpr std::ptrdiff_t m_b_round_end_show_timer_defend = 0x1808; // bool
                constexpr std::ptrdiff_t m_i_round_end_timer_time = 0x180C; // int32
                constexpr std::ptrdiff_t m_s_round_end_fun_fact_token = 0x1810; // CUtlString
                constexpr std::ptrdiff_t m_i_round_end_fun_fact_player_slot = 0x1818; // CPlayerSlot
                constexpr std::ptrdiff_t m_i_round_end_fun_fact_data1 = 0x181C; // int32
                constexpr std::ptrdiff_t m_i_round_end_fun_fact_data2 = 0x1820; // int32
                constexpr std::ptrdiff_t m_i_round_end_fun_fact_data3 = 0x1824; // int32
                constexpr std::ptrdiff_t m_s_round_end_message = 0x1828; // CUtlString
                constexpr std::ptrdiff_t m_i_round_end_player_count = 0x1830; // int32
                constexpr std::ptrdiff_t m_b_round_end_no_music = 0x1834; // bool
                constexpr std::ptrdiff_t m_i_round_end_legacy = 0x1838; // int32
                constexpr std::ptrdiff_t m_n_round_end_count = 0x183C; // uint8
                constexpr std::ptrdiff_t m_i_round_start_round_number = 0x1840; // int32
                constexpr std::ptrdiff_t m_n_round_start_count = 0x1844; // uint8
                constexpr std::ptrdiff_t m_fl_last_perf_sample_time = 0x5850; // float64
                constexpr std::ptrdiff_t m_b_skip_next_server_perf_sample = 0x5858; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace ccs_take_damage_info_api {
            }
            // Parent: None
            // Fields count: 1
            namespace ccs_game_mode_rules {
                constexpr std::ptrdiff_t m_p_chain_entity = 0x8; // CNetworkVarChainer
            }
            // Parent: ccs_game_mode_rules
            // Fields count: 0
            namespace ccs_game_mode_rules_noop {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace ccs_game_mode_script {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            namespace ccs_game_mode_script_con_vars {
            }
            // Parent: ccs_game_mode_rules
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_WeaponSequence (CUtlString)
            namespace ccs_game_mode_rules_arms_race {
                constexpr std::ptrdiff_t m_weapon_sequence = 0x38; // CNetworkUtlVectorBase< CUtlString >
            }
            // Parent: ccs_game_mode_script
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace ccs_arms_race_script {
                constexpr std::ptrdiff_t m_p_outer = 0xD8; // CCSGameModeRules_ArmsRace*
            }
            // Parent: ccs_game_mode_rules
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
            // NetworkVarNames: m_flDMBonusTimeLength (float)
            // NetworkVarNames: m_nDMBonusWeaponLoadoutSlot (int16)
            namespace ccs_game_mode_rules_deathmatch {
                constexpr std::ptrdiff_t m_fl_dm_bonus_start_time = 0x38; // GameTime_t
                constexpr std::ptrdiff_t m_fl_dm_bonus_time_length = 0x3C; // float32
                constexpr std::ptrdiff_t m_n_dm_bonus_weapon_loadout_slot = 0x40; // int16
            }
            // Parent: ccs_game_mode_script
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace ccs_deathmatch_script {
                constexpr std::ptrdiff_t m_p_outer = 0xD8; // CCSGameModeRules_Deathmatch*
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            namespace ccs_deathmatch_script_con_vars {
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_nMatchSeed (int)
            // NetworkVarNames: m_bBlockersPresent (bool)
            // NetworkVarNames: m_bRoundInProgress (bool)
            // NetworkVarNames: m_iFirstSecondHalfRound (int)
            // NetworkVarNames: m_iBombSite (int)
            namespace c_retake_game_rules {
                constexpr std::ptrdiff_t m_n_match_seed = 0xF8; // int32
                constexpr std::ptrdiff_t m_b_blockers_present = 0xFC; // bool
                constexpr std::ptrdiff_t m_b_round_in_progress = 0xFD; // bool
                constexpr std::ptrdiff_t m_i_first_second_half_round = 0x100; // int32
                constexpr std::ptrdiff_t m_i_bomb_site = 0x104; // int32
            }
            // Parent: None
            // Fields count: 0
            namespace quest_progress {
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // NetworkVarNames: m_iKills (int)
            // NetworkVarNames: m_iDeaths (int)
            // NetworkVarNames: m_iAssists (int)
            // NetworkVarNames: m_iDamage (int)
            // NetworkVarNames: m_iEquipmentValue (int)
            // NetworkVarNames: m_iMoneySaved (int)
            // NetworkVarNames: m_iKillReward (int)
            // NetworkVarNames: m_iLiveTime (int)
            // NetworkVarNames: m_iHeadShotKills (int)
            // NetworkVarNames: m_iObjective (int)
            // NetworkVarNames: m_iCashEarned (int)
            // NetworkVarNames: m_iUtilityDamage (int)
            // NetworkVarNames: m_iEnemiesFlashed (int)
            namespace cs_per_round_stats_t {
                constexpr std::ptrdiff_t m_i_kills = 0x30; // int32
                constexpr std::ptrdiff_t m_i_deaths = 0x34; // int32
                constexpr std::ptrdiff_t m_i_assists = 0x38; // int32
                constexpr std::ptrdiff_t m_i_damage = 0x3C; // int32
                constexpr std::ptrdiff_t m_i_equipment_value = 0x40; // int32
                constexpr std::ptrdiff_t m_i_money_saved = 0x44; // int32
                constexpr std::ptrdiff_t m_i_kill_reward = 0x48; // int32
                constexpr std::ptrdiff_t m_i_live_time = 0x4C; // int32
                constexpr std::ptrdiff_t m_i_head_shot_kills = 0x50; // int32
                constexpr std::ptrdiff_t m_i_objective = 0x54; // int32
                constexpr std::ptrdiff_t m_i_cash_earned = 0x58; // int32
                constexpr std::ptrdiff_t m_i_utility_damage = 0x5C; // int32
                constexpr std::ptrdiff_t m_i_enemies_flashed = 0x60; // int32
            }
            // Parent: cs_per_round_stats_t
            // Fields count: 21
            //
            // Metadata:
            // NetworkVarNames: m_iEnemy5Ks (int)
            // NetworkVarNames: m_iEnemy4Ks (int)
            // NetworkVarNames: m_iEnemy3Ks (int)
            // NetworkVarNames: m_iEnemyKnifeKills (int)
            // NetworkVarNames: m_iEnemyTaserKills (int)
            namespace cs_match_stats_t {
                constexpr std::ptrdiff_t m_i_enemy5_ks = 0x64; // int32
                constexpr std::ptrdiff_t m_i_enemy4_ks = 0x68; // int32
                constexpr std::ptrdiff_t m_i_enemy3_ks = 0x6C; // int32
                constexpr std::ptrdiff_t m_i_enemy_knife_kills = 0x70; // int32
                constexpr std::ptrdiff_t m_i_enemy_taser_kills = 0x74; // int32
                constexpr std::ptrdiff_t m_i_enemy2_ks = 0x78; // int32
                constexpr std::ptrdiff_t m_i_utility_count = 0x7C; // int32
                constexpr std::ptrdiff_t m_i_utility_successes = 0x80; // int32
                constexpr std::ptrdiff_t m_i_utility_enemies = 0x84; // int32
                constexpr std::ptrdiff_t m_i_flash_count = 0x88; // int32
                constexpr std::ptrdiff_t m_i_flash_successes = 0x8C; // int32
                constexpr std::ptrdiff_t m_n_health_points_removed_total = 0x90; // int32
                constexpr std::ptrdiff_t m_n_health_points_dealt_total = 0x94; // int32
                constexpr std::ptrdiff_t m_n_shots_fired_total = 0x98; // int32
                constexpr std::ptrdiff_t m_n_shots_on_target_total = 0x9C; // int32
                constexpr std::ptrdiff_t m_i1v1_count = 0xA0; // int32
                constexpr std::ptrdiff_t m_i1v1_wins = 0xA4; // int32
                constexpr std::ptrdiff_t m_i1v2_count = 0xA8; // int32
                constexpr std::ptrdiff_t m_i1v2_wins = 0xAC; // int32
                constexpr std::ptrdiff_t m_i_entry_count = 0xB0; // int32
                constexpr std::ptrdiff_t m_i_entry_wins = 0xB4; // int32
            }
            // Parent: c_base_entity
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_nVariant (int)
            // NetworkVarNames: m_nRandom (int)
            // NetworkVarNames: m_nOrdinal (int)
            // NetworkVarNames: m_sWeaponName (CUtlString)
            // NetworkVarNames: m_xuid (XUID)
            // NetworkVarNames: m_agentItem (CEconItemView)
            // NetworkVarNames: m_glovesItem (CEconItemView)
            // NetworkVarNames: m_weaponItem (CEconItemView)
            namespace ccsgo_team_preview_character_position {
                constexpr std::ptrdiff_t m_n_variant = 0x7A8; // int32
                constexpr std::ptrdiff_t m_n_random = 0x7AC; // int32
                constexpr std::ptrdiff_t m_n_ordinal = 0x7B0; // int32
                constexpr std::ptrdiff_t m_s_weapon_name = 0x7B8; // CUtlString
                constexpr std::ptrdiff_t m_xuid = 0x7C0; // uint64
                constexpr std::ptrdiff_t m_agent_item = 0x7C8; // CEconItemView
                constexpr std::ptrdiff_t m_gloves_item = 0xA40; // CEconItemView
                constexpr std::ptrdiff_t m_weapon_item = 0xCB8; // CEconItemView
            }
            // Parent: ccsgo_team_preview_character_position
            // Fields count: 0
            namespace ccsgo_team_select_character_position {
            }
            // Parent: ccsgo_team_select_character_position
            // Fields count: 0
            namespace ccsgo_team_select_terrorist_position {
            }
            // Parent: ccsgo_team_select_character_position
            // Fields count: 0
            namespace ccsgo_team_select_counter_terrorist_position {
            }
            // Parent: ccsgo_team_preview_character_position
            // Fields count: 0
            namespace ccsgo_team_intro_character_position {
            }
            // Parent: ccsgo_team_intro_character_position
            // Fields count: 0
            namespace ccsgo_team_intro_terrorist_position {
            }
            // Parent: ccsgo_team_intro_character_position
            // Fields count: 0
            namespace ccsgo_team_intro_counter_terrorist_position {
            }
            // Parent: ccsgo_team_intro_character_position
            // Fields count: 0
            namespace ccsgo_wingman_intro_character_position {
            }
            // Parent: ccsgo_wingman_intro_character_position
            // Fields count: 0
            namespace ccsgo_wingman_intro_terrorist_position {
            }
            // Parent: ccsgo_wingman_intro_character_position
            // Fields count: 0
            namespace ccsgo_wingman_intro_counter_terrorist_position {
            }
            // Parent: c_base_entity
            // Fields count: 0
            namespace ccs_minimap_boundary {
            }
            // Parent: None
            // Fields count: 0
            namespace ccsgo_player_anim_graph_state {
            }
            // Parent: c_base_entity
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_hPlayer (CHandle< CCSPlayerPawn>)
            // NetworkVarNames: m_hPingedEntity (CHandle< CBaseEntity>)
            // NetworkVarNames: m_iType (int)
            // NetworkVarNames: m_bUrgent (bool)
            // NetworkVarNames: m_szPlaceName (char)
            namespace c_player_ping {
                constexpr std::ptrdiff_t m_h_player = 0x7B0; // CHandle< CCSPlayerPawn >
                constexpr std::ptrdiff_t m_h_pinged_entity = 0x7B4; // CHandle< CBaseEntity >
                constexpr std::ptrdiff_t m_i_type = 0x7B8; // int32
                constexpr std::ptrdiff_t m_b_urgent = 0x7BC; // bool
                constexpr std::ptrdiff_t m_sz_place_name = 0x7BD; // char[18]
            }
            // Parent: c_player_pawn_component
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle< CBaseEntity>)
            namespace ccs_player_ping_services {
                constexpr std::ptrdiff_t m_fl_player_ping_tokens = 0x40; // GameTime_t[5]
                constexpr std::ptrdiff_t m_h_player_ping = 0x54; // CHandle< CBaseEntity >
            }
            // Parent: c_base_entity
            // Fields count: 10
            //
            // Metadata:
            // NetworkVarNames: m_bHostageAlive (bool)
            // NetworkVarNames: m_isHostageFollowingSomeone (bool)
            // NetworkVarNames: m_iHostageEntityIDs (CEntityIndex)
            // NetworkVarNames: m_bombsiteCenterA (Vector)
            // NetworkVarNames: m_bombsiteCenterB (Vector)
            // NetworkVarNames: m_hostageRescueX (int)
            // NetworkVarNames: m_hostageRescueY (int)
            // NetworkVarNames: m_hostageRescueZ (int)
            // NetworkVarNames: m_bEndMatchNextMapAllVoted (bool)
            namespace ccs_player_resource {
                constexpr std::ptrdiff_t m_b_hostage_alive = 0x7A8; // bool[12]
                constexpr std::ptrdiff_t m_is_hostage_following_someone = 0x7B4; // bool[12]
                constexpr std::ptrdiff_t m_i_hostage_entity_i_ds = 0x7C0; // CEntityIndex[12]
                constexpr std::ptrdiff_t m_bombsite_center_a = 0x7F0; // Vector
                constexpr std::ptrdiff_t m_bombsite_center_b = 0x7FC; // Vector
                constexpr std::ptrdiff_t m_hostage_rescue_x = 0x808; // int32[4]
                constexpr std::ptrdiff_t m_hostage_rescue_y = 0x818; // int32[4]
                constexpr std::ptrdiff_t m_hostage_rescue_z = 0x828; // int32[4]
                constexpr std::ptrdiff_t m_b_end_match_next_map_all_voted = 0x838; // bool
                constexpr std::ptrdiff_t m_found_goal_positions = 0x839; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace ccs_player_controller_api {
            }
            // Parent: c_player_pawn_component
            // Fields count: 0
            namespace c_player_view_model_services {
            }
        }
        // Module: libsoundsystem.so
        // Classes count: 50
        // Enums count: 0
        namespace libsoundsystem {
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_voice_container_base {
                constexpr std::ptrdiff_t m_curves = 0x20; // CUtlDict< CPiecewiseCurve, F( size=1 ) >
            }
            // Parent: c_voice_container_base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_voice_container_default {
            }
            // Parent: c_voice_container_base
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_voice_container_wav_file_reader {
                constexpr std::ptrdiff_t m_wav_file_path = 0x60; // CUtlString
            }
            // Parent: c_voice_container_wav_file_reader
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_voice_container_test_constant {
                constexpr std::ptrdiff_t m_fl_test_constant_param = 0x68; // bool
            }
            // Parent: c_voice_container_base
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_voice_container_test_nested_dynamic {
                constexpr std::ptrdiff_t m_sound_to_play = 0x60; // CStrongHandle< InfoForResourceTypeCVoiceContainerBase >
                constexpr std::ptrdiff_t m_fl_test_constant_param = 0x68; // float32
            }
            // Parent: c_voice_container_base
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_voice_container_decaying_sine_wave {
                constexpr std::ptrdiff_t m_fl_frequency = 0x60; // float32
                constexpr std::ptrdiff_t m_fl_decay_time = 0x64; // float32
            }
            // Parent: c_voice_container_decaying_sine_wave
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_voice_container_amped_decaying_sine_wave {
                constexpr std::ptrdiff_t m_fl_gain_amount = 0x68; // float32
            }
            // Parent: c_voice_container_base
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_voice_container_realtime_fm_sine_wave {
                constexpr std::ptrdiff_t m_fl_carrier_frequency = 0x60; // float32
                constexpr std::ptrdiff_t m_fl_modulator_frequency = 0x64; // float32
                constexpr std::ptrdiff_t m_fl_modulator_amount = 0x68; // float32
            }
            // Parent: c_voice_container_base
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_voice_container_blend {
                constexpr std::ptrdiff_t m_h_sound_one = 0x60; // CStrongHandle< InfoForResourceTypeCVoiceContainerBase >
                constexpr std::ptrdiff_t m_h_sound_two = 0x68; // CStrongHandle< InfoForResourceTypeCVoiceContainerBase >
                constexpr std::ptrdiff_t m_fl_blend_amount = 0x70; // float32
            }
            // Parent: c_voice_container_base
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_voice_container_engine_sound {
                constexpr std::ptrdiff_t m_sound_to_play = 0x60; // CStrongHandle< InfoForResourceTypeCVoiceContainerBase >
                constexpr std::ptrdiff_t m_fl_test_constant_param = 0x68; // float32
                constexpr std::ptrdiff_t m_fl_test_sound_event_bound_param = 0x6C; // float32
                constexpr std::ptrdiff_t m_fl_engine_rpm = 0x70; // float32
            }
            // Parent: c_voice_container_wav_file_reader
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_voice_container_envelope_analyzer {
                constexpr std::ptrdiff_t m_env_buffer = 0x68; // CUtlVector< float32 >
            }
            // Parent: c_voice_container_base
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_voice_container_random_sampler {
                constexpr std::ptrdiff_t m_fl_loud_amplitude = 0x60; // float32
                constexpr std::ptrdiff_t m_fl_loud_amplitude_jitter = 0x64; // float32
                constexpr std::ptrdiff_t m_fl_soft_amplitude = 0x68; // float32
                constexpr std::ptrdiff_t m_fl_soft_amplitude_jitter = 0x6C; // float32
                constexpr std::ptrdiff_t m_fl_loud_time_jitter = 0x70; // float32
                constexpr std::ptrdiff_t m_fl_soft_time_jitter = 0x74; // float32
                constexpr std::ptrdiff_t m_grain_resources = 0x78; // CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > >
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_filter_desc_t {
                constexpr std::ptrdiff_t m_n_filter_type = 0x0; // VMixFilterType_t
                constexpr std::ptrdiff_t m_n_filter_slope = 0x2; // VMixFilterSlope_t
                constexpr std::ptrdiff_t m_b_enabled = 0x3; // bool
                constexpr std::ptrdiff_t m_fldb_gain = 0x4; // float32
                constexpr std::ptrdiff_t m_fl_cutoff_freq = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_q = 0xC; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_eq8_desc_t {
                constexpr std::ptrdiff_t m_stages = 0x0; // VMixFilterDesc_t[8]
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_delay_desc_t {
                constexpr std::ptrdiff_t m_feedback_filter = 0x0; // VMixFilterDesc_t
                constexpr std::ptrdiff_t m_b_enable_filter = 0x10; // bool
                constexpr std::ptrdiff_t m_fl_delay = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_direct_gain = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_delay_gain = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_feedback_gain = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_width = 0x24; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_panner_desc_t {
                constexpr std::ptrdiff_t m_type = 0x0; // VMixPannerType_t
                constexpr std::ptrdiff_t m_fl_strength = 0x4; // float32
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_mod_delay_desc_t {
                constexpr std::ptrdiff_t m_feedback_filter = 0x0; // VMixFilterDesc_t
                constexpr std::ptrdiff_t m_b_phase_invert = 0x10; // bool
                constexpr std::ptrdiff_t m_fl_glide_time = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_delay = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_output_gain = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_feedback_gain = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_mod_rate = 0x24; // float32
                constexpr std::ptrdiff_t m_fl_mod_depth = 0x28; // float32
                constexpr std::ptrdiff_t m_b_apply_antialiasing = 0x2C; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_diffusor_desc_t {
                constexpr std::ptrdiff_t m_fl_size = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_complexity = 0x4; // float32
                constexpr std::ptrdiff_t m_fl_feedback = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_output_gain = 0xC; // float32
            }
            // Parent: None
            // Fields count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_boxverb_desc_t {
                constexpr std::ptrdiff_t m_fl_size_max = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_size_min = 0x4; // float32
                constexpr std::ptrdiff_t m_fl_complexity = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_diffusion = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_mod_depth = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_mod_rate = 0x14; // float32
                constexpr std::ptrdiff_t m_b_parallel = 0x18; // bool
                constexpr std::ptrdiff_t m_filter_type = 0x1C; // VMixFilterDesc_t
                constexpr std::ptrdiff_t m_fl_width = 0x2C; // float32
                constexpr std::ptrdiff_t m_fl_height = 0x30; // float32
                constexpr std::ptrdiff_t m_fl_depth = 0x34; // float32
                constexpr std::ptrdiff_t m_fl_feedback_scale = 0x38; // float32
                constexpr std::ptrdiff_t m_fl_feedback_width = 0x3C; // float32
                constexpr std::ptrdiff_t m_fl_feedback_height = 0x40; // float32
                constexpr std::ptrdiff_t m_fl_feedback_depth = 0x44; // float32
                constexpr std::ptrdiff_t m_fl_output_gain = 0x48; // float32
                constexpr std::ptrdiff_t m_fl_taps = 0x4C; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_freeverb_desc_t {
                constexpr std::ptrdiff_t m_fl_room_size = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_damp = 0x4; // float32
                constexpr std::ptrdiff_t m_fl_width = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_late_reflections = 0xC; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_plateverb_desc_t {
                constexpr std::ptrdiff_t m_fl_prefilter = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_input_diffusion1 = 0x4; // float32
                constexpr std::ptrdiff_t m_fl_input_diffusion2 = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_decay = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_damp = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_feedback_diffusion1 = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_feedback_diffusion2 = 0x18; // float32
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_dynamics_desc_t {
                constexpr std::ptrdiff_t m_fldb_gain = 0x0; // float32
                constexpr std::ptrdiff_t m_fldb_noise_gate_threshold = 0x4; // float32
                constexpr std::ptrdiff_t m_fldb_compression_threshold = 0x8; // float32
                constexpr std::ptrdiff_t m_fldb_limiter_threshold = 0xC; // float32
                constexpr std::ptrdiff_t m_fldb_knee_width = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_ratio = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_limiter_ratio = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_attack_time_ms = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_release_time_ms = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_rms_time_ms = 0x24; // float32
                constexpr std::ptrdiff_t m_fl_wet_mix = 0x28; // float32
                constexpr std::ptrdiff_t m_b_peak_mode = 0x2C; // bool
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_dynamics_compressor_desc_t {
                constexpr std::ptrdiff_t m_fldb_output_gain = 0x0; // float32
                constexpr std::ptrdiff_t m_fldb_compression_threshold = 0x4; // float32
                constexpr std::ptrdiff_t m_fldb_knee_width = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_compression_ratio = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_attack_time_ms = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_release_time_ms = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_rms_time_ms = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_wet_mix = 0x1C; // float32
                constexpr std::ptrdiff_t m_b_peak_mode = 0x20; // bool
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_dynamics_band_t {
                constexpr std::ptrdiff_t m_fldb_gain_input = 0x0; // float32
                constexpr std::ptrdiff_t m_fldb_gain_output = 0x4; // float32
                constexpr std::ptrdiff_t m_fldb_threshold_below = 0x8; // float32
                constexpr std::ptrdiff_t m_fldb_threshold_above = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_ratio_below = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_ratio_above = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_attack_time_ms = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_release_time_ms = 0x1C; // float32
                constexpr std::ptrdiff_t m_b_enable = 0x20; // bool
                constexpr std::ptrdiff_t m_b_solo = 0x21; // bool
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_dynamics3_band_desc_t {
                constexpr std::ptrdiff_t m_fldb_gain_output = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_rms_time_ms = 0x4; // float32
                constexpr std::ptrdiff_t m_fldb_knee_width = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_depth = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_wet_mix = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_time_scale = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_low_cutoff_freq = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_high_cutoff_freq = 0x1C; // float32
                constexpr std::ptrdiff_t m_b_peak_mode = 0x20; // bool
                constexpr std::ptrdiff_t m_band_desc = 0x24; // VMixDynamicsBand_t[3]
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_envelope_desc_t {
                constexpr std::ptrdiff_t m_fl_attack_time_ms = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_hold_time_ms = 0x4; // float32
                constexpr std::ptrdiff_t m_fl_release_time_ms = 0x8; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_pitch_shift_desc_t {
                constexpr std::ptrdiff_t m_n_grain_sample_count = 0x0; // int32
                constexpr std::ptrdiff_t m_fl_pitch_shift = 0x4; // float32
                constexpr std::ptrdiff_t m_n_quality = 0x8; // int32
                constexpr std::ptrdiff_t m_n_proc_type = 0xC; // int32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_convolution_desc_t {
                constexpr std::ptrdiff_t m_fldb_gain = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_pre_delay_ms = 0x4; // float32
                constexpr std::ptrdiff_t m_fl_wet_mix = 0x8; // float32
                constexpr std::ptrdiff_t m_fldb_low = 0xC; // float32
                constexpr std::ptrdiff_t m_fldb_mid = 0x10; // float32
                constexpr std::ptrdiff_t m_fldb_high = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_low_cutoff_freq = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_high_cutoff_freq = 0x1C; // float32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_vocoder_desc_t {
                constexpr std::ptrdiff_t m_n_band_count = 0x0; // int32
                constexpr std::ptrdiff_t m_fl_bandwidth = 0x4; // float32
                constexpr std::ptrdiff_t m_fld_b_mod_gain = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_freq_range_start = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_freq_range_end = 0x10; // float32
                constexpr std::ptrdiff_t m_fld_b_unvoiced_gain = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_attack_time_ms = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_release_time_ms = 0x1C; // float32
                constexpr std::ptrdiff_t m_n_debug_band = 0x20; // int32
                constexpr std::ptrdiff_t m_b_peak_mode = 0x24; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_shaper_desc_t {
                constexpr std::ptrdiff_t m_n_shape = 0x0; // int32
                constexpr std::ptrdiff_t m_fldb_drive = 0x4; // float32
                constexpr std::ptrdiff_t m_fldb_output_gain = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_wet_mix = 0xC; // float32
                constexpr std::ptrdiff_t m_n_oversample_factor = 0x10; // int32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_utility_desc_t {
                constexpr std::ptrdiff_t m_n_op = 0x0; // VMixChannelOperation_t
                constexpr std::ptrdiff_t m_fl_input_pan = 0x4; // float32
                constexpr std::ptrdiff_t m_fl_output_balance = 0x8; // float32
                constexpr std::ptrdiff_t m_fldb_output_gain = 0xC; // float32
                constexpr std::ptrdiff_t m_b_bass_mono = 0x10; // bool
                constexpr std::ptrdiff_t m_fl_bass_freq = 0x14; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_auto_filter_desc_t {
                constexpr std::ptrdiff_t m_fl_envelope_amount = 0x0; // float32
                constexpr std::ptrdiff_t m_fl_attack_time_ms = 0x4; // float32
                constexpr std::ptrdiff_t m_fl_release_time_ms = 0x8; // float32
                constexpr std::ptrdiff_t m_filter = 0xC; // VMixFilterDesc_t
                constexpr std::ptrdiff_t m_fl_lfo_amount = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_lfo_rate = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_phase = 0x24; // float32
                constexpr std::ptrdiff_t m_n_lfo_shape = 0x28; // VMixLFOShape_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_osc_desc_t {
                constexpr std::ptrdiff_t osc_type = 0x0; // VMixLFOShape_t
                constexpr std::ptrdiff_t m_freq = 0x4; // float32
                constexpr std::ptrdiff_t m_fl_phase = 0x8; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_effect_chain_desc_t {
                constexpr std::ptrdiff_t m_fl_crossfade_time = 0x0; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace v_mix_subgraph_switch_desc_t {
                constexpr std::ptrdiff_t m_interpolation_mode = 0x0; // VMixSubgraphSwitchInterpolationType_t
                constexpr std::ptrdiff_t m_b_only_tails_on_fade_out = 0x4; // bool
                constexpr std::ptrdiff_t m_fl_interpolation_time = 0x8; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace c_sos_group_action_schema {
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_action_type = 0x10; // ActionType_t
                constexpr std::ptrdiff_t m_action_instance_type = 0x14; // ActionType_t
            }
            // Parent: c_sos_group_action_schema
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_sos_group_action_limit_schema {
                constexpr std::ptrdiff_t m_n_max_count = 0x18; // int32
                constexpr std::ptrdiff_t m_n_stop_type = 0x1C; // SosActionStopType_t
                constexpr std::ptrdiff_t m_n_sort_type = 0x20; // SosActionSortType_t
            }
            // Parent: c_sos_group_action_schema
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_sos_group_action_time_limit_schema {
                constexpr std::ptrdiff_t m_fl_max_duration = 0x18; // float32
            }
            // Parent: c_sos_group_action_schema
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_sos_group_action_time_block_limit_schema {
                constexpr std::ptrdiff_t m_n_max_count = 0x18; // int32
                constexpr std::ptrdiff_t m_fl_max_duration = 0x1C; // float32
            }
            // Parent: c_sos_group_action_schema
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_sos_group_action_set_soundevent_parameter_schema {
                constexpr std::ptrdiff_t m_n_max_count = 0x18; // int32
                constexpr std::ptrdiff_t m_fl_min_value = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_max_value = 0x20; // float32
                constexpr std::ptrdiff_t m_opvar_name = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_n_sort_type = 0x30; // SosActionSortType_t
            }
            // Parent: c_sos_group_action_schema
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_sos_group_action_soundevent_cluster_schema {
                constexpr std::ptrdiff_t m_n_min_nearby = 0x18; // int32
                constexpr std::ptrdiff_t m_fl_cluster_epsilon = 0x1C; // float32
                constexpr std::ptrdiff_t m_should_play_opvar = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_should_play_cluster_child = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_cluster_size_opvar = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_group_bounding_box_mins_opvar = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_group_bounding_box_maxs_opvar = 0x40; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_sos_group_branch_pattern {
                constexpr std::ptrdiff_t m_b_match_event_name = 0x8; // bool
                constexpr std::ptrdiff_t m_b_match_event_sub_string = 0x9; // bool
                constexpr std::ptrdiff_t m_b_match_ent_index = 0xA; // bool
                constexpr std::ptrdiff_t m_b_match_opvar = 0xB; // bool
            }
            // Parent: c_sos_group_branch_pattern
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_sos_group_match_pattern {
                constexpr std::ptrdiff_t m_match_sound_event_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_match_sound_event_sub_string = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_fl_ent_index = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_opvar = 0x24; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace c_sos_sound_event_group_schema {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_n_type = 0x8; // SosGroupType_t
                constexpr std::ptrdiff_t m_b_is_blocking = 0xC; // bool
                constexpr std::ptrdiff_t m_n_block_max_count = 0x10; // int32
                constexpr std::ptrdiff_t m_b_invert_match = 0x14; // bool
                constexpr std::ptrdiff_t m_match_pattern = 0x18; // CSosGroupMatchPattern
                constexpr std::ptrdiff_t m_branch_pattern = 0x40; // CSosGroupBranchPattern
                constexpr std::ptrdiff_t m_v_actions = 0xB0; // CSosGroupActionSchema*[4]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_sos_sound_event_group_list_schema {
                constexpr std::ptrdiff_t m_group_list = 0x0; // CUtlVector< CSosSoundEventGroupSchema >
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace sos_edit_item_info_t {
                constexpr std::ptrdiff_t item_type = 0x0; // SosEditItemType_t
                constexpr std::ptrdiff_t item_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t item_type_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t item_kv_string = 0x20; // CUtlString
                constexpr std::ptrdiff_t item_pos = 0x28; // Vector2D
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace selected_edit_item_info_t {
                constexpr std::ptrdiff_t m_edit_items = 0x0; // CUtlVector< SosEditItemInfo_t >
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_sound_event_meta_data {
                constexpr std::ptrdiff_t m_sound_event_v_mix = 0x0; // CStrongHandle< InfoForResourceTypeCVMixListResource >
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace cdsp_mixgroup_modifier {
                constexpr std::ptrdiff_t m_mixgroup = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_fl_modifier = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_modifier_min = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_source_modifier = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_source_modifier_min = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_listener_reverb_modifier_when_source_reverb_is_active = 0x18; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_dsp_preset_modifier_list {
                constexpr std::ptrdiff_t m_dsp_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_modifiers = 0x8; // CUtlVector< CDSPMixgroupModifier >
            }
        }
        // Module: libvphysics2.so
        // Classes count: 88
        // Enums count: 0
        namespace libvphysics2 {
            // Parent: None
            // Fields count: 35
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_fe_jiggle_bone {
                constexpr std::ptrdiff_t m_n_flags = 0x0; // uint32
                constexpr std::ptrdiff_t m_fl_length = 0x4; // float32
                constexpr std::ptrdiff_t m_fl_tip_mass = 0x8; // float32
                constexpr std::ptrdiff_t m_fl_yaw_stiffness = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_yaw_damping = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_pitch_stiffness = 0x14; // float32
                constexpr std::ptrdiff_t m_fl_pitch_damping = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_along_stiffness = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_along_damping = 0x20; // float32
                constexpr std::ptrdiff_t m_fl_angle_limit = 0x24; // float32
                constexpr std::ptrdiff_t m_fl_min_yaw = 0x28; // float32
                constexpr std::ptrdiff_t m_fl_max_yaw = 0x2C; // float32
                constexpr std::ptrdiff_t m_fl_yaw_friction = 0x30; // float32
                constexpr std::ptrdiff_t m_fl_yaw_bounce = 0x34; // float32
                constexpr std::ptrdiff_t m_fl_min_pitch = 0x38; // float32
                constexpr std::ptrdiff_t m_fl_max_pitch = 0x3C; // float32
                constexpr std::ptrdiff_t m_fl_pitch_friction = 0x40; // float32
                constexpr std::ptrdiff_t m_fl_pitch_bounce = 0x44; // float32
                constexpr std::ptrdiff_t m_fl_base_mass = 0x48; // float32
                constexpr std::ptrdiff_t m_fl_base_stiffness = 0x4C; // float32
                constexpr std::ptrdiff_t m_fl_base_damping = 0x50; // float32
                constexpr std::ptrdiff_t m_fl_base_min_left = 0x54; // float32
                constexpr std::ptrdiff_t m_fl_base_max_left = 0x58; // float32
                constexpr std::ptrdiff_t m_fl_base_left_friction = 0x5C; // float32
                constexpr std::ptrdiff_t m_fl_base_min_up = 0x60; // float32
                constexpr std::ptrdiff_t m_fl_base_max_up = 0x64; // float32
                constexpr std::ptrdiff_t m_fl_base_up_friction = 0x68; // float32
                constexpr std::ptrdiff_t m_fl_base_min_forward = 0x6C; // float32
                constexpr std::ptrdiff_t m_fl_base_max_forward = 0x70; // float32
                constexpr std::ptrdiff_t m_fl_base_forward_friction = 0x74; // float32
                constexpr std::ptrdiff_t m_fl_radius0 = 0x78; // float32
                constexpr std::ptrdiff_t m_fl_radius1 = 0x7C; // float32
                constexpr std::ptrdiff_t m_v_point0 = 0x80; // Vector
                constexpr std::ptrdiff_t m_v_point1 = 0x8C; // Vector
                constexpr std::ptrdiff_t m_n_collision_mask = 0x98; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_fe_named_jiggle_bone {
                constexpr std::ptrdiff_t m_str_parent_bone = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_transform = 0x10; // CTransform
                constexpr std::ptrdiff_t m_n_jiggle_parent = 0x30; // uint32
                constexpr std::ptrdiff_t m_jiggle_bone = 0x34; // CFeJiggleBone
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_fe_indexed_jiggle_bone {
                constexpr std::ptrdiff_t m_n_node = 0x0; // uint32
                constexpr std::ptrdiff_t m_n_jiggle_parent = 0x4; // uint32
                constexpr std::ptrdiff_t m_jiggle_bone = 0x8; // CFeJiggleBone
            }
            // Parent: None
            // Fields count: 100
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace phys_fe_model_desc_t {
                constexpr std::ptrdiff_t m_ctrl_hash = 0x0; // CUtlVector< uint32 >
                constexpr std::ptrdiff_t m_ctrl_name = 0x18; // CUtlVector< CUtlString >
                constexpr std::ptrdiff_t m_n_static_node_flags = 0x30; // uint32
                constexpr std::ptrdiff_t m_n_dynamic_node_flags = 0x34; // uint32
                constexpr std::ptrdiff_t m_fl_local_force = 0x38; // float32
                constexpr std::ptrdiff_t m_fl_local_rotation = 0x3C; // float32
                constexpr std::ptrdiff_t m_n_node_count = 0x40; // uint16
                constexpr std::ptrdiff_t m_n_static_nodes = 0x42; // uint16
                constexpr std::ptrdiff_t m_n_rot_lock_static_nodes = 0x44; // uint16
                constexpr std::ptrdiff_t m_n_first_position_driven_node = 0x46; // uint16
                constexpr std::ptrdiff_t m_n_simd_tri_count1 = 0x48; // uint16
                constexpr std::ptrdiff_t m_n_simd_tri_count2 = 0x4A; // uint16
                constexpr std::ptrdiff_t m_n_simd_quad_count1 = 0x4C; // uint16
                constexpr std::ptrdiff_t m_n_simd_quad_count2 = 0x4E; // uint16
                constexpr std::ptrdiff_t m_n_quad_count1 = 0x50; // uint16
                constexpr std::ptrdiff_t m_n_quad_count2 = 0x52; // uint16
                constexpr std::ptrdiff_t m_n_tree_depth = 0x54; // uint16
                constexpr std::ptrdiff_t m_n_node_base_jigglebone_depends_count = 0x56; // uint16
                constexpr std::ptrdiff_t m_n_rope_count = 0x58; // uint16
                constexpr std::ptrdiff_t m_ropes = 0x60; // CUtlVector< uint16 >
                constexpr std::ptrdiff_t m_node_bases = 0x78; // CUtlVector< FeNodeBase_t >
                constexpr std::ptrdiff_t m_simd_node_bases = 0x90; // CUtlVector< FeSimdNodeBase_t >
                constexpr std::ptrdiff_t m_quads = 0xA8; // CUtlVector< FeQuad_t >
                constexpr std::ptrdiff_t m_simd_quads = 0xC0; // CUtlVector< FeSimdQuad_t >
                constexpr std::ptrdiff_t m_simd_tris = 0xD8; // CUtlVector< FeSimdTri_t >
                constexpr std::ptrdiff_t m_simd_rods = 0xF0; // CUtlVector< FeSimdRodConstraint_t >
                constexpr std::ptrdiff_t m_simd_rods_anim = 0x108; // CUtlVector< FeSimdRodConstraintAnim_t >
                constexpr std::ptrdiff_t m_init_pose = 0x120; // CUtlVector< CTransform >
                constexpr std::ptrdiff_t m_rods = 0x138; // CUtlVector< FeRodConstraint_t >
                constexpr std::ptrdiff_t m_twists = 0x150; // CUtlVector< FeTwistConstraint_t >
                constexpr std::ptrdiff_t m_axial_edges = 0x168; // CUtlVector< FeAxialEdgeBend_t >
                constexpr std::ptrdiff_t m_node_inv_masses = 0x180; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_ctrl_offsets = 0x198; // CUtlVector< FeCtrlOffset_t >
                constexpr std::ptrdiff_t m_ctrl_os_offsets = 0x1B0; // CUtlVector< FeCtrlOsOffset_t >
                constexpr std::ptrdiff_t m_follow_nodes = 0x1C8; // CUtlVector< FeFollowNode_t >
                constexpr std::ptrdiff_t m_collision_planes = 0x1E0; // CUtlVector< FeCollisionPlane_t >
                constexpr std::ptrdiff_t m_node_integrator = 0x1F8; // CUtlVector< FeNodeIntegrator_t >
                constexpr std::ptrdiff_t m_spring_integrator = 0x210; // CUtlVector< FeSpringIntegrator_t >
                constexpr std::ptrdiff_t m_simd_spring_integrator = 0x228; // CUtlVector< FeSimdSpringIntegrator_t >
                constexpr std::ptrdiff_t m_world_collision_params = 0x240; // CUtlVector< FeWorldCollisionParams_t >
                constexpr std::ptrdiff_t m_legacy_stretch_force = 0x258; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_node_collision_radii = 0x270; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_dyn_node_friction = 0x288; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_local_rotation = 0x2A0; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_local_force = 0x2B8; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_tapered_capsule_stretches = 0x2D0; // CUtlVector< FeTaperedCapsuleStretch_t >
                constexpr std::ptrdiff_t m_tapered_capsule_rigids = 0x2E8; // CUtlVector< FeTaperedCapsuleRigid_t >
                constexpr std::ptrdiff_t m_sphere_rigids = 0x300; // CUtlVector< FeSphereRigid_t >
                constexpr std::ptrdiff_t m_world_collision_nodes = 0x318; // CUtlVector< uint16 >
                constexpr std::ptrdiff_t m_tree_parents = 0x330; // CUtlVector< uint16 >
                constexpr std::ptrdiff_t m_tree_collision_masks = 0x348; // CUtlVector< uint16 >
                constexpr std::ptrdiff_t m_tree_children = 0x360; // CUtlVector< FeTreeChildren_t >
                constexpr std::ptrdiff_t m_free_nodes = 0x378; // CUtlVector< uint16 >
                constexpr std::ptrdiff_t m_fit_matrices = 0x390; // CUtlVector< FeFitMatrix_t >
                constexpr std::ptrdiff_t m_fit_weights = 0x3A8; // CUtlVector< FeFitWeight_t >
                constexpr std::ptrdiff_t m_reverse_offsets = 0x3C0; // CUtlVector< FeNodeReverseOffset_t >
                constexpr std::ptrdiff_t m_anim_stray_radii = 0x3D8; // CUtlVector< FeAnimStrayRadius_t >
                constexpr std::ptrdiff_t m_simd_anim_stray_radii = 0x3F0; // CUtlVector< FeSimdAnimStrayRadius_t >
                constexpr std::ptrdiff_t m_kelager_bends = 0x408; // CUtlVector< FeKelagerBend2_t >
                constexpr std::ptrdiff_t m_ctrl_soft_offsets = 0x420; // CUtlVector< FeCtrlSoftOffset_t >
                constexpr std::ptrdiff_t m_jiggle_bones = 0x438; // CUtlVector< CFeIndexedJiggleBone >
                constexpr std::ptrdiff_t m_source_elems = 0x450; // CUtlVector< uint16 >
                constexpr std::ptrdiff_t m_goal_damped_spring_integrators = 0x468; // CUtlVector< uint32 >
                constexpr std::ptrdiff_t m_tris = 0x480; // CUtlVector< FeTri_t >
                constexpr std::ptrdiff_t m_n_tri_count1 = 0x498; // uint16
                constexpr std::ptrdiff_t m_n_tri_count2 = 0x49A; // uint16
                constexpr std::ptrdiff_t m_n_reserved_uint8 = 0x49C; // uint8
                constexpr std::ptrdiff_t m_n_extra_pressure_iterations = 0x49D; // uint8
                constexpr std::ptrdiff_t m_n_extra_goal_iterations = 0x49E; // uint8
                constexpr std::ptrdiff_t m_n_extra_iterations = 0x49F; // uint8
                constexpr std::ptrdiff_t m_box_rigids = 0x4A0; // CUtlVector< FeBoxRigid_t >
                constexpr std::ptrdiff_t m_dyn_node_vertex_set = 0x4B8; // CUtlVector< uint8 >
                constexpr std::ptrdiff_t m_vertex_set_names = 0x4D0; // CUtlVector< uint32 >
                constexpr std::ptrdiff_t m_rigid_collider_priorities = 0x4E8; // CUtlVector< FeRigidColliderIndices_t >
                constexpr std::ptrdiff_t m_morph_layers = 0x500; // CUtlVector< FeMorphLayerDepr_t >
                constexpr std::ptrdiff_t m_morph_set_data = 0x518; // CUtlVector< uint8 >
                constexpr std::ptrdiff_t m_vertex_maps = 0x530; // CUtlVector< FeVertexMapDesc_t >
                constexpr std::ptrdiff_t m_vertex_map_values = 0x548; // CUtlVector< uint8 >
                constexpr std::ptrdiff_t m_effects = 0x560; // CUtlVector< FeEffectDesc_t >
                constexpr std::ptrdiff_t m_lock_to_parent = 0x578; // CUtlVector< FeCtrlOffset_t >
                constexpr std::ptrdiff_t m_lock_to_goal = 0x590; // CUtlVector< uint16 >
                constexpr std::ptrdiff_t m_skel_parents = 0x5A8; // CUtlVector< int16 >
                constexpr std::ptrdiff_t m_dyn_node_wind_bases = 0x5C0; // CUtlVector< FeNodeWindBase_t >
                constexpr std::ptrdiff_t m_fl_internal_pressure = 0x5D8; // float32
                constexpr std::ptrdiff_t m_fl_default_time_dilation = 0x5DC; // float32
                constexpr std::ptrdiff_t m_fl_windage = 0x5E0; // float32
                constexpr std::ptrdiff_t m_fl_wind_drag = 0x5E4; // float32
                constexpr std::ptrdiff_t m_fl_default_surface_stretch = 0x5E8; // float32
                constexpr std::ptrdiff_t m_fl_default_thread_stretch = 0x5EC; // float32
                constexpr std::ptrdiff_t m_fl_default_gravity_scale = 0x5F0; // float32
                constexpr std::ptrdiff_t m_fl_default_vel_air_drag = 0x5F4; // float32
                constexpr std::ptrdiff_t m_fl_default_exp_air_drag = 0x5F8; // float32
                constexpr std::ptrdiff_t m_fl_default_vel_quad_air_drag = 0x5FC; // float32
                constexpr std::ptrdiff_t m_fl_default_exp_quad_air_drag = 0x600; // float32
                constexpr std::ptrdiff_t m_fl_rod_velocity_smooth_rate = 0x604; // float32
                constexpr std::ptrdiff_t m_fl_quad_velocity_smooth_rate = 0x608; // float32
                constexpr std::ptrdiff_t m_fl_add_world_collision_radius = 0x60C; // float32
                constexpr std::ptrdiff_t m_fl_default_volumetric_solve_amount = 0x610; // float32
                constexpr std::ptrdiff_t m_n_rod_velocity_smooth_iterations = 0x614; // uint16
                constexpr std::ptrdiff_t m_n_quad_velocity_smooth_iterations = 0x616; // uint16
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace four_vectors2_d {
                constexpr std::ptrdiff_t x = 0x0; // fltx4
                constexpr std::ptrdiff_t y = 0x10; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_edge_desc_t {
                constexpr std::ptrdiff_t n_edge = 0x0; // uint16[2]
                constexpr std::ptrdiff_t n_side = 0x4; // uint16[2][2]
                constexpr std::ptrdiff_t n_virt_elem = 0xC; // uint16[2]
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace old_fe_edge_t {
                constexpr std::ptrdiff_t m_fl_k = 0x0; // float32[3]
                constexpr std::ptrdiff_t inv_a = 0xC; // float32
                constexpr std::ptrdiff_t t = 0x10; // float32
                constexpr std::ptrdiff_t fl_theta_relaxed = 0x14; // float32
                constexpr std::ptrdiff_t fl_theta_factor = 0x18; // float32
                constexpr std::ptrdiff_t c01 = 0x1C; // float32
                constexpr std::ptrdiff_t c02 = 0x20; // float32
                constexpr std::ptrdiff_t c03 = 0x24; // float32
                constexpr std::ptrdiff_t c04 = 0x28; // float32
                constexpr std::ptrdiff_t fl_axial_model_dist = 0x2C; // float32
                constexpr std::ptrdiff_t fl_axial_model_weights = 0x30; // float32[4]
                constexpr std::ptrdiff_t m_n_node = 0x40; // uint16[4]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_weighted_node_t {
                constexpr std::ptrdiff_t n_node = 0x0; // uint16
                constexpr std::ptrdiff_t n_weight = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_kelager_bend2_t {
                constexpr std::ptrdiff_t fl_weight = 0x0; // float32[3]
                constexpr std::ptrdiff_t fl_height0 = 0xC; // float32
                constexpr std::ptrdiff_t n_node = 0x10; // uint16[3]
                constexpr std::ptrdiff_t n_reserved = 0x16; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_stiff_hinge_build_t {
                constexpr std::ptrdiff_t fl_max_angle = 0x0; // float32
                constexpr std::ptrdiff_t fl_strength = 0x4; // float32
                constexpr std::ptrdiff_t fl_motion_bias = 0x8; // float32[3]
                constexpr std::ptrdiff_t n_node = 0x14; // uint16[3]
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_tri_t {
                constexpr std::ptrdiff_t n_node = 0x0; // uint16[3]
                constexpr std::ptrdiff_t w1 = 0x8; // float32
                constexpr std::ptrdiff_t w2 = 0xC; // float32
                constexpr std::ptrdiff_t v1x = 0x10; // float32
                constexpr std::ptrdiff_t v2 = 0x14; // Vector2D
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_simd_tri_t {
                constexpr std::ptrdiff_t n_node = 0x0; // uint32[4][3]
                constexpr std::ptrdiff_t w1 = 0x30; // fltx4
                constexpr std::ptrdiff_t w2 = 0x40; // fltx4
                constexpr std::ptrdiff_t v1x = 0x50; // fltx4
                constexpr std::ptrdiff_t v2 = 0x60; // FourVectors2D
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_quad_t {
                constexpr std::ptrdiff_t n_node = 0x0; // uint16[4]
                constexpr std::ptrdiff_t fl_slack = 0x8; // float32
                constexpr std::ptrdiff_t v_shape = 0xC; // Vector4D[4]
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_node_base_t {
                constexpr std::ptrdiff_t n_node = 0x0; // uint16
                constexpr std::ptrdiff_t n_dummy = 0x2; // uint16[3]
                constexpr std::ptrdiff_t n_node_x0 = 0x8; // uint16
                constexpr std::ptrdiff_t n_node_x1 = 0xA; // uint16
                constexpr std::ptrdiff_t n_node_y0 = 0xC; // uint16
                constexpr std::ptrdiff_t n_node_y1 = 0xE; // uint16
                constexpr std::ptrdiff_t q_adjust = 0x10; // QuaternionStorage
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_node_wind_base_t {
                constexpr std::ptrdiff_t n_node_x0 = 0x0; // uint16
                constexpr std::ptrdiff_t n_node_x1 = 0x2; // uint16
                constexpr std::ptrdiff_t n_node_y0 = 0x4; // uint16
                constexpr std::ptrdiff_t n_node_y1 = 0x6; // uint16
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_node_reverse_offset_t {
                constexpr std::ptrdiff_t v_offset = 0x0; // Vector
                constexpr std::ptrdiff_t n_bone_ctrl = 0xC; // uint16
                constexpr std::ptrdiff_t n_target_node = 0xE; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_simd_quad_t {
                constexpr std::ptrdiff_t n_node = 0x0; // uint16[4][4]
                constexpr std::ptrdiff_t f4_slack = 0x20; // fltx4
                constexpr std::ptrdiff_t v_shape = 0x30; // FourVectors[4]
                constexpr std::ptrdiff_t f4_weights = 0xF0; // fltx4[4]
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_axial_edge_bend_t {
                constexpr std::ptrdiff_t te = 0x0; // float32
                constexpr std::ptrdiff_t tv = 0x4; // float32
                constexpr std::ptrdiff_t fl_dist = 0x8; // float32
                constexpr std::ptrdiff_t fl_weight = 0xC; // float32[4]
                constexpr std::ptrdiff_t n_node = 0x1C; // uint16[6]
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_band_bend_limit_t {
                constexpr std::ptrdiff_t fl_dist_min = 0x0; // float32
                constexpr std::ptrdiff_t fl_dist_max = 0x4; // float32
                constexpr std::ptrdiff_t n_node = 0x8; // uint16[6]
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_rod_constraint_t {
                constexpr std::ptrdiff_t n_node = 0x0; // uint16[2]
                constexpr std::ptrdiff_t fl_max_dist = 0x4; // float32
                constexpr std::ptrdiff_t fl_min_dist = 0x8; // float32
                constexpr std::ptrdiff_t fl_weight0 = 0xC; // float32
                constexpr std::ptrdiff_t fl_relaxation_factor = 0x10; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_twist_constraint_t {
                constexpr std::ptrdiff_t n_node_orient = 0x0; // uint16
                constexpr std::ptrdiff_t n_node_end = 0x2; // uint16
                constexpr std::ptrdiff_t fl_twist_relax = 0x4; // float32
                constexpr std::ptrdiff_t fl_swing_relax = 0x8; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_simd_rod_constraint_t {
                constexpr std::ptrdiff_t n_node = 0x0; // uint16[4][2]
                constexpr std::ptrdiff_t f4_max_dist = 0x10; // fltx4
                constexpr std::ptrdiff_t f4_min_dist = 0x20; // fltx4
                constexpr std::ptrdiff_t f4_weight0 = 0x30; // fltx4
                constexpr std::ptrdiff_t f4_relaxation_factor = 0x40; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_simd_rod_constraint_anim_t {
                constexpr std::ptrdiff_t n_node = 0x0; // uint16[4][2]
                constexpr std::ptrdiff_t f4_weight0 = 0x10; // fltx4
                constexpr std::ptrdiff_t f4_relaxation_factor = 0x20; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_anim_stray_radius_t {
                constexpr std::ptrdiff_t n_node = 0x0; // uint16[2]
                constexpr std::ptrdiff_t fl_max_dist = 0x4; // float32
                constexpr std::ptrdiff_t fl_relaxation_factor = 0x8; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_simd_anim_stray_radius_t {
                constexpr std::ptrdiff_t n_node = 0x0; // uint16[4][2]
                constexpr std::ptrdiff_t fl_max_dist = 0x10; // fltx4
                constexpr std::ptrdiff_t fl_relaxation_factor = 0x20; // fltx4
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_simd_node_base_t {
                constexpr std::ptrdiff_t n_node = 0x0; // uint16[4]
                constexpr std::ptrdiff_t n_node_x0 = 0x8; // uint16[4]
                constexpr std::ptrdiff_t n_node_x1 = 0x10; // uint16[4]
                constexpr std::ptrdiff_t n_node_y0 = 0x18; // uint16[4]
                constexpr std::ptrdiff_t n_node_y1 = 0x20; // uint16[4]
                constexpr std::ptrdiff_t n_dummy = 0x28; // uint16[4]
                constexpr std::ptrdiff_t q_adjust = 0x30; // FourQuaternions
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_node_integrator_t {
                constexpr std::ptrdiff_t fl_point_damping = 0x0; // float32
                constexpr std::ptrdiff_t fl_animation_force_attraction = 0x4; // float32
                constexpr std::ptrdiff_t fl_animation_vertex_attraction = 0x8; // float32
                constexpr std::ptrdiff_t fl_gravity = 0xC; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_spring_integrator_t {
                constexpr std::ptrdiff_t n_node = 0x0; // uint16[2]
                constexpr std::ptrdiff_t fl_spring_rest_length = 0x4; // float32
                constexpr std::ptrdiff_t fl_spring_constant = 0x8; // float32
                constexpr std::ptrdiff_t fl_spring_damping = 0xC; // float32
                constexpr std::ptrdiff_t fl_node_weight0 = 0x10; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_simd_spring_integrator_t {
                constexpr std::ptrdiff_t n_node = 0x0; // uint16[4][2]
                constexpr std::ptrdiff_t fl_spring_rest_length = 0x10; // fltx4
                constexpr std::ptrdiff_t fl_spring_constant = 0x20; // fltx4
                constexpr std::ptrdiff_t fl_spring_damping = 0x30; // fltx4
                constexpr std::ptrdiff_t fl_node_weight0 = 0x40; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_ctrl_offset_t {
                constexpr std::ptrdiff_t v_offset = 0x0; // Vector
                constexpr std::ptrdiff_t n_ctrl_parent = 0xC; // uint16
                constexpr std::ptrdiff_t n_ctrl_child = 0xE; // uint16
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_soft_parent_t {
                constexpr std::ptrdiff_t n_parent = 0x0; // int32
                constexpr std::ptrdiff_t fl_alpha = 0x4; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_ctrl_soft_offset_t {
                constexpr std::ptrdiff_t n_ctrl_parent = 0x0; // uint16
                constexpr std::ptrdiff_t n_ctrl_child = 0x2; // uint16
                constexpr std::ptrdiff_t v_offset = 0x4; // Vector
                constexpr std::ptrdiff_t fl_alpha = 0x10; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_ctrl_os_offset_t {
                constexpr std::ptrdiff_t n_ctrl_parent = 0x0; // uint16
                constexpr std::ptrdiff_t n_ctrl_child = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_follow_node_t {
                constexpr std::ptrdiff_t n_parent_node = 0x0; // uint16
                constexpr std::ptrdiff_t n_child_node = 0x2; // uint16
                constexpr std::ptrdiff_t fl_weight = 0x4; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_collision_plane_t {
                constexpr std::ptrdiff_t n_ctrl_parent = 0x0; // uint16
                constexpr std::ptrdiff_t n_child_node = 0x2; // uint16
                constexpr std::ptrdiff_t m_plane = 0x4; // RnPlane_t
                constexpr std::ptrdiff_t fl_strength = 0x14; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_world_collision_params_t {
                constexpr std::ptrdiff_t fl_world_friction = 0x0; // float32
                constexpr std::ptrdiff_t fl_ground_friction = 0x4; // float32
                constexpr std::ptrdiff_t n_list_begin = 0x8; // uint16
                constexpr std::ptrdiff_t n_list_end = 0xA; // uint16
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_tree_children_t {
                constexpr std::ptrdiff_t n_child = 0x0; // uint16[2]
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_tapered_capsule_rigid_t {
                constexpr std::ptrdiff_t v_sphere = 0x0; // fltx4[2]
                constexpr std::ptrdiff_t n_node = 0x20; // uint16
                constexpr std::ptrdiff_t n_collision_mask = 0x22; // uint16
                constexpr std::ptrdiff_t n_vertex_map_index = 0x24; // uint16
                constexpr std::ptrdiff_t n_flags = 0x26; // uint16
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_sphere_rigid_t {
                constexpr std::ptrdiff_t v_sphere = 0x0; // fltx4
                constexpr std::ptrdiff_t n_node = 0x10; // uint16
                constexpr std::ptrdiff_t n_collision_mask = 0x12; // uint16
                constexpr std::ptrdiff_t n_vertex_map_index = 0x14; // uint16
                constexpr std::ptrdiff_t n_flags = 0x16; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_tapered_capsule_stretch_t {
                constexpr std::ptrdiff_t n_node = 0x0; // uint16[2]
                constexpr std::ptrdiff_t n_collision_mask = 0x4; // uint16
                constexpr std::ptrdiff_t n_dummy = 0x6; // uint16
                constexpr std::ptrdiff_t fl_radius = 0x8; // float32[2]
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_box_rigid_t {
                constexpr std::ptrdiff_t tm_frame2 = 0x0; // CTransform
                constexpr std::ptrdiff_t n_node = 0x20; // uint16
                constexpr std::ptrdiff_t n_collision_mask = 0x22; // uint16
                constexpr std::ptrdiff_t v_size = 0x24; // Vector
                constexpr std::ptrdiff_t n_vertex_map_index = 0x30; // uint16
                constexpr std::ptrdiff_t n_flags = 0x32; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace cov_matrix3 {
                constexpr std::ptrdiff_t m_v_diag = 0x0; // Vector
                constexpr std::ptrdiff_t m_fl_xy = 0xC; // float32
                constexpr std::ptrdiff_t m_fl_xz = 0x10; // float32
                constexpr std::ptrdiff_t m_fl_yz = 0x14; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace four_cov_matrices3 {
                constexpr std::ptrdiff_t m_v_diag = 0x0; // FourVectors
                constexpr std::ptrdiff_t m_fl_xy = 0x30; // fltx4
                constexpr std::ptrdiff_t m_fl_xz = 0x40; // fltx4
                constexpr std::ptrdiff_t m_fl_yz = 0x50; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_fit_weight_t {
                constexpr std::ptrdiff_t fl_weight = 0x0; // float32
                constexpr std::ptrdiff_t n_node = 0x4; // uint16
                constexpr std::ptrdiff_t n_dummy = 0x6; // uint16
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_fit_influence_t {
                constexpr std::ptrdiff_t n_vertex_node = 0x0; // uint32
                constexpr std::ptrdiff_t fl_weight = 0x4; // float32
                constexpr std::ptrdiff_t n_matrix_node = 0x8; // uint32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_fit_matrix_t {
                constexpr std::ptrdiff_t bone = 0x0; // CTransform
                constexpr std::ptrdiff_t v_center = 0x20; // Vector
                constexpr std::ptrdiff_t n_end = 0x2C; // uint16
                constexpr std::ptrdiff_t n_node = 0x2E; // uint16
                constexpr std::ptrdiff_t n_begin_dynamic = 0x30; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_rigid_collider_indices_t {
                constexpr std::ptrdiff_t m_n_tapered_capsule_rigid_index = 0x0; // uint16
                constexpr std::ptrdiff_t m_n_sphere_rigid_index = 0x2; // uint16
                constexpr std::ptrdiff_t m_n_box_rigid_index = 0x4; // uint16
                constexpr std::ptrdiff_t m_n_collision_plane_index = 0x6; // uint16
            }
            // Parent: fe_tapered_capsule_rigid_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_build_tapered_capsule_rigid_t {
                constexpr std::ptrdiff_t m_n_priority = 0x30; // int32
                constexpr std::ptrdiff_t m_n_vertex_map_hash = 0x34; // uint32
            }
            // Parent: fe_box_rigid_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_build_box_rigid_t {
                constexpr std::ptrdiff_t m_n_priority = 0x34; // int32
                constexpr std::ptrdiff_t m_n_vertex_map_hash = 0x38; // uint32
            }
            // Parent: fe_sphere_rigid_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_build_sphere_rigid_t {
                constexpr std::ptrdiff_t m_n_priority = 0x20; // int32
                constexpr std::ptrdiff_t m_n_vertex_map_hash = 0x24; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_source_edge_t {
                constexpr std::ptrdiff_t n_node = 0x0; // uint16[2]
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_effect_desc_t {
                constexpr std::ptrdiff_t s_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t n_name_hash = 0x8; // uint32
                constexpr std::ptrdiff_t n_type = 0xC; // int32
                constexpr std::ptrdiff_t m_params = 0x10; // KeyValues3
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_vertex_map_build_t {
                constexpr std::ptrdiff_t m_vertex_map_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_n_name_hash = 0x8; // uint32
                constexpr std::ptrdiff_t m_color = 0xC; // Color
                constexpr std::ptrdiff_t m_fl_volumetric_solve_strength = 0x10; // float32
                constexpr std::ptrdiff_t m_n_scale_source_node = 0x14; // int32
                constexpr std::ptrdiff_t m_weights = 0x18; // CUtlVector< float32 >
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_fe_vertex_map_build_array {
                constexpr std::ptrdiff_t m_array = 0x0; // CUtlVector< FeVertexMapBuild_t* >
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_proxy_vertex_map_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_fl_weight = 0x8; // float32
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_vertex_map_desc_t {
                constexpr std::ptrdiff_t s_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t n_name_hash = 0x8; // uint32
                constexpr std::ptrdiff_t n_color = 0xC; // uint32
                constexpr std::ptrdiff_t n_flags = 0x10; // uint32
                constexpr std::ptrdiff_t n_vertex_base = 0x14; // uint16
                constexpr std::ptrdiff_t n_vertex_count = 0x16; // uint16
                constexpr std::ptrdiff_t n_map_offset = 0x18; // uint32
                constexpr std::ptrdiff_t n_node_list_offset = 0x1C; // uint32
                constexpr std::ptrdiff_t v_center_of_mass = 0x20; // Vector
                constexpr std::ptrdiff_t fl_volumetric_solve_strength = 0x2C; // float32
                constexpr std::ptrdiff_t n_scale_source_node = 0x30; // int16
                constexpr std::ptrdiff_t n_node_list_count = 0x32; // uint16
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fe_morph_layer_depr_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_n_name_hash = 0x8; // uint32
                constexpr std::ptrdiff_t m_nodes = 0x10; // CUtlVector< uint16 >
                constexpr std::ptrdiff_t m_init_pos = 0x28; // CUtlVector< Vector >
                constexpr std::ptrdiff_t m_gravity = 0x40; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_goal_strength = 0x58; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_goal_damping = 0x70; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_n_flags = 0x88; // uint32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_fe_morph_layer {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_n_name_hash = 0x8; // uint32
                constexpr std::ptrdiff_t m_nodes = 0x10; // CUtlVector< uint16 >
                constexpr std::ptrdiff_t m_init_pos = 0x28; // CUtlVector< Vector >
                constexpr std::ptrdiff_t m_gravity = 0x40; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_goal_strength = 0x58; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_goal_damping = 0x70; // CUtlVector< float32 >
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace dop26_t {
                constexpr std::ptrdiff_t m_fl_support = 0x0; // float32[26]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_capsule_t {
                constexpr std::ptrdiff_t m_v_center = 0x0; // Vector[2]
                constexpr std::ptrdiff_t m_fl_radius = 0x18; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_plane_t {
                constexpr std::ptrdiff_t m_v_normal = 0x0; // Vector
                constexpr std::ptrdiff_t m_fl_offset = 0xC; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_vertex_t {
                constexpr std::ptrdiff_t m_n_edge = 0x0; // uint8
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_half_edge_t {
                constexpr std::ptrdiff_t m_n_next = 0x0; // uint8
                constexpr std::ptrdiff_t m_n_twin = 0x1; // uint8
                constexpr std::ptrdiff_t m_n_origin = 0x2; // uint8
                constexpr std::ptrdiff_t m_n_face = 0x3; // uint8
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_face_t {
                constexpr std::ptrdiff_t m_n_edge = 0x0; // uint8
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_region_svm {
                constexpr std::ptrdiff_t m_planes = 0x0; // CUtlVector< RnPlane_t >
                constexpr std::ptrdiff_t m_nodes = 0x18; // CUtlVector< uint32 >
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_hull_t {
                constexpr std::ptrdiff_t m_v_centroid = 0x0; // Vector
                constexpr std::ptrdiff_t m_fl_max_angular_radius = 0xC; // float32
                constexpr std::ptrdiff_t m_bounds = 0x10; // AABB_t
                constexpr std::ptrdiff_t m_v_orthographic_areas = 0x28; // Vector
                constexpr std::ptrdiff_t m_mass_properties = 0x34; // matrix3x4_t
                constexpr std::ptrdiff_t m_fl_volume = 0x64; // float32
                constexpr std::ptrdiff_t m_fl_surface_area = 0x68; // float32
                constexpr std::ptrdiff_t m_vertices = 0x70; // CUtlVector< RnVertex_t >
                constexpr std::ptrdiff_t m_vertex_positions = 0x88; // CUtlVector< Vector >
                constexpr std::ptrdiff_t m_edges = 0xA0; // CUtlVector< RnHalfEdge_t >
                constexpr std::ptrdiff_t m_faces = 0xB8; // CUtlVector< RnFace_t >
                constexpr std::ptrdiff_t m_face_planes = 0xD0; // CUtlVector< RnPlane_t >
                constexpr std::ptrdiff_t m_n_flags = 0xE8; // uint32
                constexpr std::ptrdiff_t m_p_region_svm = 0xF0; // CRegionSVM*
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_triangle_t {
                constexpr std::ptrdiff_t m_n_index = 0x0; // int32[3]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_wing_t {
                constexpr std::ptrdiff_t m_n_index = 0x0; // int32[3]
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_node_t {
                constexpr std::ptrdiff_t m_v_min = 0x0; // Vector
                constexpr std::ptrdiff_t m_n_children = 0xC; // uint32
                constexpr std::ptrdiff_t m_v_max = 0x10; // Vector
                constexpr std::ptrdiff_t m_n_triangle_offset = 0x1C; // uint32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_mesh_t {
                constexpr std::ptrdiff_t m_v_min = 0x0; // Vector
                constexpr std::ptrdiff_t m_v_max = 0xC; // Vector
                constexpr std::ptrdiff_t m_nodes = 0x18; // CUtlVector< RnNode_t >
                constexpr std::ptrdiff_t m_vertices = 0x30; // CUtlVectorSIMDPaddedVector
                constexpr std::ptrdiff_t m_triangles = 0x48; // CUtlVector< RnTriangle_t >
                constexpr std::ptrdiff_t m_wings = 0x60; // CUtlVector< RnWing_t >
                constexpr std::ptrdiff_t m_materials = 0x78; // CUtlVector< uint8 >
                constexpr std::ptrdiff_t m_v_orthographic_areas = 0x90; // Vector
                constexpr std::ptrdiff_t m_n_flags = 0x9C; // uint32
                constexpr std::ptrdiff_t m_n_debug_flags = 0xA0; // uint32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_shape_desc_t {
                constexpr std::ptrdiff_t m_n_collision_attribute_index = 0x0; // uint32
                constexpr std::ptrdiff_t m_n_surface_property_index = 0x4; // uint32
                constexpr std::ptrdiff_t m_user_friendly_name = 0x8; // CUtlString
            }
            // Parent: rn_shape_desc_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_sphere_desc_t {
                constexpr std::ptrdiff_t m_sphere = 0x10; // SphereBase_t< float32 >
            }
            // Parent: rn_shape_desc_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_capsule_desc_t {
                constexpr std::ptrdiff_t m_capsule = 0x10; // RnCapsule_t
            }
            // Parent: rn_shape_desc_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_hull_desc_t {
                constexpr std::ptrdiff_t m_hull = 0x10; // RnHull_t
            }
            // Parent: rn_shape_desc_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_mesh_desc_t {
                constexpr std::ptrdiff_t m_mesh = 0x10; // RnMesh_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_softbody_particle_t {
                constexpr std::ptrdiff_t m_fl_mass_inv = 0x0; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_softbody_spring_t {
                constexpr std::ptrdiff_t m_n_particle = 0x0; // uint16[2]
                constexpr std::ptrdiff_t m_fl_length = 0x4; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_softbody_capsule_t {
                constexpr std::ptrdiff_t m_v_center = 0x0; // Vector[2]
                constexpr std::ptrdiff_t m_fl_radius = 0x18; // float32
                constexpr std::ptrdiff_t m_n_particle = 0x1C; // uint16[2]
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_blend_vertex_t {
                constexpr std::ptrdiff_t m_n_weight0 = 0x0; // uint16
                constexpr std::ptrdiff_t m_n_index0 = 0x2; // uint16
                constexpr std::ptrdiff_t m_n_weight1 = 0x4; // uint16
                constexpr std::ptrdiff_t m_n_index1 = 0x6; // uint16
                constexpr std::ptrdiff_t m_n_weight2 = 0x8; // uint16
                constexpr std::ptrdiff_t m_n_index2 = 0xA; // uint16
                constexpr std::ptrdiff_t m_n_flags = 0xC; // uint16
                constexpr std::ptrdiff_t m_n_target_index = 0xE; // uint16
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace cast_sphere_sat_params_t {
                constexpr std::ptrdiff_t m_v_ray_start = 0x0; // Vector
                constexpr std::ptrdiff_t m_v_ray_delta = 0xC; // Vector
                constexpr std::ptrdiff_t m_fl_radius = 0x18; // float32
                constexpr std::ptrdiff_t m_fl_max_fraction = 0x1C; // float32
                constexpr std::ptrdiff_t m_fl_scale = 0x20; // float32
                constexpr std::ptrdiff_t m_p_hull = 0x28; // RnHull_t*
            }
            // Parent: None
            // Fields count: 35
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace rn_body_desc_t {
                constexpr std::ptrdiff_t m_s_debug_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_v_position = 0x8; // Vector
                constexpr std::ptrdiff_t m_q_orientation = 0x14; // QuaternionStorage
                constexpr std::ptrdiff_t m_v_linear_velocity = 0x24; // Vector
                constexpr std::ptrdiff_t m_v_angular_velocity = 0x30; // Vector
                constexpr std::ptrdiff_t m_v_local_mass_center = 0x3C; // Vector
                constexpr std::ptrdiff_t m_local_inertia_inv = 0x48; // Vector[3]
                constexpr std::ptrdiff_t m_fl_mass_inv = 0x6C; // float32
                constexpr std::ptrdiff_t m_fl_game_mass = 0x70; // float32
                constexpr std::ptrdiff_t m_fl_inertia_scale_inv = 0x74; // float32
                constexpr std::ptrdiff_t m_fl_linear_damping = 0x78; // float32
                constexpr std::ptrdiff_t m_fl_angular_damping = 0x7C; // float32
                constexpr std::ptrdiff_t m_fl_linear_drag = 0x80; // float32
                constexpr std::ptrdiff_t m_fl_angular_drag = 0x84; // float32
                constexpr std::ptrdiff_t m_fl_linear_buoyancy_drag = 0x88; // float32
                constexpr std::ptrdiff_t m_fl_angular_buoyancy_drag = 0x8C; // float32
                constexpr std::ptrdiff_t m_v_last_awake_force_accum = 0x90; // Vector
                constexpr std::ptrdiff_t m_v_last_awake_torque_accum = 0x9C; // Vector
                constexpr std::ptrdiff_t m_fl_buoyancy_factor = 0xA8; // float32
                constexpr std::ptrdiff_t m_fl_gravity_scale = 0xAC; // float32
                constexpr std::ptrdiff_t m_fl_time_scale = 0xB0; // float32
                constexpr std::ptrdiff_t m_n_body_type = 0xB4; // int32
                constexpr std::ptrdiff_t m_n_game_index = 0xB8; // uint32
                constexpr std::ptrdiff_t m_n_game_flags = 0xBC; // uint32
                constexpr std::ptrdiff_t m_n_min_velocity_iterations = 0xC0; // int8
                constexpr std::ptrdiff_t m_n_min_position_iterations = 0xC1; // int8
                constexpr std::ptrdiff_t m_n_mass_priority = 0xC2; // int8
                constexpr std::ptrdiff_t m_b_enabled = 0xC3; // bool
                constexpr std::ptrdiff_t m_b_sleeping = 0xC4; // bool
                constexpr std::ptrdiff_t m_b_is_continuous_enabled = 0xC5; // bool
                constexpr std::ptrdiff_t m_b_drag_enabled = 0xC6; // bool
                constexpr std::ptrdiff_t m_b_buoyancy_drag_enabled = 0xC7; // bool
                constexpr std::ptrdiff_t m_b_gravity_disabled = 0xC8; // bool
                constexpr std::ptrdiff_t m_b_speculative_enabled = 0xC9; // bool
                constexpr std::ptrdiff_t m_b_has_shadow_controller = 0xCA; // bool
            }
            // Parent: None
            // Fields count: 2
            namespace vertex_position_normal_t {
                constexpr std::ptrdiff_t m_v_position = 0x0; // Vector
                constexpr std::ptrdiff_t m_v_normal = 0xC; // Vector
            }
            // Parent: None
            // Fields count: 1
            namespace vertex_position_color_t {
                constexpr std::ptrdiff_t m_v_position = 0x0; // Vector
            }
            // Parent: None
            // Fields count: 5
            namespace constraint_breakableparams_t {
                constexpr std::ptrdiff_t strength = 0x0; // float32
                constexpr std::ptrdiff_t force_limit = 0x4; // float32
                constexpr std::ptrdiff_t torque_limit = 0x8; // float32
                constexpr std::ptrdiff_t body_mass_scale = 0xC; // float32[2]
                constexpr std::ptrdiff_t is_active = 0x14; // bool
            }
            // Parent: None
            // Fields count: 4
            namespace constraint_axislimit_t {
                constexpr std::ptrdiff_t fl_min_rotation = 0x0; // float32
                constexpr std::ptrdiff_t fl_max_rotation = 0x4; // float32
                constexpr std::ptrdiff_t fl_motor_target_ang_speed = 0x8; // float32
                constexpr std::ptrdiff_t fl_motor_max_torque = 0xC; // float32
            }
            // Parent: None
            // Fields count: 4
            namespace constraint_hingeparams_t {
                constexpr std::ptrdiff_t world_position = 0x0; // Vector
                constexpr std::ptrdiff_t world_axis_direction = 0xC; // Vector
                constexpr std::ptrdiff_t hinge_axis = 0x18; // constraint_axislimit_t
                constexpr std::ptrdiff_t constraint = 0x28; // constraint_breakableparams_t
            }
            // Parent: None
            // Fields count: 0
            namespace i_physics_player_controller {
            }
            // Parent: rn_body_desc_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace vphysics_save_cphysicsbody_t {
                constexpr std::ptrdiff_t m_n_old_pointer = 0xD0; // uint64
            }
        }
        // Module: libworldrenderer.so
        // Classes count: 27
        // Enums count: 0
        namespace libworldrenderer {
            // Parent: None
            // Fields count: 0
            namespace c_entity_component {
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // NetworkVarNames: m_nameStringableIndex (int32)
            namespace c_entity_identity {
                constexpr std::ptrdiff_t m_name_stringable_index = 0x14; // int32
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_designer_name = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flags = 0x30; // uint32
                constexpr std::ptrdiff_t m_world_group_id = 0x38; // WorldGroupId_t
                constexpr std::ptrdiff_t m_f_data_object_types = 0x3C; // uint32
                constexpr std::ptrdiff_t m_path_index = 0x40; // ChangeAccessorFieldPathIndex_t
                constexpr std::ptrdiff_t m_p_prev = 0x58; // CEntityIdentity*
                constexpr std::ptrdiff_t m_p_next = 0x60; // CEntityIdentity*
                constexpr std::ptrdiff_t m_p_prev_by_class = 0x68; // CEntityIdentity*
                constexpr std::ptrdiff_t m_p_next_by_class = 0x70; // CEntityIdentity*
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity *)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            namespace c_entity_instance {
                constexpr std::ptrdiff_t m_isz_private_v_scripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_p_entity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_c_script_component = 0x28; // CScriptComponent*
                constexpr std::ptrdiff_t m_b_visiblein_pvs = 0x30; // bool
            }
            // Parent: c_entity_component
            // Fields count: 1
            namespace c_script_component {
                constexpr std::ptrdiff_t m_script_class_name = 0x30; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace entity_io_connection_data_t {
                constexpr std::ptrdiff_t m_output_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_target_type = 0x8; // uint32
                constexpr std::ptrdiff_t m_target_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_input_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_override_param = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_fl_delay = 0x28; // float32
                constexpr std::ptrdiff_t m_n_times_to_fire = 0x2C; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace entity_key_value_data_t {
                constexpr std::ptrdiff_t m_connections = 0x8; // CUtlVector< EntityIOConnectionData_t >
                constexpr std::ptrdiff_t m_key_values_data = 0x20; // CUtlBinaryBlock
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace perm_entity_lump_data_t {
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_hammer_unique_id = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_child_lumps = 0x18; // CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > >
                constexpr std::ptrdiff_t m_entity_key_values = 0x30; // CUtlLeanVector< EntityKeyValueData_t >
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace scene_object_t {
                constexpr std::ptrdiff_t m_n_object_id = 0x0; // uint32
                constexpr std::ptrdiff_t m_v_transform = 0x4; // Vector4D[3]
                constexpr std::ptrdiff_t m_fl_fade_start_distance = 0x34; // float32
                constexpr std::ptrdiff_t m_fl_fade_end_distance = 0x38; // float32
                constexpr std::ptrdiff_t m_v_tint_color = 0x3C; // Vector4D
                constexpr std::ptrdiff_t m_skin = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_n_object_type_flags = 0x58; // ObjectTypeFlags_t
                constexpr std::ptrdiff_t m_v_lighting_origin = 0x5C; // Vector
                constexpr std::ptrdiff_t m_n_overlay_render_order = 0x68; // int16
                constexpr std::ptrdiff_t m_n_lod_override = 0x6A; // int16
                constexpr std::ptrdiff_t m_n_cube_map_precomputed_handshake = 0x6C; // int32
                constexpr std::ptrdiff_t m_n_light_probe_volume_precomputed_handshake = 0x70; // int32
                constexpr std::ptrdiff_t m_renderable_model = 0x78; // CStrongHandle< InfoForResourceTypeCModel >
                constexpr std::ptrdiff_t m_renderable = 0x80; // CStrongHandle< InfoForResourceTypeCRenderMesh >
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace base_scene_object_override_t {
                constexpr std::ptrdiff_t m_n_scene_object_index = 0x0; // uint32
            }
            // Parent: base_scene_object_override_t
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace extra_vertex_stream_override_t {
                constexpr std::ptrdiff_t m_n_sub_scene_object = 0x4; // uint32
                constexpr std::ptrdiff_t m_n_draw_call_index = 0x8; // uint32
                constexpr std::ptrdiff_t m_n_additional_mesh_draw_primitive_flags = 0xC; // MeshDrawPrimitiveFlags_t
                constexpr std::ptrdiff_t m_extra_buffer_binding = 0x10; // CRenderBufferBinding
            }
            // Parent: base_scene_object_override_t
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace material_override_t {
                constexpr std::ptrdiff_t m_n_sub_scene_object = 0x4; // uint32
                constexpr std::ptrdiff_t m_n_draw_call_index = 0x8; // uint32
                constexpr std::ptrdiff_t m_p_material = 0x10; // CStrongHandle< InfoForResourceTypeIMaterial2 >
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace info_overlay_data_t {
                constexpr std::ptrdiff_t m_transform = 0x0; // matrix3x4_t
                constexpr std::ptrdiff_t m_fl_width = 0x30; // float32
                constexpr std::ptrdiff_t m_fl_height = 0x34; // float32
                constexpr std::ptrdiff_t m_fl_depth = 0x38; // float32
                constexpr std::ptrdiff_t m_v_uv_start = 0x3C; // Vector2D
                constexpr std::ptrdiff_t m_v_uv_end = 0x44; // Vector2D
                constexpr std::ptrdiff_t m_p_material = 0x50; // CStrongHandle< InfoForResourceTypeIMaterial2 >
                constexpr std::ptrdiff_t m_n_render_order = 0x58; // int32
                constexpr std::ptrdiff_t m_v_tint_color = 0x5C; // Vector4D
                constexpr std::ptrdiff_t m_n_sequence_override = 0x6C; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace baked_lighting_info_t {
                constexpr std::ptrdiff_t m_n_lightmap_version_number = 0x0; // uint32
                constexpr std::ptrdiff_t m_n_lightmap_game_version_number = 0x4; // uint32
                constexpr std::ptrdiff_t m_v_lightmap_uv_scale = 0x8; // Vector2D
                constexpr std::ptrdiff_t m_b_has_lightmaps = 0x10; // bool
                constexpr std::ptrdiff_t m_light_maps = 0x18; // CUtlVector< CStrongHandle< InfoForResourceTypeCTextureBase > >
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace world_node_on_disk_buffer_data_t {
                constexpr std::ptrdiff_t m_n_element_count = 0x0; // int32
                constexpr std::ptrdiff_t m_n_element_size_in_bytes = 0x4; // int32
                constexpr std::ptrdiff_t m_input_layout_fields = 0x8; // CUtlVector< RenderInputLayoutField_t >
                constexpr std::ptrdiff_t m_p_data = 0x20; // CUtlVector< uint8 >
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace aggregate_mesh_info_t {
                constexpr std::ptrdiff_t m_n_vis_cluster_member_offset = 0x0; // uint32
                constexpr std::ptrdiff_t m_n_vis_cluster_member_count = 0x4; // uint8
                constexpr std::ptrdiff_t m_b_has_transform = 0x5; // bool
                constexpr std::ptrdiff_t m_n_draw_call_index = 0x6; // int16
                constexpr std::ptrdiff_t m_n_lod_setup_index = 0x8; // int16
                constexpr std::ptrdiff_t m_n_lod_group_mask = 0xA; // uint8
                constexpr std::ptrdiff_t m_v_tint_color = 0xB; // Color
                constexpr std::ptrdiff_t m_object_flags = 0x10; // ObjectTypeFlags_t
                constexpr std::ptrdiff_t m_n_light_probe_volume_precomputed_handshake = 0x14; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace aggregate_lod_setup_t {
                constexpr std::ptrdiff_t m_v_lod_origin = 0x0; // Vector
                constexpr std::ptrdiff_t m_f_max_object_scale = 0xC; // float32
                constexpr std::ptrdiff_t m_f_switch_distances = 0x10; // CUtlVectorFixedGrowable< float32 >
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace aggregate_scene_object_t {
                constexpr std::ptrdiff_t m_all_flags = 0x0; // ObjectTypeFlags_t
                constexpr std::ptrdiff_t m_any_flags = 0x4; // ObjectTypeFlags_t
                constexpr std::ptrdiff_t m_n_layer = 0x8; // int16
                constexpr std::ptrdiff_t m_aggregate_meshes = 0x10; // CUtlVector< AggregateMeshInfo_t >
                constexpr std::ptrdiff_t m_lod_setups = 0x28; // CUtlVector< AggregateLODSetup_t >
                constexpr std::ptrdiff_t m_vis_cluster_membership = 0x40; // CUtlVector< uint16 >
                constexpr std::ptrdiff_t m_fragment_transforms = 0x58; // CUtlVector< matrix3x4_t >
                constexpr std::ptrdiff_t m_renderable_model = 0x70; // CStrongHandle< InfoForResourceTypeCModel >
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace clutter_tile_t {
                constexpr std::ptrdiff_t m_n_first_instance = 0x0; // uint32
                constexpr std::ptrdiff_t m_n_last_instance = 0x4; // uint32
                constexpr std::ptrdiff_t m_bounds_ws = 0x8; // AABB_t
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace clutter_scene_object_t {
                constexpr std::ptrdiff_t m_bounds = 0x0; // AABB_t
                constexpr std::ptrdiff_t m_flags = 0x18; // ObjectTypeFlags_t
                constexpr std::ptrdiff_t m_n_layer = 0x1C; // int16
                constexpr std::ptrdiff_t m_instance_positions = 0x20; // CUtlVector< Vector >
                constexpr std::ptrdiff_t m_instance_scales = 0x50; // CUtlVector< float32 >
                constexpr std::ptrdiff_t m_instance_tint_srgb = 0x68; // CUtlVector< Color >
                constexpr std::ptrdiff_t m_tiles = 0x80; // CUtlVector< ClutterTile_t >
                constexpr std::ptrdiff_t m_renderable_model = 0x98; // CStrongHandle< InfoForResourceTypeCModel >
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace world_node_t {
                constexpr std::ptrdiff_t m_scene_objects = 0x0; // CUtlVector< SceneObject_t >
                constexpr std::ptrdiff_t m_info_overlays = 0x18; // CUtlVector< InfoOverlayData_t >
                constexpr std::ptrdiff_t m_vis_cluster_membership = 0x30; // CUtlVector< uint16 >
                constexpr std::ptrdiff_t m_aggregate_scene_objects = 0x48; // CUtlVector< AggregateSceneObject_t >
                constexpr std::ptrdiff_t m_clutter_scene_objects = 0x60; // CUtlVector< ClutterSceneObject_t >
                constexpr std::ptrdiff_t m_extra_vertex_stream_overrides = 0x78; // CUtlVector< ExtraVertexStreamOverride_t >
                constexpr std::ptrdiff_t m_material_overrides = 0x90; // CUtlVector< MaterialOverride_t >
                constexpr std::ptrdiff_t m_extra_vertex_streams = 0xA8; // CUtlVector< WorldNodeOnDiskBufferData_t >
                constexpr std::ptrdiff_t m_layer_names = 0xC0; // CUtlVector< CUtlString >
                constexpr std::ptrdiff_t m_scene_object_layer_indices = 0xD8; // CUtlVector< uint8 >
                constexpr std::ptrdiff_t m_overlay_layer_indices = 0xF0; // CUtlVector< uint8 >
                constexpr std::ptrdiff_t m_grass_file_name = 0x108; // CUtlString
                constexpr std::ptrdiff_t m_node_lighting_info = 0x110; // BakedLightingInfo_t
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace world_builder_params_t {
                constexpr std::ptrdiff_t m_fl_min_draw_volume_size = 0x0; // float32
                constexpr std::ptrdiff_t m_b_build_baked_lighting = 0x4; // bool
                constexpr std::ptrdiff_t m_v_lightmap_uv_scale = 0x8; // Vector2D
                constexpr std::ptrdiff_t m_n_compile_timestamp = 0x10; // uint64
                constexpr std::ptrdiff_t m_n_compile_fingerprint = 0x18; // uint64
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace node_data_t {
                constexpr std::ptrdiff_t m_n_parent = 0x0; // int32
                constexpr std::ptrdiff_t m_v_origin = 0x4; // Vector
                constexpr std::ptrdiff_t m_v_min_bounds = 0x10; // Vector
                constexpr std::ptrdiff_t m_v_max_bounds = 0x1C; // Vector
                constexpr std::ptrdiff_t m_fl_minimum_distance = 0x28; // float32
                constexpr std::ptrdiff_t m_child_node_indices = 0x30; // CUtlVector< int32 >
                constexpr std::ptrdiff_t m_world_node_prefix = 0x48; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace world_t {
                constexpr std::ptrdiff_t m_builder_params = 0x0; // WorldBuilderParams_t
                constexpr std::ptrdiff_t m_world_nodes = 0x20; // CUtlVector< NodeData_t >
                constexpr std::ptrdiff_t m_world_lighting_info = 0x38; // BakedLightingInfo_t
                constexpr std::ptrdiff_t m_entity_lumps = 0x68; // CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > >
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace voxel_vis_block_offset_t {
                constexpr std::ptrdiff_t m_n_offset = 0x0; // uint32
                constexpr std::ptrdiff_t m_n_element_count = 0x4; // uint32
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace c_voxel_visibility {
                constexpr std::ptrdiff_t m_n_base_cluster_count = 0x40; // uint32
                constexpr std::ptrdiff_t m_n_pvs_bytes_per_cluster = 0x44; // uint32
                constexpr std::ptrdiff_t m_v_min_bounds = 0x48; // Vector
                constexpr std::ptrdiff_t m_v_max_bounds = 0x54; // Vector
                constexpr std::ptrdiff_t m_fl_grid_size = 0x60; // float32
                constexpr std::ptrdiff_t m_n_sky_visibility_cluster = 0x64; // uint32
                constexpr std::ptrdiff_t m_n_sun_visibility_cluster = 0x68; // uint32
                constexpr std::ptrdiff_t m_node_block = 0x6C; // VoxelVisBlockOffset_t
                constexpr std::ptrdiff_t m_region_block = 0x74; // VoxelVisBlockOffset_t
                constexpr std::ptrdiff_t m_enclosed_cluster_list_block = 0x7C; // VoxelVisBlockOffset_t
                constexpr std::ptrdiff_t m_enclosed_clusters_block = 0x84; // VoxelVisBlockOffset_t
                constexpr std::ptrdiff_t m_masks_block = 0x8C; // VoxelVisBlockOffset_t
                constexpr std::ptrdiff_t m_n_vis_blocks = 0x94; // VoxelVisBlockOffset_t
            }
            // Parent: None
            // Fields count: 0
            namespace v_map_resource_data_t {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace info_for_resource_type_v_map_resource_data_t {
            }
        }
    }
}
