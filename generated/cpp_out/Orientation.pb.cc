// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Orientation.proto

#include "Orientation.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_Orientation_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Orientation_Orientation_2eproto;
namespace org {
namespace copdai {
namespace core {
namespace model {
class OrientationHistoryDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<OrientationHistory> _instance;
} _OrientationHistory_default_instance_;
class OrientationDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Orientation> _instance;
} _Orientation_default_instance_;
}  // namespace model
}  // namespace core
}  // namespace copdai
}  // namespace org
static void InitDefaultsscc_info_Orientation_Orientation_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::org::copdai::core::model::_Orientation_default_instance_;
    new (ptr) ::org::copdai::core::model::Orientation();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::org::copdai::core::model::Orientation::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Orientation_Orientation_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Orientation_Orientation_2eproto}, {}};

static void InitDefaultsscc_info_OrientationHistory_Orientation_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::org::copdai::core::model::_OrientationHistory_default_instance_;
    new (ptr) ::org::copdai::core::model::OrientationHistory();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::org::copdai::core::model::OrientationHistory::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_OrientationHistory_Orientation_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_OrientationHistory_Orientation_2eproto}, {
      &scc_info_Orientation_Orientation_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Orientation_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Orientation_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Orientation_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Orientation_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::org::copdai::core::model::OrientationHistory, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::org::copdai::core::model::OrientationHistory, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::org::copdai::core::model::OrientationHistory, orientations_),
  PROTOBUF_FIELD_OFFSET(::org::copdai::core::model::OrientationHistory, senttime_),
  PROTOBUF_FIELD_OFFSET(::org::copdai::core::model::OrientationHistory, starttime_),
  PROTOBUF_FIELD_OFFSET(::org::copdai::core::model::OrientationHistory, endtime_),
  ~0u,
  0,
  1,
  2,
  PROTOBUF_FIELD_OFFSET(::org::copdai::core::model::Orientation, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::org::copdai::core::model::Orientation, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::org::copdai::core::model::Orientation, azimuth_),
  PROTOBUF_FIELD_OFFSET(::org::copdai::core::model::Orientation, pitch_),
  PROTOBUF_FIELD_OFFSET(::org::copdai::core::model::Orientation, roll_),
  PROTOBUF_FIELD_OFFSET(::org::copdai::core::model::Orientation, time_),
  0,
  1,
  2,
  3,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::org::copdai::core::model::OrientationHistory)},
  { 13, 22, sizeof(::org::copdai::core::model::Orientation)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::org::copdai::core::model::_OrientationHistory_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::org::copdai::core::model::_Orientation_default_instance_),
};

const char descriptor_table_protodef_Orientation_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021Orientation.proto\022\025org.copdai.core.mod"
  "el\"\204\001\n\022OrientationHistory\0228\n\014orientation"
  "s\030\001 \003(\0132\".org.copdai.core.model.Orientat"
  "ion\022\020\n\010sentTime\030\r \002(\001\022\021\n\tstartTime\030\016 \002(\001"
  "\022\017\n\007endTime\030\017 \002(\001\"I\n\013Orientation\022\017\n\007azim"
  "uth\030\001 \002(\001\022\r\n\005pitch\030\002 \002(\001\022\014\n\004roll\030\003 \002(\001\022\014"
  "\n\004time\030\017 \002(\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Orientation_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Orientation_2eproto_sccs[2] = {
  &scc_info_Orientation_Orientation_2eproto.base,
  &scc_info_OrientationHistory_Orientation_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Orientation_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Orientation_2eproto = {
  false, false, descriptor_table_protodef_Orientation_2eproto, "Orientation.proto", 252,
  &descriptor_table_Orientation_2eproto_once, descriptor_table_Orientation_2eproto_sccs, descriptor_table_Orientation_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_Orientation_2eproto::offsets,
  file_level_metadata_Orientation_2eproto, 2, file_level_enum_descriptors_Orientation_2eproto, file_level_service_descriptors_Orientation_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Orientation_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Orientation_2eproto)), true);
namespace org {
namespace copdai {
namespace core {
namespace model {

// ===================================================================

void OrientationHistory::InitAsDefaultInstance() {
}
class OrientationHistory::_Internal {
 public:
  using HasBits = decltype(std::declval<OrientationHistory>()._has_bits_);
  static void set_has_senttime(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_starttime(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_endtime(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000007) ^ 0x00000007) != 0;
  }
};

OrientationHistory::OrientationHistory(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  orientations_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:org.copdai.core.model.OrientationHistory)
}
OrientationHistory::OrientationHistory(const OrientationHistory& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_),
      orientations_(from.orientations_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&senttime_, &from.senttime_,
    static_cast<size_t>(reinterpret_cast<char*>(&endtime_) -
    reinterpret_cast<char*>(&senttime_)) + sizeof(endtime_));
  // @@protoc_insertion_point(copy_constructor:org.copdai.core.model.OrientationHistory)
}

void OrientationHistory::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_OrientationHistory_Orientation_2eproto.base);
  ::memset(&senttime_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&endtime_) -
      reinterpret_cast<char*>(&senttime_)) + sizeof(endtime_));
}

