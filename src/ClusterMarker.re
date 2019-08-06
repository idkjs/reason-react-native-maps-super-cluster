/* Based on react-native-maps-super-cluster v1.5.0
ClusterMarker.propTypes = {
  renderCluster: PropTypes.func,
  onPress: PropTypes.func.isRequired,
  geometry: PropTypes.object.isRequired,
  properties: PropTypes.object.isRequired,
} */

// No idea what this should be
type onPressType = {
  .
};


[@react.component] [@bs.module "react-native-maps-super-cluster/MapMarker"]
external make:
  (
      ~renderCluster: ReactNative.Event.syntheticEvent(onPressType) => unit=?,
      ~onPress: ReactNative.Event.syntheticEvent(onPressType) => unit=?,
      ~geometry: unit=?,
      ~properties: unit=?
  ) =>
  React.element =
  "default";
