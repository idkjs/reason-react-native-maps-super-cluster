open ReactNative;

[@react.component]
let app = () => {
  <ClusteredMapView
    data=[
      {
        location: {
          latitude: 1,
          longitude: 1,
        },
      },
      {
        location: {
          latitude: 1,
          longitude: 1,
        },
      },
    ]
    accessor={m => m.location}
  />;
};
