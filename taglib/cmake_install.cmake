# Install script for directory: E:/taglib-1.11.1/taglib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "E:/taglib-1.11.1/taglib")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
     "E:/taglib-1.11.1/taglib/lib/tag.lib")
    if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
        message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
    if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
        message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
file(INSTALL DESTINATION "E:/taglib-1.11.1/taglib/lib" TYPE STATIC_LIBRARY FILES "E:/taglib-1.11.1/taglib/Debug/tag.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
     "E:/taglib-1.11.1/taglib/lib/tag.lib")
    if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
        message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
    if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
        message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
file(INSTALL DESTINATION "E:/taglib-1.11.1/taglib/lib" TYPE STATIC_LIBRARY FILES "E:/taglib-1.11.1/taglib/Release/tag.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
     "E:/taglib-1.11.1/taglib/lib/tag.lib")
    if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
        message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
    if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
        message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
file(INSTALL DESTINATION "E:/taglib-1.11.1/taglib/lib" TYPE STATIC_LIBRARY FILES "E:/taglib-1.11.1/taglib/MinSizeRel/tag.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
     "E:/taglib-1.11.1/taglib/lib/tag.lib")
    if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
        message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
    if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
        message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
file(INSTALL DESTINATION "E:/taglib-1.11.1/taglib/lib" TYPE STATIC_LIBRARY FILES "E:/taglib-1.11.1/taglib/RelWithDebInfo/tag.lib")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "E:/taglib-1.11.1/taglib/include/taglib/tag.h;E:/taglib-1.11.1/taglib/include/taglib/fileref.h;E:/taglib-1.11.1/taglib/include/taglib/audioproperties.h;E:/taglib-1.11.1/taglib/include/taglib/taglib_export.h;E:/taglib-1.11.1/taglib/include/taglib/taglib_config.h;E:/taglib-1.11.1/taglib/include/taglib/taglib.h;E:/taglib-1.11.1/taglib/include/taglib/tstring.h;E:/taglib-1.11.1/taglib/include/taglib/tlist.h;E:/taglib-1.11.1/taglib/include/taglib/tlist.tcc;E:/taglib-1.11.1/taglib/include/taglib/tstringlist.h;E:/taglib-1.11.1/taglib/include/taglib/tbytevector.h;E:/taglib-1.11.1/taglib/include/taglib/tbytevectorlist.h;E:/taglib-1.11.1/taglib/include/taglib/tbytevectorstream.h;E:/taglib-1.11.1/taglib/include/taglib/tiostream.h;E:/taglib-1.11.1/taglib/include/taglib/tfile.h;E:/taglib-1.11.1/taglib/include/taglib/tfilestream.h;E:/taglib-1.11.1/taglib/include/taglib/tmap.h;E:/taglib-1.11.1/taglib/include/taglib/tmap.tcc;E:/taglib-1.11.1/taglib/include/taglib/tpropertymap.h;E:/taglib-1.11.1/taglib/include/taglib/trefcounter.h;E:/taglib-1.11.1/taglib/include/taglib/tdebuglistener.h;E:/taglib-1.11.1/taglib/include/taglib/mpegfile.h;E:/taglib-1.11.1/taglib/include/taglib/mpegproperties.h;E:/taglib-1.11.1/taglib/include/taglib/mpegheader.h;E:/taglib-1.11.1/taglib/include/taglib/xingheader.h;E:/taglib-1.11.1/taglib/include/taglib/id3v1tag.h;E:/taglib-1.11.1/taglib/include/taglib/id3v1genres.h;E:/taglib-1.11.1/taglib/include/taglib/id3v2extendedheader.h;E:/taglib-1.11.1/taglib/include/taglib/id3v2frame.h;E:/taglib-1.11.1/taglib/include/taglib/id3v2header.h;E:/taglib-1.11.1/taglib/include/taglib/id3v2synchdata.h;E:/taglib-1.11.1/taglib/include/taglib/id3v2footer.h;E:/taglib-1.11.1/taglib/include/taglib/id3v2framefactory.h;E:/taglib-1.11.1/taglib/include/taglib/id3v2tag.h;E:/taglib-1.11.1/taglib/include/taglib/attachedpictureframe.h;E:/taglib-1.11.1/taglib/include/taglib/commentsframe.h;E:/taglib-1.11.1/taglib/include/taglib/eventtimingcodesframe.h;E:/taglib-1.11.1/taglib/include/taglib/generalencapsulatedobjectframe.h;E:/taglib-1.11.1/taglib/include/taglib/ownershipframe.h;E:/taglib-1.11.1/taglib/include/taglib/popularimeterframe.h;E:/taglib-1.11.1/taglib/include/taglib/privateframe.h;E:/taglib-1.11.1/taglib/include/taglib/relativevolumeframe.h;E:/taglib-1.11.1/taglib/include/taglib/synchronizedlyricsframe.h;E:/taglib-1.11.1/taglib/include/taglib/textidentificationframe.h;E:/taglib-1.11.1/taglib/include/taglib/uniquefileidentifierframe.h;E:/taglib-1.11.1/taglib/include/taglib/unknownframe.h;E:/taglib-1.11.1/taglib/include/taglib/unsynchronizedlyricsframe.h;E:/taglib-1.11.1/taglib/include/taglib/urllinkframe.h;E:/taglib-1.11.1/taglib/include/taglib/chapterframe.h;E:/taglib-1.11.1/taglib/include/taglib/tableofcontentsframe.h;E:/taglib-1.11.1/taglib/include/taglib/podcastframe.h;E:/taglib-1.11.1/taglib/include/taglib/oggfile.h;E:/taglib-1.11.1/taglib/include/taglib/oggpage.h;E:/taglib-1.11.1/taglib/include/taglib/oggpageheader.h;E:/taglib-1.11.1/taglib/include/taglib/xiphcomment.h;E:/taglib-1.11.1/taglib/include/taglib/vorbisfile.h;E:/taglib-1.11.1/taglib/include/taglib/vorbisproperties.h;E:/taglib-1.11.1/taglib/include/taglib/oggflacfile.h;E:/taglib-1.11.1/taglib/include/taglib/speexfile.h;E:/taglib-1.11.1/taglib/include/taglib/speexproperties.h;E:/taglib-1.11.1/taglib/include/taglib/opusfile.h;E:/taglib-1.11.1/taglib/include/taglib/opusproperties.h;E:/taglib-1.11.1/taglib/include/taglib/flacfile.h;E:/taglib-1.11.1/taglib/include/taglib/flacpicture.h;E:/taglib-1.11.1/taglib/include/taglib/flacproperties.h;E:/taglib-1.11.1/taglib/include/taglib/flacmetadatablock.h;E:/taglib-1.11.1/taglib/include/taglib/apefile.h;E:/taglib-1.11.1/taglib/include/taglib/apeproperties.h;E:/taglib-1.11.1/taglib/include/taglib/apetag.h;E:/taglib-1.11.1/taglib/include/taglib/apefooter.h;E:/taglib-1.11.1/taglib/include/taglib/apeitem.h;E:/taglib-1.11.1/taglib/include/taglib/mpcfile.h;E:/taglib-1.11.1/taglib/include/taglib/mpcproperties.h;E:/taglib-1.11.1/taglib/include/taglib/wavpackfile.h;E:/taglib-1.11.1/taglib/include/taglib/wavpackproperties.h;E:/taglib-1.11.1/taglib/include/taglib/trueaudiofile.h;E:/taglib-1.11.1/taglib/include/taglib/trueaudioproperties.h;E:/taglib-1.11.1/taglib/include/taglib/rifffile.h;E:/taglib-1.11.1/taglib/include/taglib/aifffile.h;E:/taglib-1.11.1/taglib/include/taglib/aiffproperties.h;E:/taglib-1.11.1/taglib/include/taglib/wavfile.h;E:/taglib-1.11.1/taglib/include/taglib/wavproperties.h;E:/taglib-1.11.1/taglib/include/taglib/infotag.h;E:/taglib-1.11.1/taglib/include/taglib/asffile.h;E:/taglib-1.11.1/taglib/include/taglib/asfproperties.h;E:/taglib-1.11.1/taglib/include/taglib/asftag.h;E:/taglib-1.11.1/taglib/include/taglib/asfattribute.h;E:/taglib-1.11.1/taglib/include/taglib/asfpicture.h;E:/taglib-1.11.1/taglib/include/taglib/mp4file.h;E:/taglib-1.11.1/taglib/include/taglib/mp4atom.h;E:/taglib-1.11.1/taglib/include/taglib/mp4tag.h;E:/taglib-1.11.1/taglib/include/taglib/mp4item.h;E:/taglib-1.11.1/taglib/include/taglib/mp4properties.h;E:/taglib-1.11.1/taglib/include/taglib/mp4coverart.h;E:/taglib-1.11.1/taglib/include/taglib/modfilebase.h;E:/taglib-1.11.1/taglib/include/taglib/modfile.h;E:/taglib-1.11.1/taglib/include/taglib/modtag.h;E:/taglib-1.11.1/taglib/include/taglib/modproperties.h;E:/taglib-1.11.1/taglib/include/taglib/itfile.h;E:/taglib-1.11.1/taglib/include/taglib/itproperties.h;E:/taglib-1.11.1/taglib/include/taglib/s3mfile.h;E:/taglib-1.11.1/taglib/include/taglib/s3mproperties.h;E:/taglib-1.11.1/taglib/include/taglib/xmfile.h;E:/taglib-1.11.1/taglib/include/taglib/xmproperties.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "E:/taglib-1.11.1/taglib/include/taglib" TYPE FILE FILES
    "E:/taglib-1.11.1/taglib/tag.h"
    "E:/taglib-1.11.1/taglib/fileref.h"
    "E:/taglib-1.11.1/taglib/audioproperties.h"
    "E:/taglib-1.11.1/taglib/taglib_export.h"
    "E:/taglib-1.11.1/taglib/../taglib_config.h"
    "E:/taglib-1.11.1/taglib/toolkit/taglib.h"
    "E:/taglib-1.11.1/taglib/toolkit/tstring.h"
    "E:/taglib-1.11.1/taglib/toolkit/tlist.h"
    "E:/taglib-1.11.1/taglib/toolkit/tlist.tcc"
    "E:/taglib-1.11.1/taglib/toolkit/tstringlist.h"
    "E:/taglib-1.11.1/taglib/toolkit/tbytevector.h"
    "E:/taglib-1.11.1/taglib/toolkit/tbytevectorlist.h"
    "E:/taglib-1.11.1/taglib/toolkit/tbytevectorstream.h"
    "E:/taglib-1.11.1/taglib/toolkit/tiostream.h"
    "E:/taglib-1.11.1/taglib/toolkit/tfile.h"
    "E:/taglib-1.11.1/taglib/toolkit/tfilestream.h"
    "E:/taglib-1.11.1/taglib/toolkit/tmap.h"
    "E:/taglib-1.11.1/taglib/toolkit/tmap.tcc"
    "E:/taglib-1.11.1/taglib/toolkit/tpropertymap.h"
    "E:/taglib-1.11.1/taglib/toolkit/trefcounter.h"
    "E:/taglib-1.11.1/taglib/toolkit/tdebuglistener.h"
    "E:/taglib-1.11.1/taglib/mpeg/mpegfile.h"
    "E:/taglib-1.11.1/taglib/mpeg/mpegproperties.h"
    "E:/taglib-1.11.1/taglib/mpeg/mpegheader.h"
    "E:/taglib-1.11.1/taglib/mpeg/xingheader.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v1/id3v1tag.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v1/id3v1genres.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/id3v2extendedheader.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/id3v2frame.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/id3v2header.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/id3v2synchdata.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/id3v2footer.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/id3v2framefactory.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/id3v2tag.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/frames/attachedpictureframe.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/frames/commentsframe.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/frames/eventtimingcodesframe.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/frames/generalencapsulatedobjectframe.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/frames/ownershipframe.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/frames/popularimeterframe.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/frames/privateframe.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/frames/relativevolumeframe.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/frames/synchronizedlyricsframe.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/frames/textidentificationframe.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/frames/uniquefileidentifierframe.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/frames/unknownframe.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/frames/unsynchronizedlyricsframe.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/frames/urllinkframe.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/frames/chapterframe.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/frames/tableofcontentsframe.h"
    "E:/taglib-1.11.1/taglib/mpeg/id3v2/frames/podcastframe.h"
    "E:/taglib-1.11.1/taglib/ogg/oggfile.h"
    "E:/taglib-1.11.1/taglib/ogg/oggpage.h"
    "E:/taglib-1.11.1/taglib/ogg/oggpageheader.h"
    "E:/taglib-1.11.1/taglib/ogg/xiphcomment.h"
    "E:/taglib-1.11.1/taglib/ogg/vorbis/vorbisfile.h"
    "E:/taglib-1.11.1/taglib/ogg/vorbis/vorbisproperties.h"
    "E:/taglib-1.11.1/taglib/ogg/flac/oggflacfile.h"
    "E:/taglib-1.11.1/taglib/ogg/speex/speexfile.h"
    "E:/taglib-1.11.1/taglib/ogg/speex/speexproperties.h"
    "E:/taglib-1.11.1/taglib/ogg/opus/opusfile.h"
    "E:/taglib-1.11.1/taglib/ogg/opus/opusproperties.h"
    "E:/taglib-1.11.1/taglib/flac/flacfile.h"
    "E:/taglib-1.11.1/taglib/flac/flacpicture.h"
    "E:/taglib-1.11.1/taglib/flac/flacproperties.h"
    "E:/taglib-1.11.1/taglib/flac/flacmetadatablock.h"
    "E:/taglib-1.11.1/taglib/ape/apefile.h"
    "E:/taglib-1.11.1/taglib/ape/apeproperties.h"
    "E:/taglib-1.11.1/taglib/ape/apetag.h"
    "E:/taglib-1.11.1/taglib/ape/apefooter.h"
    "E:/taglib-1.11.1/taglib/ape/apeitem.h"
    "E:/taglib-1.11.1/taglib/mpc/mpcfile.h"
    "E:/taglib-1.11.1/taglib/mpc/mpcproperties.h"
    "E:/taglib-1.11.1/taglib/wavpack/wavpackfile.h"
    "E:/taglib-1.11.1/taglib/wavpack/wavpackproperties.h"
    "E:/taglib-1.11.1/taglib/trueaudio/trueaudiofile.h"
    "E:/taglib-1.11.1/taglib/trueaudio/trueaudioproperties.h"
    "E:/taglib-1.11.1/taglib/riff/rifffile.h"
    "E:/taglib-1.11.1/taglib/riff/aiff/aifffile.h"
    "E:/taglib-1.11.1/taglib/riff/aiff/aiffproperties.h"
    "E:/taglib-1.11.1/taglib/riff/wav/wavfile.h"
    "E:/taglib-1.11.1/taglib/riff/wav/wavproperties.h"
    "E:/taglib-1.11.1/taglib/riff/wav/infotag.h"
    "E:/taglib-1.11.1/taglib/asf/asffile.h"
    "E:/taglib-1.11.1/taglib/asf/asfproperties.h"
    "E:/taglib-1.11.1/taglib/asf/asftag.h"
    "E:/taglib-1.11.1/taglib/asf/asfattribute.h"
    "E:/taglib-1.11.1/taglib/asf/asfpicture.h"
    "E:/taglib-1.11.1/taglib/mp4/mp4file.h"
    "E:/taglib-1.11.1/taglib/mp4/mp4atom.h"
    "E:/taglib-1.11.1/taglib/mp4/mp4tag.h"
    "E:/taglib-1.11.1/taglib/mp4/mp4item.h"
    "E:/taglib-1.11.1/taglib/mp4/mp4properties.h"
    "E:/taglib-1.11.1/taglib/mp4/mp4coverart.h"
    "E:/taglib-1.11.1/taglib/mod/modfilebase.h"
    "E:/taglib-1.11.1/taglib/mod/modfile.h"
    "E:/taglib-1.11.1/taglib/mod/modtag.h"
    "E:/taglib-1.11.1/taglib/mod/modproperties.h"
    "E:/taglib-1.11.1/taglib/it/itfile.h"
    "E:/taglib-1.11.1/taglib/it/itproperties.h"
    "E:/taglib-1.11.1/taglib/s3m/s3mfile.h"
    "E:/taglib-1.11.1/taglib/s3m/s3mproperties.h"
    "E:/taglib-1.11.1/taglib/xm/xmfile.h"
    "E:/taglib-1.11.1/taglib/xm/xmproperties.h"
    )
endif()

