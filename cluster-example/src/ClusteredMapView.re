type tData = {
  location: {
    .
    latitude: float,
    longitude: float,
  },
};

[@bs.module "react-native-maps-super-cluster/ClusteredMapView"]
[@react.component]
external make: (~data: array(tData), ~accessor: unit => unit) => React.element =
  "ClusteredMapView";