OrientationHistory::~OrientationHistory() {
  // @@protoc_insertion_point(destructor:org.copdai.core.model.OrientationHistory)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void OrientationHistory::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void OrientationHistory::ArenaDtor(void* object) {
  OrientationHistory* _this = reinterpret_cast< OrientationHistory* >(object);
  (void)_this;
}
void OrientationHistory::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void OrientationHistory::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const OrientationHistory& OrientationHistory::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_OrientationHistory_Orientation_2eproto.base);
  return *internal_default_instance();
}


void OrientationHistory::Clear() {
// @@protoc_insertion_point(message_clear_start:org.copdai.core.model.OrientationHistory)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  orientations_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&senttime_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&endtime_) -
        reinterpret_cast<char*>(&senttime_)) + sizeof(endtime_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* OrientationHistory::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .org.copdai.core.model.Orientation orientations = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_orientations(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // required double sentTime = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 105)) {
          _Internal::set_has_senttime(&has_bits);
          senttime_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // required double startTime = 14;
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 113)) {
          _Internal::set_has_starttime(&has_bits);
          starttime_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // required double endTime = 15;
      case 15:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 121)) {
          _Internal::set_has_endtime(&has_bits);
          endtime_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* OrientationHistory::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:org.copdai.core.model.OrientationHistory)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .org.copdai.core.model.Orientation orientations = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_orientations_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_orientations(i), target, stream);
  }

  cached_has_bits = _has_bits_[0];
  // required double sentTime = 13;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(13, this->_internal_senttime(), target);
  }

  // required double startTime = 14;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(14, this->_internal_starttime(), target);
  }

  // required double endTime = 15;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(15, this->_internal_endtime(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:org.copdai.core.model.OrientationHistory)
  return target;
}

size_t OrientationHistory::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:org.copdai.core.model.OrientationHistory)
  size_t total_size = 0;

  if (_internal_has_senttime()) {
    // required double sentTime = 13;
    total_size += 1 + 8;
  }

  if (_internal_has_starttime()) {
    // required double startTime = 14;
    total_size += 1 + 8;
  }

  if (_internal_has_endtime()) {
    // required double endTime = 15;
    total_size += 1 + 8;
  }

  return total_size;
}
size_t OrientationHistory::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:org.copdai.core.model.OrientationHistory)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required double sentTime = 13;
    total_size += 1 + 8;

    // required double startTime = 14;
    total_size += 1 + 8;

    // required double endTime = 15;
    total_size += 1 + 8;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .org.copdai.core.model.Orientation orientations = 1;
  total_size += 1UL * this->_internal_orientations_size();
  for (const auto& msg : this->orientations_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void OrientationHistory::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:org.copdai.core.model.OrientationHistory)
  GOOGLE_DCHECK_NE(&from, this);
  const OrientationHistory* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<OrientationHistory>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:org.copdai.core.model.OrientationHistory)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:org.copdai.core.model.OrientationHistory)
    MergeFrom(*source);
  }
}

void OrientationHistory::MergeFrom(const OrientationHistory& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:org.copdai.core.model.OrientationHistory)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  orientations_.MergeFrom(from.orientations_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      senttime_ = from.senttime_;
    }
    if (cached_has_bits & 0x00000002u) {
      starttime_ = from.starttime_;
    }
    if (cached_has_bits & 0x00000004u) {
      endtime_ = from.endtime_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void OrientationHistory::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:org.copdai.core.model.OrientationHistory)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OrientationHistory::CopyFrom(const OrientationHistory& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:org.copdai.core.model.OrientationHistory)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OrientationHistory::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(orientations_)) return false;
  return true;
}

void OrientationHistory::InternalSwap(OrientationHistory* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  orientations_.InternalSwap(&other->orientations_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(OrientationHistory, endtime_)
      + sizeof(OrientationHistory::endtime_)
      - PROTOBUF_FIELD_OFFSET(OrientationHistory, senttime_)>(
          reinterpret_cast<char*>(&senttime_),
          reinterpret_cast<char*>(&other->senttime_));
}

::PROTOBUF_NAMESPACE_ID::Metadata OrientationHistory::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Orientation::InitAsDefaultInstance() {
}
class Orientation::_Internal {
 public:
  using HasBits = decltype(std::declval<Orientation>()._has_bits_);
  static void set_has_azimuth(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_pitch(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_roll(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_time(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x0000000f) ^ 0x0000000f) != 0;
  }
};

Orientation::Orientation(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:org.copdai.core.model.Orientation)
}
Orientation::Orientation(const Orientation& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&azimuth_, &from.azimuth_,
    static_cast<size_t>(reinterpret_cast<char*>(&time_) -
    reinterpret_cast<char*>(&azimuth_)) + sizeof(time_));
  // @@protoc_insertion_point(copy_constructor:org.copdai.core.model.Orientation)
}

