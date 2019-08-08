
"use strict";

let BatteryState = require('./BatteryState.js');
let CameraInfo = require('./CameraInfo.js');
let ChannelFloat32 = require('./ChannelFloat32.js');
let CompressedImage = require('./CompressedImage.js');
let FluidPressure = require('./FluidPressure.js');
let Illuminance = require('./Illuminance.js');
let Image = require('./Image.js');
let Imu = require('./Imu.js');
let JointState = require('./JointState.js');
let Joy = require('./Joy.js');
let JoyFeedback = require('./JoyFeedback.js');
let JoyFeedbackArray = require('./JoyFeedbackArray.js');
let LaserEcho = require('./LaserEcho.js');
let LaserScan = require('./LaserScan.js');
let MagneticField = require('./MagneticField.js');
let MultiDOFJointState = require('./MultiDOFJointState.js');
let MultiEchoLaserScan = require('./MultiEchoLaserScan.js');
let NavSatFix = require('./NavSatFix.js');
let NavSatStatus = require('./NavSatStatus.js');
let PointCloud = require('./PointCloud.js');
let PointCloud2 = require('./PointCloud2.js');
let PointField = require('./PointField.js');
let Range = require('./Range.js');
let RegionOfInterest = require('./RegionOfInterest.js');
let RelativeHumidity = require('./RelativeHumidity.js');
let Temperature = require('./Temperature.js');
let TimeReference = require('./TimeReference.js');

module.exports = {
  BatteryState: BatteryState,
  CameraInfo: CameraInfo,
  ChannelFloat32: ChannelFloat32,
  CompressedImage: CompressedImage,
  FluidPressure: FluidPressure,
  Illuminance: Illuminance,
  Image: Image,
  Imu: Imu,
  JointState: JointState,
  Joy: Joy,
  JoyFeedback: JoyFeedback,
  JoyFeedbackArray: JoyFeedbackArray,
  LaserEcho: LaserEcho,
  LaserScan: LaserScan,
  MagneticField: MagneticField,
  MultiDOFJointState: MultiDOFJointState,
  MultiEchoLaserScan: MultiEchoLaserScan,
  NavSatFix: NavSatFix,
  NavSatStatus: NavSatStatus,
  PointCloud: PointCloud,
  PointCloud2: PointCloud2,
  PointField: PointField,
  Range: Range,
  RegionOfInterest: RegionOfInterest,
  RelativeHumidity: RelativeHumidity,
  Temperature: Temperature,
  TimeReference: TimeReference,
};