void Orientation::SharedCtor() {
  ::memset(&azimuth_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&time_) -
      reinterpret_cast<char*>(&azimuth_)) + sizeof(time_));
}

Orientation::~Orientation() {
  // @@protoc_insertion_point(destructor:org.copdai.core.model.Orientation)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Orientation::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Orientation::ArenaDtor(void* object) {
  Orientation* _this = reinterpret_cast< Orientation* >(object);
  (void)_this;
}
void Orientation::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Orientation::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Orientation& Orientation::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Orientation_Orientation_2eproto.base);
  return *internal_default_instance();
}


void Orientation::Clear() {
// @@protoc_insertion_point(message_clear_start:org.copdai.core.model.Orientation)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    ::memset(&azimuth_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&time_) -
        reinterpret_cast<char*>(&azimuth_)) + sizeof(time_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Orientation::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required double azimuth = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          _Internal::set_has_azimuth(&has_bits);
          azimuth_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // required double pitch = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          _Internal::set_has_pitch(&has_bits);
          pitch_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // required double roll = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          _Internal::set_has_roll(&has_bits);
          roll_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // required double time = 15;
      case 15:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 121)) {
          _Internal::set_has_time(&has_bits);
          time_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Orientation::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:org.copdai.core.model.Orientation)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required double azimuth = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_azimuth(), target);
  }

  // required double pitch = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_pitch(), target);
  }

  // required double roll = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_roll(), target);
  }

  // required double time = 15;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(15, this->_internal_time(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:org.copdai.core.model.Orientation)
  return target;
}

size_t Orientation::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:org.copdai.core.model.Orientation)
  size_t total_size = 0;

  if (_internal_has_azimuth()) {
    // required double azimuth = 1;
    total_size += 1 + 8;
  }

  if (_internal_has_pitch()) {
    // required double pitch = 2;
    total_size += 1 + 8;
  }

  if (_internal_has_roll()) {
    // required double roll = 3;
    total_size += 1 + 8;
  }

  if (_internal_has_time()) {
    // required double time = 15;
    total_size += 1 + 8;
  }

  return total_size;
}
size_t Orientation::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:org.copdai.core.model.Orientation)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required double azimuth = 1;
    total_size += 1 + 8;

    // required double pitch = 2;
    total_size += 1 + 8;

    // required double roll = 3;
    total_size += 1 + 8;

    // required double time = 15;
    total_size += 1 + 8;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Orientation::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:org.copdai.core.model.Orientation)
  GOOGLE_DCHECK_NE(&from, this);
  const Orientation* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Orientation>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:org.copdai.core.model.Orientation)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:org.copdai.core.model.Orientation)
    MergeFrom(*source);
  }
}

void Orientation::MergeFrom(const Orientation& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:org.copdai.core.model.Orientation)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      azimuth_ = from.azimuth_;
    }
    if (cached_has_bits & 0x00000002u) {
      pitch_ = from.pitch_;
    }
    if (cached_has_bits & 0x00000004u) {
      roll_ = from.roll_;
    }
    if (cached_has_bits & 0x00000008u) {
      time_ = from.time_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Orientation::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:org.copdai.core.model.Orientation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Orientation::CopyFrom(const Orientation& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:org.copdai.core.model.Orientation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Orientation::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void Orientation::InternalSwap(Orientation* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Orientation, time_)
      + sizeof(Orientation::time_)
      - PROTOBUF_FIELD_OFFSET(Orientation, azimuth_)>(
          reinterpret_cast<char*>(&azimuth_),
          reinterpret_cast<char*>(&other->azimuth_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Orientation::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace model
}  // namespace core
}  // namespace copdai
}  // namespace org
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::org::copdai::core::model::OrientationHistory* Arena::CreateMaybeMessage< ::org::copdai::core::model::OrientationHistory >(Arena* arena) {
  return Arena::CreateMessageInternal< ::org::copdai::core::model::OrientationHistory >(arena);
}
template<> PROTOBUF_NOINLINE ::org::copdai::core::model::Orientation* Arena::CreateMaybeMessage< ::org::copdai::core::model::Orientation >(Arena* arena) {
  return Arena::CreateMessageInternal< ::org::copdai::core::model::Orientation >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>